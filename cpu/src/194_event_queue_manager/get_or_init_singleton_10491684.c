/* @k10d get_or_init_singleton_10491684 @ 0x10491684
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a global object on first call and returns a pointer to it.
 * summary:
 *   Checks if global _DAT_80048ef4 is zero; if so, sets it to 1, calls
 *   allocate_two_object_pair with address 0x80048eec, and calls
 *   prepend_to_singly_linked_list with address 0x80010478. Returns the pointer 0x80048eec.
 *   The pattern is a standard lazy-initialization singleton accessor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_singleton_10491684(void)

{
  /* Lazy singleton: first caller allocates the object pair and links it into
   * the queue; subsequent callers skip straight to the return. */
  if (_DAT_80048ef4 == 0) {
    _DAT_80048ef4 = 1;
    allocate_two_object_pair((void *)0x80048eec);
    prepend_to_singly_linked_list((void *)0x80010478);
  }
  return 0x80048eec;
}
