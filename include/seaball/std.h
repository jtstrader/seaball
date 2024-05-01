#ifndef _SEABALL_LANG
#define _SEABALL_LANG

#include <inttypes.h>
#include <iostream>
#include <string>
#include <vector>

#include "types/_____________seaball_shared_type_defs_compat_supported.h"

/** Keyword Definitions */
#define DEFAULT_PRIVATE_DATA_STRUCTURE(name, ...) class name __VA_ARGS__
#define DEFAULT_PUBLIC_DATA_STRUCTURE struct
#define PUBLIC_ACCESS public:
#define PRIVATE_ACCESS private:
#define CLASS_INSTANCE_ACCESSOR this

/** IO */
#define WRITE_STANDARD_OUTPUT_BUFFER std::cout <<
#define WRITE_STANDARD_OUTPUT_BUFFER_NEWLINE << "\n"

/** Memory Unsafety */
#define SEGMENTATION_FAULT                                                     \
  do {                                                                         \
    STANDARD_BYTE __SIGSEGV_TMP_V_CBALL__ = *(char *)0;                        \
  } while (0);

/** Program Definitions */
#define PROGRAM(...) int main() __VA_ARGS__
#define SECTION_RET(ret) ret
#define SECTION_NAME(name) name
#define SECTION_ARGS(...) (__VA_ARGS__)
#define SECTION_DEF(...) __VA_ARGS__
#define CALL(f, ...) (f)(__VA_ARGS__)
#define CALL_INSTANCE_METHOD(instance, f, ...) (instance).f(__VA_ARGS__)
#define DEREFERENCE *

#endif