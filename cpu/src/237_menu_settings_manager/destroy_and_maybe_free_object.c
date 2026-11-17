/* @k10d destroy_and_maybe_free_object @ 0x104ce4d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a member cleanup routine on the object, then frees the heap block if the flag bit
 *   is set.
 * summary:
 *   Takes a pointer and a flags word. If the pointer is non-null it calls
 *   free_if_flag_set_104ce624(param_1, 2) to perform some member/base cleanup, and if bit 0
 *   of param_2 is set it calls heap_free on the object. This is the common Cfront idiom for
 *   a deleting destructor: reset/cleanup then free when the heap-allocated flag is set. The
 *   role of free_if_flag_set_104ce624 is not independently verified, so the specific
 *   subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_and_maybe_free_object(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) && (free_if_flag_set_104ce624(param_1,2), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
