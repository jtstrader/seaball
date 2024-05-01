#ifndef _____________SEABALL_COLLECTIONS_DEFS_H
#define _____________SEABALL_COLLECTIONS_DEFS_H

#include "_____________seaball_scoping_super.h"

#include <vector>

/**
 * @file
 *
 * A set of dynamically allocated, memory arbitrating (DAMA) collections for
 * SEABALL SUPER.
 */

/** @brief A contiguous memory collection, like C++'s <a
 * href="https://en.cppreference.com/w/cpp/container/vector">std::vector</a>.*/
#define DAMA_CONTIGUOUS_COLLECTION                                                         \
  _____________INTERNAL_BACKING_STDSUPER_COMPATIBILITY_NAMESPACE_ACCESSOR_scope_inclusive( \
      std)                                                                                 \
      _____________INTERNAL_BACKING_STDSUPER_COMPATIBILITY_TYPE_ACCESSOR(                  \
          vector)

#endif