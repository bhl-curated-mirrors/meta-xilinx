require recipes-devtools/qemu/qemu-native.inc
require qemu-xilinx.inc

DEPENDS = "glib-2.0-native zlib-native ninja-native meson-native"

SRC_URI:remove = "file://0012-fix-libcap-header-issue-on-some-distro.patch"
SRC_URI:remove = "file://0013-cpus.c-Add-error-messages-when-qemi_cpu_kick_thread-.patch"

do_install:append(){
       rm -rf ${D}${datadir}/icons
}
