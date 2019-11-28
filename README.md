## WeChat RedEnvelopes Tweak (微信红包插件)









## 基本原理

&emsp; 在 App 启动时，通过 dyld (the dynamic link editor) 加载我们注入的动态库，从而进行 hook ，而之所以能够执行注入的动态库，是因为使用了 Cydia Substrate 库，这个库能在程序运行的时候动态加载注入的动态库，而非越狱手机里面是没有的，所以我们需要直接将这个库打包进 ipa 中，使用它的 API 实现注入。

## 打开终端

&emsp; Terminal 一般 Mac 电脑自带，打开 Terminal 执行后续操作。

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/Terminal.png" width="20%" />
</div>

## 安装 theos

&emsp; theos 是一个越狱开发工具包，它可以生成 iOS app 以及 tweak 等程序的框架，并提供 makefile 来编译、打包和安装。

- 从 Github 下载 theos ，进行如下操作：

```
export THEOS=/opt/theos
rm -rf $THEOS # 如果之前已经安装过 theos，请先删除，然后下载最新版
sudo git clone --recursive https://github.com/theos/theos.git $THEOS
```

&emsp; 执行命令后，显示如下：

```
Cloning into '/opt/theos'...
remote: Enumerating objects: 18, done.
remote: Counting objects: 100% (18/18), done.
remote: Compressing objects: 100% (14/14), done.
remote: Total 8802 (delta 4), reused 9 (delta 4), pack-reused 8784
Receiving objects: 100% (8802/8802), 2.20 MiB | 9.00 KiB/s, done.
Resolving deltas: 100% (5467/5467), done.
Submodule 'vendor/dm.pl' (https://github.com/theos/dm.pl.git) registered for path 'vendor/dm.pl'
Submodule 'vendor/include' (https://github.com/theos/headers.git) registered for path 'vendor/include'
Submodule 'vendor/lib' (https://github.com/theos/lib.git) registered for path 'vendor/lib'
Submodule 'vendor/logos' (https://github.com/theos/logos.git) registered for path 'vendor/logos'
Submodule 'vendor/nic' (https://github.com/theos/nic.git) registered for path 'vendor/nic'
Cloning into '/opt/theos/vendor/dm.pl'...
remote: Enumerating objects: 142, done.        
remote: Total 142 (delta 0), reused 0 (delta 0), pack-reused 142        
Receiving objects: 100% (142/142), 54.20 KiB | 9.00 KiB/s, done.
Resolving deltas: 100% (72/72), done.
...
...
...
Submodule path 'vendor/include/rocketbootstrap/LightMessaging': checked out '496257b11c3e906333797639355db9a43015eb50'
Submodule path 'vendor/lib': checked out 'b1d502cc632ec349f8e2b3df9d7630bad64fd25e'
Submodule path 'vendor/logos': checked out 'a54760ea60acf45fa48267b9fb344c0317d9351c'
Submodule path 'vendor/nic': checked out '794d210f81198c6aef4f0ab8d04bd74ffe149f51'
```

- 配置 ldid

&emsp; ldid 是用于对 iOS 可执行文件进行签名的工具，可以在越狱 iOS 中替换 Xcode 自带的签名工具。

