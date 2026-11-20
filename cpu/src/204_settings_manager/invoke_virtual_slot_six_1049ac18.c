/* @k10d invoke_virtual_slot_six_1049ac18 @ 0x1049ac18
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method pointer from an object field and invokes slot 6 with a this-
 *   adjusted pointer.
 * summary:
 *   The function reads a pointer chain from param_1 + 0x54 to locate a vtable-like
 *   structure. It extracts a virtual function pointer at offset 0x3c and a this-adjustment
 *   short at offset 0x38. It calls the virtual method with the adjusted object pointer and
 *   then clears the field at param_1 + 0x40. This is a standard Cfront virtual call idiom
 *   for slot 6 (offset 0x3c / 8 = 6).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_six_1049ac18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)**(uint32_t **)(*(int *)(param_1 + 0x54) + 0xc) * 4;
  **(int **)(iVar1 + param_1 + 0x24) = param_1 + 4;
  iVar1 = *(int *)(iVar1 + param_1 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x10);
  (((vtbl_entry*)(iVar2))[7].fn)(iVar1 + ((vtbl_entry*)(iVar2))[7].adj);
  *(uint32_t *)(param_1 + 0x40) = 0;
  return;
}
