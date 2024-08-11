# HEADER SECTION
SUMMARY = "my App"
DESCRIPTION = "Recipe created by lulu-layer, simple application fetched from fady repository"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

# Source fetching section
# clone the app
SRC_URI = "git://github.com/FadyKhalil/DemoApp.git;protocol=https;branch=main"
#check specific hash commit (source revision)
SRCREV="720c663c5fd7246b4b42c5205d74db7d9784b5b2"


#This specifies that cmake is needed to configure the build process.
DEPENDS = "cmake"


# Inherit the cmake class to handle CMake build system
# This automates configuration and other steps related to building CMake-based projects.
inherit cmake

do_configure(){
  cmake -S ${S} -B ${B} -DCMAKE_EXE_LINKER_FLAGS="-static" -DCMAKE_SHARED_LINKER_FLAGS="-static"
}
do_compile() {
     oe_runmake -C ${B}
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${B}/calculator ${D}${bindir}/
}
