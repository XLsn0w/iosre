# WeChatRedEnvlop
基于猴神的MonkeyDev插件上的抢红包、修改微信步数、非群主@所有人、防止消息撤回插件

## 使用方式
1、从PP助手下载一个破解版的微信直接放入到WeChatRedEnvlop/WeChatRedEnvlop/TargetApp/

2、修改Bundle ID为自己的证书

当然，首先需要安装猴神的MonkeyDev，详见：https://github.com/AloneMonkey/MonkeyDev

微信抢红包插件代码来源于：https://github.com/buginux/WeChatRedEnvelop


自己给自己发消息来控制开关
```objective-c
1. 打开红包插件
2. 关闭红包插件
3. 关闭抢自己红包
4. 关闭抢自己群红包
5. 修改微信步数#
6. 恢复微信步数
```

@所有人的使用方法

```objective-c
#所有人 群发消息
```
---

如果编译报错，请记得先把破解的微信放到目录里，由于偷懒，有的地方使用的头文件，如果不先放微信，可能会报错哟~

可能有同学复制代码到自己的工程里会报错，需要修改两处配置
![](https://github.com/z306007236/screenshotssave/blob/master/WX20170803-151834.png?raw=true)
![](https://github.com/z306007236/screenshotssave/blob/master/WX20170803-151855.png?raw=true)


---
## 如何生成ipa?
在工程目录有一个LatestBuild文件夹，进去找到createIPA.command双击即可
