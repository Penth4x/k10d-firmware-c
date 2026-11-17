/* @k10d free_object_if_flag_set_10530896 @ 0x10530896
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Stores a vtable pointer at offset 0x14 and frees the object if the low bit of param_2
 *   is set.
 * summary:
 *   Takes an object pointer and a flags word. If the pointer is non-NULL, it writes the
 *   address of DAT_1061e05c (likely a vtable) into the object at offset 0x14. If bit 0 of
 *   the flags word is set, it calls heap_free on the object. This matches the Cfront
 *   operator delete idiom: store vtable, then free if the flag indicates a heap allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_10530896(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x14) = &DAT_1061e05c, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
