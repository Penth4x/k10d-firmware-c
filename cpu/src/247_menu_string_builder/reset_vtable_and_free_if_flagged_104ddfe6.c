/* @k10d reset_vtable_and_free_if_flagged_104ddfe6 @ 0x104ddfe6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Writes the class vtable pointer at offset 0x1c and frees the object when the low bit of
 *   param_2 is set.
 * summary:
 *   This is virtual slot 1 of class cls_105bb0b8. It stores the vtable address 0x105bb0b8
 *   into the object at offset 0x1c, then calls heap_free on the object if param_2 & 1 is
 *   non-zero. It is called by several verified deleting destructors of other classes,
 *   consistent with a base-class cleanup or virtual destructor pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_104ddfe6(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(uint32_t *)((int)param_1 + 0x1c) = 0x105bb0b8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
