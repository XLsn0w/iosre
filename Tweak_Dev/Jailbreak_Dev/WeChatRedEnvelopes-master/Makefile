THEOS_DEVICE_IP = 192.168.0.102

ARCHS = armv7 armv7s arm64

include $(THEOS)/makefiles/common.mk

SRC = $(wildcard src/*.m)

TWEAK_NAME = WeChatRedEnvelopesHelper
WeChatRedEnvelopesHelper_FILES = $(wildcard src/*.m) $(wildcard src/*.xm)

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"


