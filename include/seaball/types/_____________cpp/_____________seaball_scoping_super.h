#ifndef _____________SEABALL_SCOPING_SUPER_H
#define _____________SEABALL_SCOPING_SUPER_H

/**
 * @file
 *
 * Definitions for required language scoping keywords for SEABALL SUPER.
 *
 * ADDENDUM
 * ----------------------------------------------------------------------------
 * The scoping keywords here are explicitly for namespace compatibility with
 * SEABALL internals. However, they do not require triplet information such as
 * compatibility types for the C ABI. Because these are intended to be
 * exclusively for internal use, they use the `SCREAMING_SNAKE_CASE` style, but
 * keep the tridecagunder (_____________) for clarity.
 */

/** @brief A namespace accessor for SEABALL's backing internals. */
#define _____________INTERNAL_BACKING_STDSUPER_COMPATIBILITY_NAMESPACE_ACCESSOR( \
    ns)                                                                          \
  ns

/** @brief A scoping namespace accessor for SEABALL's backing internals. */
#define _____________INTERNAL_BACKING_STDSUPER_COMPATIBILITY_NAMESPACE_ACCESSOR_scope_inclusive( \
    ns)                                                                                          \
  ns::

/**
 * @brief Type accessor for SEABALL's backing internals. Can be used in
 * conjunction with the namespace accessor.
 */
#define _____________INTERNAL_BACKING_STDSUPER_COMPATIBILITY_TYPE_ACCESSOR(t) t

#endif