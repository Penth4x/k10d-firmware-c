/* @k10d cls_10621c28_delete @ 0x10535df4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10621c28: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word to the vtable address 0x10621c28, then calls heap_free on
 *   the object if param_2 bit 0 is set. This is the standard Cfront deleting-destructor
 *   pattern for a 4-byte class. It is virtual slot 2 of cls_10621c28 and is called by
 *   cls_105d8b38_delete during its member cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10621c28_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_10621c28, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