&emsp; 从 [http://joedj.net/ldid](http://joedj.net/ldid) 下载，将其移动到 /opt/theos/bin 目录下，然后设置可执行权限。

```
# cd <下载ldid的目录>
cd ~/Downloads/
sudo mv ldid /opt/theos/bin
sudo chmod 777 /opt/theos/bin/ldid
```

- 配置环境变量

&emsp; 使用命令 `vi ~/.bash_profile` 或者 `open -e ~/.bash_profile` ，在 .bash_profile 文件的最后加入 (否则每次重启 Terminal 都要重新 export)

```
export PATH=/opt/theos/bin:$PATH
export THEOS=/opt/theos
```

&emsp; 保存并退出，使用命令 `source ~/.bash_profile` ，立即生效。

- PS:  也可以使用 [iOSOpenDev](http://iosopendev.com)

&emsp; iOSOpenDev 集成在 Xcode 中，提供了一些模板，可直接使用 Xcode 进行开发。只是这个工具停止更新，对高版本的 Xcode 不能很好地支持。本人安装遇到了许多问题，通过查阅许多的资料，最后在 Xcode 中显示了该工具。若安装失败，则参考 [iOSOpenDev Wiki](https://github.com/kokoabim/iOSOpenDev/wiki) 或者其它资料。

## tweak

### 何谓 tweak ?

&emsp; tweak 定义是：对复杂的系统—通常是电子设备—进行微调或修改来增强其功能。而在 iOS 当中，tweak  是指那些能够增强其它进程功能的 dylib 。可以将 tweak 理解为一个外挂，只不过这个外挂是以动态链接库的方式注入到目标应用当中。我们已经很了解外挂其实就是用来做一些原本的应用无法做到的事情。

### 创建 tweak

&emsp; 使用 nic.pl 创建 tweak ，若提示无此命令，请根据上述步骤配置环境变量，或者不嫌麻烦使用 /opt/theos/bin/nic.pl ，根据提示选择 iphone/tweak ，接着分别输入：

- 项目名
- 该 deb 包的名字（类似 bundle identifier，此 bundle identifier 与要 hook 的 app 的 bundle identifier 不是同一个）
- 作者/维护者
- tweak 作用对象的 bundle identifier（比如微信为com.tencent.xin）
- tweak 安装完成后需要重启的应用名（比如微信为WeChat）

&emsp; 如下图所示：

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/nic_create_tweak.png" width="60%" />
</div>

&emsp; 完成后会看到四个文件( make 后将生成 .theos 、obj 文件夹)：Makefile &nbsp; wcodtplugin.plist &nbsp; control &nbsp; Tweak.xm 。

- Makefile

&emsp; 工程用到的文件、框架、库等信息。该文件过于简单，还需要添加一些信息，如：<br />

&emsp; 指定处理器架构 `ARCHS = armv7 arm64` <br />
&emsp; 指定 SDK 版本 `TARGET = iphone:latest:8.0` <br />
&emsp; 导入所需的 framework 等。<br />

&emsp; 修改后的 Makefile 文件如下所示：

```
ARCHS = armv7 arm64
TARGET = iphone:latest:8.0
THEOS_MAKE_PATH = /opt/theos/makefiles

include $(THEOS_MAKE_PATH)/common.mk

TWEAK_NAME = wcodtplugin
$(TWEAK_NAME)_FILES = $(wildcard src/*.m) src/Tweak.xm
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation

src/xxa.m_CFLAGS = -fobjc-arc
...
src/xxz.m_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
    install.exec "killall -9 WeChat"
```

- wcodtplugin.plist

&emsp; 该文件中的 Bundles : 指定 bundle 为 tweak 的作用对象，也可添加多个 bundle ，指定多个为 tweak 作用对象。

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/tweak_plist.png" width="60%" />
</div>

- control

&emsp; 该 tweak 所需的基本信息 (其实大部分都是创建 tweak 所填写的信息) 

```
Package: com.aple.wcodtplugin
Name: wcodtplugin
Depends: mobilesubstrate
Version: 0.0.1 # 版本号
Architecture: iphoneos-arm
Description: An awesome MobileSubstrate tweak! # 填写项目描述
Maintainer: dyf # 维护者
Author: dyf # 作者
Section: Tweaks
```

- Tweak.xm

&emsp; 重点文件，用来编写 hook 代码，因为支持 Logos 和 C/C++ 语法，可以让我们不用去写一些 runtime 方法 (必要时候还是要写) ，从而进行 hook 。

&emsp; PS:  .x 文件支持 Logos 语法，.xm 文件支持 Logos 和 C/C++ 语法。

### Logos 常用语法

- %hook

&emsp; 指定需要 hook 的类，以%end结尾。

- %orig

&emsp; 在 %hook 内部使用，执行 hook 住的方法原代码。

- %new

&emsp; 在 %hook 内部使用，给 class 添加新方法，与 class_addMethod 相同。<br />
&emsp; 与 Category 中添加方法的区别：Category 为编译时添加，class_addMethod 为动态添加。<br />
&emsp; warning ：添加的方法需要在 @interface 中进行声明。 <br />

- %c

&emsp; 获取一个类，等同于 objc_getClass 、NSClassFromString 。

- MSHookIvar<id>(self, "m_tableViewMgr")

&emsp; 在 %hook 内部使用，获取一个类的私有成员变量。

> %hook、%log、%orig 等都是 mobilesubstrate 的 MobileHooker 模块提供的宏，除此之外还有 %group  %init  %ctor 等，其实也就是把 method swizzling 相关的方法封装成了各种宏标记，若想深入了解，请左转 [Google](https://www.google.com) 或者 [Baidu](https://www.baidu.com) 。

### 编写 Tweak.xm

&emsp; 在熟悉各种语法之后，可以进行编写代码了，其中 MMUIViewController 为微信的基础的 ViewController 。我们通过 hook viewDidApper: 来进行 Hello World! 弹窗。 

&emsp; 编写一个 hook 接口声明头文件 `HookInterfaceStatment.h`，代码如下：

```
@interface MMUIViewController : UIViewController

- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)startLoadingWithText:(NSString *)text;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(NSString *)text;
- (void)stopLoadingWithOKText:(NSString *)text;

// Added method.
- (void)helloWorld;

@end
```

&emsp; 编写 Tweak.xm ，代码如下：

```
#import "HookInterfaceStatment.h"

%hook MMUIViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;
    [self helloWorld];
}

%new
- (void)helloWorld {
    UIAlertController *alertController = ({
        UIAlertController *_alertController = [UIAlertController alertControllerWithTitle:@"Hello World!" message:nil preferredStyle:UIAlertControllerStyleAlert];
        [_alertController addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {}]];
        [_alertController addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {}]];
        _alertController;
    });
    [self presentViewController:alertController animated:YES completion:NULL];
}

%end
```

### 编译

&emsp; 使用 `make` 进行编译，若想重新编译，则先 `make clean` 。make 编译完成后，在当前文件夹下面将生成两个文件夹: .theos 与 obj ，其中编译完成的动态库就在 .thoes/obj/debug 的下面，与工程名相同。

- 问题1

```
Makefile:6: theos/makefiles/common.mk: Not a directory
Makefile:25: /tweak.mk: No such file or directory
make: *** No rule to make target `/tweak.mk'.  Stop.
```

&emsp; 解决办法：首先确保安装并配置了 theos ，其次修改 Makefile 文件，在 `$(THEOS)/makefiles` 代码行上方定义 `THEOS_MAKE_PATH = /opt/theos/makefiles` ，将 `$(THEOS)/makefiles` 替换成 `$(THEOS_MAKE_PATH)` 。

- 问题2

```
bash: ldid: command not found
make[2]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/wcodtplugin.dylib] Error 6
rm /Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/wcodtplugin.dylib.47ba6b93.unsigned
make[1]: *** [internal-library-all_] Error 2
make: *** [wcodtplugin.all.tweak.variables] Error 2
```

&emsp; 解决办法：按照配置 ldid 步骤执行，重新编译。

- 问题3

```
xcrun: error: SDK "iphoneos" cannot be located
xcrun: error: SDK "iphoneos" cannot be located
==> Error: You do not have any SDKs in /Library/Developer/CommandLineTools/Platforms/iPhoneOS.platform/Developer/SDKs or /opt/theos/sdks.
make: *** [before-all] Error 1
```

&emsp; 解决办法：在终端执行命令 `sudo xcode-select --switch /Applications/Xcode.app` 即可。


- 问题4 (代码报错)

```
> Making all for tweak wcodtplugin…
==> Preprocessing Tweak.xm…
==> Compiling Tweak.xm (armv7)…
Tweak.xm:5:26: error: expected ';' after expression
... UIAlertController *_alertController = [UIAlertController alertControllerWithTitle...
                            ^
                            ;
1 error generated.
make[3]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/Tweak.xm.8aee9f68.o] Error 1
rm /Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/Tweak.xm.mm
make[2]: *** [/Users/xxx/Desktop/wcodtplugin/.theos/obj/debug/armv7/wcodtplugin.dylib] Error 2
make[1]: *** [internal-library-all_] Error 2
make: *** [wcodtplugin.tweak.variables] Error 2
```

&emsp; 解决办法：根据错误提示，找到报错的代码进行修改，重新编译。

- 问题5 (打包出错)

```
> Making all for tweak wcodtplugin…
make[2]: Nothing to be done for `internal-library-compile'.
> Making stage for tweak wcodtplugin…
Can't locate IO/Compress/Lzma.pm in @INC (you may need to install the IO::Compress::Lzma module) (@INC contains: /usr/local/Cellar/perl/5.26.2/lib/perl5/site_perl/5.26.2/darwin-thread-multi-2level /usr/local/Cellar/perl/5.26.2/lib/perl5/site_perl/5.26.2 /usr/local/Cellar/perl/5.26.2/lib/perl5/5.26.2/darwin-thread-multi-2level /usr/local/Cellar/perl/5.26.2/lib/perl5/5.26.2 /usr/local/lib/perl5/site_perl/5.26.2/darwin-thread-multi-2level /usr/local/lib/perl5/site_perl/5.26.2) at /opt/theos/bin/dm.pl line 12.
BEGIN failed--compilation aborted at /opt/theos/bin/dm.pl line 12.
make: *** [internal-package] Error 2
```

&emsp; 解决办法：

```
1. /opt/theos/vendor/dm.pl/dm.pl
# 注释掉第12、13行
# use IO::Compress::Lzma;
# use IO::Compress::Xz;

2. /opt/theos/makefiles/package/deb.mk
# 第6行 lzma 改为 gzip
_THEOS_PLATFORM_DPKG_DEB_COMPRESSION ?= gzip
```

&emsp; 最后重新 make package ，成功了。

## 目录介绍

- [Dynamic library](Dynamic%20library) - dylib 目录 (Raw Dynamic Library) 和 modify 目录 (Modified Dynamic Library) ，可直接拿来注入。
- [Hook-Tools](Hook-Tools) - Hook 使用的工具。
    - dumpdecrypted - 用于解密 iOS 的可执行文件，砸壳时可不需要。
    - otool - 一般 Mac 自带，用于查看解密后文件的依赖项检查。
    - install_name_tool - 一般 Mac 自带，更改动态库的依赖。
    - yoyolib - 用于向 iOS 的可执行文件中注入 dylib 。
    - optool - 将动态库注入目标二进制文件中。
    - class-dump - 导出app所有头文件 (`class-dump -s -S -H ~/Desktop/xx.app -o ~/Desktop/xx-headers`)。
    - ldid - 用于对 iOS 可执行文件进行签名的工具，在越狱 iOS 中替换 Xcode 自带的签名工具。
    - PackageApplication -  主要用来通过脚本打包 ipa 文件。
    - 010Editor701 - 一款全新概念的十六进制编辑器，其最强大的功能在于支持模板和脚本操作。
        - [010Editor 最新版 8.0.1 逆向分析](https://www.52pojie.cn/forum.php?mod=viewthread&tid=684119&page=)
    - MachOView - 用于对 mach-o 文件分析的工具。
    - DYFCodesign - 用于对 iOS app 进行脚本重签名。
    - [ios-app-signer](https://github.com/dgynfi/OpenSource#Mac) - 打包 ipa 与重签名图形化工具。
    - iOSOpenDev - Xcode 增强工具，通过它生成用于注入的 dylib 库。建议用 theos 编译 tweak 项目生成注入的 dylib 库。
- [Resources](Resources) - Icon 目录 (带抢红包的Icon) 、 wav 目录 (音频文件) 和 WC_7_0_5_Headers 目录 (微信7.0.5头文件) 等。
- [WeChatPluginDev](WeChatPluginDev/wapleodtcorexpc) - 微信插件 tweak 源码开发。

## 获取砸壳版本的微信

1. 直接在 PP 助手下载

2. 百度网盘下载

&emsp; [https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q - 提取码：o8sa](https://pan.baidu.com/s/1eT3tgfQRjIHUu3PL77YY9Q)

3. SSH 服务

&emsp; 实现在越狱手机上远程进行 ssh 服务，在 Cydia 中安装 OpenSSH 。

- ssh : 远程登录

```
# 指令 ssh user@ip
ssh mobile@192.168.6.6
```

- scp : 远程拷贝

&emsp; 本地文件拷贝到 iOS 上 (若从 iOS 上拷贝到本地，则相反) 。

```
# 指令 scp /path/to/localFile user@ip:/path/to/remoteFile
scp ~/Desktop/icon.png root@192.168.6.6:/var/tmp/
```

> 注意，OpenSSH 默认登录密码为 alpine ，iOS 上的用户只有 root 和 mobile，修改密码使用 passwd root (mobile) 。

4. 使用 Clutch 对越狱手机上的应用进行砸壳

- 将 Cluth 仓库 clone 到本地：

```
git clone https://github.com/KJCracks/Clutch
cd Clutch
```

- 使用 Xcode 进行构建，得到可执行文件：

```
xcodebuild -project Clutch.xcodeproj -configuration Release ARCHS="armv7 arm64" build
```

- 将可执行文件 clutch 拷贝到手机上：

```
scp Clutch/clutch root@<your.device.ip>:/usr/bin/
```

- 先 ssh 到越狱手机上，然后查看当前安装的应用：

```
ssh root@<your.device.ip>

# 列出当前安装的应用
clutch -i

# Installed apps:
# 1: WeChat <com.tencent.xin>
# ...
```

- 开始砸壳

```
# clutch -d <bundle identifier>
clutch -d com.tencent.xin

# Zipping WeChat.app
# Swapping architectures..
# ASLR slide: 0xb3000
# ...
# writing new checksum
# DONE: /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.2-(Clutch-2.0.4).ipa
# Finished dumping com.tencent.xin in 76.9 seconds
```

- 将砸完壳的 ipa 包拷回 Mac 电脑上

```
mv /private/var/mobile/Documents/Dumped/com.tencent.xin-iOS9.2-\(Clutch-2.0.4\).ipa /private/var/mobile/Documents/Dumped/WeChat.ipa

scp root@<your.device.ip>:/private/var/mobile/Documents/Dumped/WeChat.ipa ~/Desktop/
```

## 注入动态库和重签名打包应用

&emsp; 以微信 7.0.5 版本为例，执行下列操作：

### 解压 ipa (Unzip ipa)

```
# cd <微信ipa下载目录>
cd ~/Downloads/

unzip -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 静默解压
# unzip -q -o 微信-7.0.5\(越狱应用\).ipa -d ./

# 将 Payload 移至桌面
mv ./Payload/ ~/Desktop/
```

### 查看 app 是否被加密 (Check app)

&emsp; otool 可以输出 app 的 load commands，然后通过查看 cryptid 这个标志位来判断 app 是否被加密，1代表加密，0代表被解密。

```
# 进入桌面
cd ~/Desktop/

# 查看 app 是否被加密
otool -l Payload/WeChat.app/WeChat | grep -B 2 crypt
```

&emsp; 结果显示如下：

```
otool -l Payload/WeChat.app/WeChat | grep -B 2 crypt
          cmd LC_ENCRYPTION_INFO_64
      cmdsize 24
     cryptoff 16384
    cryptsize 100237312
      cryptid 0
```

### 克隆仓库 (Clone Repository)

```
# 进入桌面
cd ~/Desktop/

# 克隆
git clone https://github.com/dgynfi/WeChat_tweak.git
```

### 编译 tweak 项目 (Compile Tweak Project)

```
cd WeChat_tweak/WeChatPluginDev/wapleodtcorexpc/
# compile
make
```

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/tweak_make.png" width="60%" />
</div>

&emsp; 编译时出现的问题或错误，请查看上述[问题描述和解决方法](#编译)。

&emsp; 将动态库拷贝至桌面：

```
# 将 wapleodtcorexpc.dylib 库拷贝至桌面
cp .theos/obj/debug/wapleodtcorexpc.dylib ~/Desktop/

# 直接打开目录，将 wapleodtcorexpc.dylib 库拷贝或拖拽至桌面
# open .theos/obj/debug/
```

### 更改动态库的依赖 (Change Dynamic Library Dependencies)

&emsp; 将 libsubstrate.dylib 库拷贝至桌面：

```
# 进入桌面
cd ~/Desktop/

# 将 libsubstrate.dylib 库拷贝至桌面
cp WeChat_tweak/Dynamic\ library/dylib/libsubstrate.dylib ~/Desktop/
```

&emsp; 右键 wapleodtcorexpc.dylib ，选择显示简介，在名称与扩展名处将 wapleodtcorexpc.dylib 修改成 wapleodtcorexpc ，回车并移除。

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/rm_ext.png" width="60%" />
</div>

&emsp; 同理，右键 libsubstrate.dylib ，选择显示简介，在名称与扩展名处将 libsubstrate.dylib 修改成 waplesubstrate ，回车并移除。

&emsp; 执行更改动态库的依赖命令：

```
install_name_tool -change /Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate @loader_path/waplesubstrate wapleodtcorexpc
```

&emsp; 查看依赖项，检查是否更改成功，使用以下命令：

```
otool -L wapleodtcorexpc
```

&emsp; 显示如下：

```
wapleodtcorexpc (architecture armv7):
    /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1570.15.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1570.15.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 61000.0.0)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2245.12.30)
    @loader_path/waplesubstrate (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.4)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.250.1)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
wapleodtcorexpc (architecture arm64):
    /Library/MobileSubstrate/DynamicLibraries/wapleodtcorexpc.dylib (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libobjc.A.dylib (compatibility version 1.0.0, current version 228.0.0)
    /System/Library/Frameworks/Foundation.framework/Foundation (compatibility version 300.0.0, current version 1570.15.0)
    /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (compatibility version 150.0.0, current version 1570.15.0)
    /System/Library/Frameworks/UIKit.framework/UIKit (compatibility version 1.0.0, current version 61000.0.0)
    /System/Library/Frameworks/AVFoundation.framework/AVFoundation (compatibility version 1.0.0, current version 2.0.0)
    /System/Library/Frameworks/CoreLocation.framework/CoreLocation (compatibility version 1.0.0, current version 2245.12.30)
    @loader_path/waplesubstrate (compatibility version 0.0.0, current version 0.0.0)
    /usr/lib/libc++.1.dylib (compatibility version 1.0.0, current version 400.9.4)
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1252.250.1)
    /System/Library/Frameworks/CoreVideo.framework/CoreVideo (compatibility version 1.2.0, current version 1.5.0)
```

&emsp; CydiaSubstrate 只有越狱的手机上才有，因此我们需要手动更改并导入。从上可见，`/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate` 更改成了 `@loader_path/waplesubstrate` ，这表明动态库的依赖更改成功。

### 移除架构 (Remove Architectures) 

&emsp; 对于没有强迫证的同学来说，这步可略过。目前 `WeChat` 可执行文件只有 `arm64` 架构，在以前版本中，若移除 `armv7` 架构，则可以大大减少包的大小，以节省手机空间。

```
# 进入桌面，确保当前在桌面上操作
cd ~/Desktop/

lipo -info waplesubstrate 
# Architectures in the fat file: waplesubstrate are: armv7 arm64 

lipo waplesubstrate -remove armv7 -output ./waplesubstrate 

lipo -info waplesubstrate 
# Architectures in the fat file: waplesubstrate are: arm64 

lipo -info wapleodtcorexpc 
# Architectures in the fat file: wapleodtcorexpc are: armv7 arm64

lipo wapleodtcorexpc -remove armv7 -output ./wapleodtcorexpc

lipo -info wapleodtcorexpc 
# Architectures in the fat file: wapleodtcorexpc are: arm64
```

### 注入动态库 (Install Dynamic Libraries)

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

# @executable_path 是一个环境变量，指的是二进制文件所在的路径
./WeChat_tweak/Hook-Tools/optool install -c load -p "@executable_path/wapleodtcorexpc" -t Payload/WeChat.app/WeChat
```

&emsp; 注入过程显示如下：

```
Found thin header...
Inserting a LC_LOAD_DYLIB command for architecture: arm64
Successfully inserted a LC_LOAD_DYLIB command for arm64
Writing executable to Payload/WeChat.app/WeChat...
```

&emsp; 将动态库拷贝至二进制文件所在的目录，操作如下：

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

# 将动态库拷贝至二进制文件所在的目录
cp waplesubstrate wapleodtcorexpc Payload/WeChat.app/
```

### 打开 WeChat.app 目录 (Open WeChat.app)

- 进入 WeChat.app 目录

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/show_wechatapp_dir.png" width="60%" />
</div>

- 找出 Info.plist 文件

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/found_Info.plist.png" width="60%" />
</div>

&emsp; 双击，默认 Xcode 打开，修改 Info.plist 中的 Bundle display name 和 Bundle identifier，将 WeChatBundleVersion 的 Value 修改成 Bundle version 的 Value，将 URL types -> URL identifier 修改成新的 Bundle identifier，删除 build_time, by, path, rev, tag, uuid, ver 等 Key。

- 删除 PlugIns 和 Watch 目录中的文件

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/del_files.png" width="60%" />
</div>

- 删除 _CFBundleDisplayName

&emsp; 删除  zh_CN.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
&emsp; 删除  zh_HK.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
&emsp; 删除  zh_TW.lproj  InfoPlist.strings  _CFBundleDisplayName  <br />
&emsp; 删除  en.lproj         InfoPlist.strings  _CFBundleDisplayName  <br />

- 删除 Entitlements

&emsp; 删除  Entitlements_for_appstore.plist  <br />
&emsp; 删除  Entitlements_for_ext.plist  <br />
&emsp; 删除  Entitlements_for_jailbreak.plist  <br />
&emsp; 删除  Entitlements_wc_for_ext.plist  <br />
&emsp; 删除  Entitlements_wc.plist  <br />
&emsp; 删除  Entitlements_wx_for_ext.plist  <br />
&emsp; 删除  Entitlements_wx.plist  <br />

 ### 重签名动态库 (Resign Dynamic Libraries)

&emsp; 打开钥匙串访问

<div align=center>
<img src="https://github.com/dgynfi/WeChat_tweak/raw/master/images/keychain_access.png" width="20%" />
</div>

&emsp; 点击登录 -> 我的证书，找出要签名的证书，右击显示简介，找到常用名称，然后拷贝后面的字符串。

&emsp; 执行重签名：

```
codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/waplesubstrate 
# Payload/WeChat.app/waplesubstrate: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/wapleodtcorexpc
# Payload/WeChat.app/wapleodtcorexpc: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/andromeda.framework
# Payload/WeChat.app/Frameworks/andromeda.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/mars.framework
# Payload/WeChat.app/Frameworks/mars.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/marsbridgenetwork.framework
# Payload/WeChat.app/Frameworks/marsbridgenetwork.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/matrixreport.framework
# Payload/WeChat.app/Frameworks/matrixreport.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/OpenSSL.framework
# Payload/WeChat.app/Frameworks/OpenSSL.framework: replacing existing signature

codesign -f -s "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" Payload/WeChat.app/Frameworks/ProtobufLite.framework
# Payload/WeChat.app/Frameworks/ProtobufLite.framework: replacing existing signature
```

### 重签名应用 (Resign app)

&emsp; 打开 Provisioning Profiles 目录

```
# 打开 Provisioning Profiles 目录
open ~/Library/MobileDevice/Provisioning\ Profiles/ 
```

&emsp; 在 Finder 工具栏选择以分栏或画廊方式显示，然后逐一点击 xxx.mobileprovision 文件，找出相匹配的 Bundle identifier 的配置文件 。也可以直接从苹果开发者后台下载证书和  xxx.mobileprovision 配置文件，导入证书或 p12 文件和 xxx.mobileprovision 配置文件 (可直接使用) 。

&emsp; 或者用 cat 命令逐一查看 xxx.mobileprovision 文件

```
cat ~/Library/MobileDevice/Provisioning\ Profiles/ece5c913-5c15-45fd-82e3-90f23739521f.mobileprovision
...
cat ~/Library/MobileDevice/Provisioning\ Profiles/269bffd1-3743-4014-bf07-4eb94c048460.mobileprovision
```

&emsp; 将 xxx.mobileprovision 文件拷贝至桌面

```
cp ~/Library/MobileDevice/Provisioning\ Profiles/269bffd1-3743-4014-bf07-4eb94c048460.mobileprovision ~/Desktop/wcpl_adhoc.mobileprovision
```

&emsp; 执行重签名应用：

```
# 进入桌面，确保当前在桌面上操作
cd ~/Desktop/

./WeChat_tweak/Hook-Tools/DYFCodesign Payload/ "iPhone Developer: xxx@qq.com (9ZU3R2F3D4)" wcpl_adhoc.mobileprovision 
# /Users/xxx/Desktop/Payload/WeChat.app: replacing existing signature
```

### 打包应用 (Package app)

- 方法一

```
# 进入桌面，确保当前在桌面上操作
# cd ~/Desktop/

zip -r WeChat_705_New.ipa Payload/

# 静默压缩
# zip -qr WeChat_705_New.ipa Payload/
```

- 方法二

&emsp; **PackageApplication** 主要用来通过脚本打包 ipa 文件，然而从 **Xcode 8.2.1** 版本之后，就不建议使用了。所以每次更新 Xcode 版本，都要手动添加 **PackageApplication** 。

&emsp; **PackageApplication** 下载地址：

1. 百度网盘下载：

&emsp; [https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ - 提取码：4sqb](https://pan.baidu.com/s/1AjVW8hWYlVz3Cu9UJByQOQ)

2. Github下载：

&emsp; [https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/](https://github.com/dgynfi/WeChat_tweak/tree/master/Hook-Tools/)

&emsp; 将下载的 **PackageApplication** 执行以下命令，并设置可执行权限：

```
chmod 777 ~/Downloads/PackageApplication
```

&emsp; Applications -> 右键 Xcode.app -> 显示包内容 -> Contents -> Developer -> platforms -> iPhoneOS.platform -> Developer -> usr -> bin，进入这个目录之后，将设置了可执行权限的 **PackageApplication** 复制到这个目录。

&emsp; 或者使用命令如下：

```
cp ~/Downloads/PackageApplication /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin
```

&emsp; 执行打包：

```
xcrun -sdk iphoneos PackageApplication -v Payload/WeChat.app -o ~/Desktop/WeChat_705_New.ipa
```

### 安装 ipa 

1. 最后使用 PP 助手/ ifunbox 安装 WeChat_705_New.ipa 。

2. 使用 Xcode -> Window -> Devices and Simulators ，右击自己的设备，选择 Connect via IP Adress...，输入设备的IP，然后点击 Connect ，最后在 INSTALLED APPS 处点击 “+” 号，然后选择 WeChat_705_New.ipa ，点击 Open ，然后漫长地等待安装，大约1 ~ 3分钟。






## 什么是shell? bash和shell有什么关系？
 
     shell是你（用户）和Linux（或者更准确的说，是你和Linux内核）之间的接口程序。你在提示符下输入的每个命令都由shell先解释然后传给Linux内核。
     shell 是一个命令语言解释器（command-language interpreter）。拥有自己内建的 shell 命令集。此外，shell也能被系统中其他有效的Linux 实用程序和应用程序（utilities and application programs）所调用。
    不论何时你键入一个命令，它都被Linux shell所解释。一些命令，比如打印当前工作目录命令（pwd），是包含在Linux bash内部的（就象DOS的内部命令）。其他命令，比如拷贝命令（cp）和移动命令（rm），是存在于文件系统中某个目录下的单独的程序。而对用户来说，你不知道（或者可能不关心）一个命令是建立在shell内部还是一个单独的程序。
    shell 首先检查命令是否是内部命令，不是的话再检查是否是一个应用程序，这里的应用程序可以是Linux本身的实用程序，比如ls 和 rm，也可以是购买的商业程序，比如 xv，或者是公用软件（public domain software），就象 ghostview。然后shell试着在搜索路径($PATH)里寻找这些应用程序。搜索路径是一个能找到可执行程序的目录列表。如果你键入的命令不是一个内部命令并且在路径里没有找到这个可执行文件，将会显示一条错误信息。而如果命令被成功的找到的话，shell的内部命令或应用程序将被分解为系统调用并传给Linux内核。
    shell的另一个重要特性是它自身就是一个解释型的程序设计语言，shell 程序设计语言支持在高级语言里所能见到的绝大多数程序控制结构，比如循环，函数，变量和数组。shell 编程语言很易学，并且一旦掌握后它将成为你的得力工具。任何在提示符下能键入的命令也能放到一个可执行的shell程序里，这意味着用shell语言能简单地重复执行某一任务。 
 
 shell 如何启动?
 
    shell在你成功地登录进入系统后启动，并始终作为你与系统内核的交互手段直至你退出系统。你系统上的每位用户都有一个缺省的shell。每个用户的缺省shell在系统里的passwd文件里被指定，该文件的路径是/etc/passwd。passwd文件里还包含有其他东西：每个人的用户ID号，一个口令加密后的拷贝和用户登录后立即执行的程序，（注：为了加强安全性，现在的系统一般都把加密的口令放在另一个文件--shadow中，而passwd中存放口令的部分以一个x字符代替）虽然没有严格规定这个程序必须是某个Linux shell，但大多数情况下都如此。 
 
 最常用的shell:
  
    在Linux 和 UNIX系统里可以使用多种不同的shell可以使用。最常用的几种是 Bourne shell (sh), C shell (csh), 和 Korn shell (ksh)。三种shell 都有它们的优点和缺点。Bourne shell 的作者是 Steven Bourne。它是 UNIX 最初使用的shell 并且在每种 UNIX 上都可以使用。Bourne shell 在 shell 编程方面相当优秀，但在处理与用户的交互方面作得不如其他几种 shell。 
    C shell 由 Bill Joy 所写，它更多的考虑了用户界面的友好性。它支持象命令补齐（command-line completion）等一些 Bourne shell 所不支持的特性。普遍认为C shell 的编程接口做的不如 Bourne shell, 但 C shell 被很多 C  程序员使用因为 C shell的语法和 C语言的很相似，这也是C shell名称的由来。
    Korn shell (ksh) 由 Dave Korn 所写。它集合了C shell 和 Bourne shell 的优点并且和 Bourne shell 完全兼容。
    除了这些 shell 以外，许多其他的 shell 程序吸收了这些原来的 shell 程序的优点而成为新的 shell 。在 Linux 上常见的有 tcsh (csh 的扩展)，Bourne Again shell(bash, sh 的扩展), 和Public Domain Korn shell (pdksh, ksh 的扩展)。bash 是大多数Linux 系统的缺省 shell。 
 
The Bourne Again Shell
 
    Bourne Again shell (bash), 正如它的名字所暗示的，是 Bourne shell 的扩展。bash 与 Bourne shell 完全向后兼容，并且在 Bourne shell 的基础上增加和增强了很多特性。bash 也包含了很多 C 和 Korn shell 里的优点。bash 有很灵活和强大的编程接口，同时又有很友好的用户界面。
    为什么要用 bash 来代替 sh 呢？Bourne shell 最大的缺点在于它处理用户的输入方面。在 Bourne shell 里键入命令会很麻烦，尤其当你键入很多相似的命令时。而 bash 准备了几种特性使命令的输入变得更容易。 
    
命令补齐（Command-Line Completion）

    通常你在 bash （或任何其他的 shell）下输入命令时你不必把命令输全 shell 就能判断出你所要输入的命令。
