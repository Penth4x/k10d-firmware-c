/* @k10d invoke_virtual_slot_7_104ea29c @ 0x104ea29c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of the object stored at offset 0x14 of the input object and
 *   returns the result.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x14 to obtain a sub-object. It then
 *   performs a virtual call to slot 7 (offset 0x3c) of that sub-object's vtable, applying
 *   the this-adjustment from offset 0x38. The return value of the virtual call is returned
 *   directly. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_7_104ea29c(cls_105c2050 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(uint32_t*)(param_1->field_0x14);
  uVar1 = (((vtbl_entry*)(iVar2))[7].fn)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[7].adj);
  return uVar1;
}
