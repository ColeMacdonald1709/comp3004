#############################################################################
# Makefile for building: cuACS
# Generated by qmake (3.1) (Qt 5.9.5)
# Project:  cuACS.pro
# Template: app
# Command: /usr/lib/qt5/bin/qmake -o Makefile cuACS.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_SQL_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtSql -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -I. -isystem /usr/include/libdrm -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++
QMAKE         = /usr/lib/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/lib/qt5/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/lib/qt5/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = cuACS1.0.0
DISTDIR = /home/student/comp3004/.tmp/cuACS1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS) -lQt5Widgets -lQt5Gui -lQt5Sql -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = animal.cpp \
		main.cpp \
		addnewanimal.cpp \
		manageanimal.cpp \
		login.cpp \
		staffportal.cpp \
		manageclient.cpp \
		client.cpp \
		addnewclient.cpp \
		uiserver.cpp \
		dbserver.cpp \
		clientportal.cpp \
		editanimal.cpp \
		editclient.cpp moc_uiserver.cpp
OBJECTS       = animal.o \
		main.o \
		addnewanimal.o \
		manageanimal.o \
		login.o \
		staffportal.o \
		manageclient.o \
		client.o \
		addnewclient.o \
		uiserver.o \
		dbserver.o \
		clientportal.o \
		editanimal.o \
		editclient.o \
		moc_uiserver.o
DIST          = /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		cuACS.pro animal.h \
		addnewanimal.h \
		manageanimal.h \
		login.h \
		staffportal.h \
		manageclient.h \
		client.h \
		addnewclient.h \
		uiserver.h \
		dbserver.h \
		clientportal.h \
		editclient.h \
		editanimal.h animal.cpp \
		main.cpp \
		addnewanimal.cpp \
		manageanimal.cpp \
		login.cpp \
		staffportal.cpp \
		manageclient.cpp \
		client.cpp \
		addnewclient.cpp \
		uiserver.cpp \
		dbserver.cpp \
		clientportal.cpp \
		editanimal.cpp \
		editclient.cpp
QMAKE_TARGET  = cuACS
DESTDIR       = 
TARGET        = cuACS


first: all
####### Build rules

$(TARGET): ui_addnewanimal.h ui_manageanimal.h ui_login.h ui_staffportal.h ui_manageclient.h ui_addnewclient.h ui_clientportal.h ui_editclient.h ui_editanimal.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: cuACS.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		cuACS.pro \
		/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Sql.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Core.prl
	$(QMAKE) -o Makefile cuACS.pro
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
cuACS.pro:
/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt5Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt5Sql.prl:
/usr/lib/x86_64-linux-gnu/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile cuACS.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents animal.h addnewanimal.h manageanimal.h login.h staffportal.h manageclient.h client.h addnewclient.h uiserver.h dbserver.h clientportal.h editclient.h editanimal.h $(DISTDIR)/
	$(COPY_FILE) --parents animal.cpp main.cpp addnewanimal.cpp manageanimal.cpp login.cpp staffportal.cpp manageclient.cpp client.cpp addnewclient.cpp uiserver.cpp dbserver.cpp clientportal.cpp editanimal.cpp editclient.cpp $(DISTDIR)/
	$(COPY_FILE) --parents addnewanimal.ui manageanimal.ui login.ui staffportal.ui manageclient.ui addnewclient.ui clientportal.ui editclient.ui editanimal.ui $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp
	g++ -pipe -O2 -Wall -W -dM -E -o moc_predefs.h /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_uiserver.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_uiserver.cpp
moc_uiserver.cpp: addnewanimal.h \
		uiserver.h \
		addnewclient.h \
		dbserver.h \
		animal.h \
		client.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h \
		uiserver.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/comp3004 -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include uiserver.h -o moc_uiserver.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_addnewanimal.h ui_manageanimal.h ui_login.h ui_staffportal.h ui_manageclient.h ui_addnewclient.h ui_clientportal.h ui_editclient.h ui_editanimal.h
compiler_uic_clean:
	-$(DEL_FILE) ui_addnewanimal.h ui_manageanimal.h ui_login.h ui_staffportal.h ui_manageclient.h ui_addnewclient.h ui_clientportal.h ui_editclient.h ui_editanimal.h
ui_addnewanimal.h: addnewanimal.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic addnewanimal.ui -o ui_addnewanimal.h

ui_manageanimal.h: manageanimal.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic manageanimal.ui -o ui_manageanimal.h

ui_login.h: login.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic login.ui -o ui_login.h

ui_staffportal.h: staffportal.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic staffportal.ui -o ui_staffportal.h

ui_manageclient.h: manageclient.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic manageclient.ui -o ui_manageclient.h

ui_addnewclient.h: addnewclient.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic addnewclient.ui -o ui_addnewclient.h

ui_clientportal.h: clientportal.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic clientportal.ui -o ui_clientportal.h

ui_editclient.h: editclient.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic editclient.ui -o ui_editclient.h

ui_editanimal.h: editanimal.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic editanimal.ui -o ui_editanimal.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean compiler_uic_clean 

####### Compile

animal.o: animal.cpp animal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o animal.o animal.cpp

main.o: main.cpp uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

addnewanimal.o: addnewanimal.cpp addnewanimal.h \
		uiserver.h \
		addnewclient.h \
		dbserver.h \
		animal.h \
		client.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addnewanimal.o addnewanimal.cpp

manageanimal.o: manageanimal.cpp manageanimal.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageanimal.o manageanimal.cpp

login.o: login.cpp login.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o login.o login.cpp

staffportal.o: staffportal.cpp staffportal.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		ui_staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o staffportal.o staffportal.cpp

manageclient.o: manageclient.cpp manageclient.h \
		client.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageclient.o manageclient.cpp

client.o: client.cpp client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o client.o client.cpp

addnewclient.o: addnewclient.cpp addnewclient.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addnewclient.o addnewclient.cpp

uiserver.o: uiserver.cpp uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o uiserver.o uiserver.cpp

dbserver.o: dbserver.cpp dbserver.h \
		animal.h \
		client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dbserver.o dbserver.cpp

clientportal.o: clientportal.cpp clientportal.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		staffportal.h \
		ui_clientportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o clientportal.o clientportal.cpp

editanimal.o: editanimal.cpp editanimal.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o editanimal.o editanimal.cpp

editclient.o: editclient.cpp editclient.h \
		uiserver.h \
		addnewanimal.h \
		dbserver.h \
		animal.h \
		client.h \
		addnewclient.h \
		login.h \
		manageanimal.h \
		manageclient.h \
		clientportal.h \
		staffportal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o editclient.o editclient.cpp

moc_uiserver.o: moc_uiserver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_uiserver.o moc_uiserver.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

