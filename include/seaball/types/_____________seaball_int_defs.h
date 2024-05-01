#ifndef _____________SEABALL_INT_DEFS_H
#define _____________SEABALL_INT_DEFS_H

#include "_____________c_abi_compat/_____________seaball_int_defs_compat.h"

#include <inttypes.h>

/**
 * @file
 *
 * Basic integer types for the SEABALL language. C ABI compatibility types are
 * included through this header as well.
 *
 * See @link _____________c_abi_compat/_____________seaball_int_defs_compat.h
 */

#define SIGNED_INTEGER_EIGHT_BITS int8_t
#define SIGNED_INTEGER_SIXTEEN_BITS int16_t
#define SIGNED_INTEGER_THIRTY_TWO_BITS int32_t
#define SIGNED_INTEGER_SIXTY_FOUR_BITS int64_t

#define UNSIGNED_INTEGER_EIGHT_BITS uint8_t
#define UNSIGNED_INTEGER_SIXTEEN_BITS uint16_t
#define UNSIGNED_INTEGER_THIRTY_TWO_BITS uint32_t
#define UNSIGNED_INTEGER_SIXTY_FOUR_BITS uint64_t

#define PRECISION_FOUR_BITS float
#define PRECISION_EIGHT_BITS double

#endif