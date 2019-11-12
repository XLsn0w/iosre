THEOS_DEVICE_IP = 192.168.1.111
TARGET = iphone:9.2:8.0
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = wxPlugin
wxPlugin_FILES = Tweak.xm RevealUtil.m
wxPlugin_FRAMEWORKS = UIKit CFNetwork
wxPlugin_PRIVATE_FRAMEWORKS = AppSupport

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"