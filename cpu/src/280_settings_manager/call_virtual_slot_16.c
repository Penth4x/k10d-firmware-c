/* @k10d call_virtual_slot_16 @ 0x10521c2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 16 on an object via its vtable pointer.
 * summary:
 *   The function dereferences the vtable pointer at offset 0xc of the object in param_1,
 *   then calls the function pointer at offset 0xa4 (slot 16) of that vtable. The 'this'
 *   pointer is adjusted by the short value at vtable offset 0xa0 before the call. No other
 *   operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_16(cls_105d7b7c *param_1)

{
  (((vtbl_entry*)(param_1->field_0xc))[20].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[20].adj);
  return;
}
