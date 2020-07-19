#pragma once

#include "Configuration.h"

#ifdef LINUX

#define SLASH "/"
#define CREATE_FILE "touch "
#define CREATE_DIRECTORY "mkdir -p "

#endif

#ifdef WINDOWS

#define SLASH "\\"
#define CREATE_FILE "type NUL > "
#define CREATE_DIRECTORY "mkdir "

#endif