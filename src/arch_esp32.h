#pragma once

#if MG_ARCH == MG_ARCH_ESP32

#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <netdb.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

#undef MG_PATH_MAX
#undef MG_ENABLE_DIRLIST

#define MG_DIRSEP '/'
#define MG_INT64_FMT "%lld"
#define MG_PATH_MAX 128
#define MG_ENABLE_DIRLIST 1

#endif
