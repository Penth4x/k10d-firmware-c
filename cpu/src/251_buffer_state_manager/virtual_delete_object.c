/* @k10d virtual_delete_object @ 0x104e1012
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets the vtable pointer to the class vtable and frees the object if the heap flag bit
 *   is set.
 * summary:
 *   This is virtual slot 3 of cls_105bd140, acting as a deleting destructor. It writes the
 *   vtable address 0x105bd150 into the object header and calls heap_free on the object when
 *   param_2 bit 0 is set. The heap_free callee is the standard operator delete path that
 *   stores the vtable before freeing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void virtual_delete_object(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bd150/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
