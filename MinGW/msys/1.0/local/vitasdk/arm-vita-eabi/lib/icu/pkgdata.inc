GENCCODE_ASSEMBLY_TYPE=
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.56.1
COMPILE=arm-vita-eabi-gcc -I/var/lib/jenkins/workspace/toolchain-vita/vita/include -g0 -O2 -D_REENTRANT  -DU_ENABLE_DYLOAD=0 -DU_HAVE_ATOMIC=1 -DU_HAVE_MMAP=0 -DU_HAVE_DIRENT_H=0 -DU_HAVE_POPEN=0  -DU_ATTRIBUTE_DEPRECATED= -I/var/lib/jenkins/workspace/toolchain-vita/vita/include -g0 -O2   -c
LIBFLAGS=-I/var/lib/jenkins/workspace/toolchain-vita/vita/include -DPIC -fPIC
GENLIB=arm-vita-eabi-gcc -I/var/lib/jenkins/workspace/toolchain-vita/vita/include -g0 -O2   -L/var/lib/jenkins/workspace/toolchain-vita/vita/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=arm-vita-eabi-ar
ARFLAGS=r
RANLIB=arm-vita-eabi-ranlib
INSTALL_CMD=/bin/install -c
