/* @k10d virtual_destructor_free_104266ce @ 0x104266ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 102_menu_param_access (unit names are model-proposed)
 * purpose:
 *   Sets the object's vtable pointer to the class vtable and frees the heap block if the
 *   low bit of the flag is set.
 * summary:
 *   This is virtual slot 1 of cls_1059e05c, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x1059e05c into the object header and calls heap_free on the object
 *   when param_2 & 1 is true. The object size is 0x4 bytes, so no additional member cleanup
 *   is performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void virtual_destructor_free_104266ce(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e05c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
