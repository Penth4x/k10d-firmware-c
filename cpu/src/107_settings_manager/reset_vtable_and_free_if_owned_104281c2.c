/* @k10d reset_vtable_and_free_if_owned_104281c2 @ 0x104281c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x1059e490 and frees the heap block if the low
 *   bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of class cls_1059e490. It writes the class vtable address into
 *   the first word of the object, then calls heap_free on the object pointer when bit 0 of
 *   param_2 is set. It is invoked by the deleting destructors of several unrelated classes,
 *   suggesting it is a shared base-class cleanup or virtual destructor helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_104281c2(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e490/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
