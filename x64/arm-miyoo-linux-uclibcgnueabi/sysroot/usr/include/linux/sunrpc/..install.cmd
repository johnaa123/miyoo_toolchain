cmd_/opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc/.install := /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc ./include/uapi/linux/sunrpc debug.h; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc ./include/linux/sunrpc ; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc ./include/generated/uapi/linux/sunrpc ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc/$$F; done; touch /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/sunrpc/.install