cmd_/opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/.install := /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi ./include/uapi/linux/spi spidev.h; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi ./include/linux/spi ; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi ./include/generated/uapi/linux/spi ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/$$F; done; touch /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/.install
