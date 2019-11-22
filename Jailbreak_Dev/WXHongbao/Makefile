
THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
ARCHS = armv7 armv7s arm64
TARGET = iphone:latest:8.0
THEOS_MAKE_PATH = /opt/theos/makefiles

include $(THEOS_MAKE_PATH)/common.mk

TWEAK_NAME = WeChatRedEnvelopesHelper

WeChatRedEnvelopesHelper_FILES = $(wildcard src/*.m) $(wildcard src/*.xm)
$(TWEAK_NAME)_FRAMEWORKS = UIKit AVFoundation CoreLocation CFNetwork


include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"