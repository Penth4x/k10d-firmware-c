/* @k10d invoke_virtual_slot_12_10391776 @ 0x10391776
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 12 of an object pointer stored at offset 0x2c48 in the input
 *   structure.
 * summary:
 *   The function reads a pointer from offset 0x2c48 of the structure pointed to by param_1.
 *   If the pointer is non-null, it performs a virtual call to slot 12 (offset 100) of that
 *   object, passing the object pointer adjusted by the value at offset 0x60. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10391776(cls_10562400 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x46].field_0x88;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[12].fn)((int)((vtbl_entry*)(*piVar1))[12].adj + (int)piVar1);
  }
  return;
}
