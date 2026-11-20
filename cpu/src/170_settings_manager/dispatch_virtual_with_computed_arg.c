/* @k10d dispatch_virtual_with_computed_arg @ 0x1047ecce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads fields from an object and invokes a virtual method with a computed integer
 *   argument.
 * summary:
 *   The function extracts several fields from the object pointed to by param_1, including a
 *   16-bit value at offset 0x1e, an integer at 0x14, a byte at 0x20, and an integer at
 *   0x24. It calls get_byte_or_default_0x20 to obtain an additional argument. It then
 *   performs a virtual call through a vtable pointer at offset 0x30, specifically invoking
 *   the method at vtable offset 0x1c (slot 3) with the object pointer adjusted by the short
 *   at vtable offset 0x18, the computed sum of the extracted fields, and the result from
 *   get_byte_or_default_0x20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_with_computed_arg(cls_105aaebc *param_1)

{
  ushort uVar1;
  byte bVar2;
  uint8_t uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1->field_0x1e;
  iVar4 = param_1->field_0x14;
  bVar2 = param_1->field_0x20;
  iVar5 = param_1->field_0x24;
  uVar3 = get_byte_or_default_0x20((int)param_1);
  (((vtbl_entry*)(param_1->field_0x30))[3].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x30))[3].adj,
             iVar4 + (uint)uVar1 + iVar5 * (uint)bVar2,uVar3);
  return;
}
