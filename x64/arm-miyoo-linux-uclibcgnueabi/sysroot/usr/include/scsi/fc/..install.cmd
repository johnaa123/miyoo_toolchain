cmd_/opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc/.install := /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc ./include/uapi/scsi/fc fc_els.h fc_fs.h fc_gs.h fc_ns.h; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc ./include/scsi/fc ; /bin/bash scripts/headers_install.sh /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc ./include/generated/uapi/scsi/fc ; for F in ; do echo "\#include <asm-generic/$$F>" > /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc/$$F; done; touch /opt/miyoo/arm-miyoo-linux-uclibcgnueabi/sysroot/usr/include/scsi/fc/.install
