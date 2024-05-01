#ifndef _____________SEABALL_REF_DEFS_H
#define _____________SEABALL_REF_DEFS_H

/**
 * @file
 *
 * Low level pointer/reference operators and features. If compiled using in
 * complex mode, additional low level features are enabled.
 *
 * Read more @link _____________cpp/_____________seaball_ref_defs.h here
 * @endlink for the available complex definitions.
 */

/** @brief Defines a pointer type. Not to be confused with #DEREFERENCE. */
#define POINTER *

/** @brief Dereferences a pointer type. Not be confused with #POINTER. */
#define DEREFERENCE *

/** @brief Gets a reference of a given type. */
#define REFERENCE &

#ifdef __cplusplus
#include "_____________cpp/_____________seaball_ref_defs.h"
#endif

#endif