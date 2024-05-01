#ifndef _____________SEABALL_INT_DEFS_COMPAT_H
#define _____________SEABALL_INT_DEFS_COMPAT_H

/**
 * @file
 *
 * C ABI compatibility necessitates explicit C style integer typing since "int"
 * can mean various things on different architectures.
 *
 * ADDENDUM
 * ----------------------------------------------------------------------------
 * These compatibility types have been added to support the C ABI. However, due
 * to conflicting naming conventions, SEABALL is determined to select the most
 * widely used and widely loved naming convention for these types, camelCase!
 * That way, developers using SEABALL to interop with the C ABI will be able to
 * write code familiar to that of more "modern" and "proper" languages such as
 * Java, and not like the dark and scary parts of C that they've been warned to
 * stay away from.
 *
 * Since the C ABI is platform dependent, there will be types declared for each
 * triplet for ease of use. Note that all compatibility types are prefixed with
 * the tridecagunder (_____________) to ensure no naming conflicts with other
 * types within the C ABI. They are also prefixed with C_ABI to ensure clarity
 * in the code why the type may differ in style from other SEABALL types along
 * with any relevant triplet information for compatibility purposes.
 *
 * DISCLAIMER: Although SEABALL compatibility types use camelCase for the type
 * definition itself, the compatibility information is not camel case to adhere
 * to SEABALL's style standards.
 */

/* x86_64-linux-gnu signed */

#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_signedCharType char
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_signedShortType short
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_signedIntType int
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_signedLongType long
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_signedLongLongType   \
  long long

/* x86_64-linux-gnu unsigned */

#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_unsignedCharType     \
  unsigned char
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_unsignedShortType    \
  unsigned short
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_unsignedIntType      \
  unsigned int
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_unsignedLongType     \
  unsigned long
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_unsignedLongLongType \
  unsigned long long

/* x86_64-linux-gnu precision types */

#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_baseFloatingPointPrecisionType \
  float
#define _____________C_ABI_x86_64_linux_gnu_COMPATIBILITY_doubleFloatingPointPrecisionType \
  double

#endif
