/* @k10d init_object_and_call_virtual_slot_104b26e4 @ 0x104b26e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter into an object, calls two helpers on its fields, then invokes a
 *   virtual method via the vtable.
 * summary:
 *   The function writes param_2 to offset 0xc of the object pointed to by param_1. It then
 *   calls an unknown function at 0x104ad2d4 with fields at offsets 8 and 4, and calls
 *   clear_two_fields_and_reset with the field at offset 8 and the constant 1. Finally, it
 *   performs a virtual call through the pointer stored at offset 0xc, invoking the method
 *   at vtable offset 0x34 with a this-adjustment from offset 0x30, the constant 1, and the
 *   field at offset 8. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_and_call_virtual_slot_104b26e4(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0xc) = param_2;
  (*(code *)0x104ad2d4/*ROM*/)(*(uint32_t *)(param_1 + 8),*(uint32_t *)(param_1 + 4),8,0);
  clear_two_fields_and_reset((void*)(*(uint32_t *)(param_1 + 8)),1);
  iVar2 = **(int **)(param_1 + 0xc);
  uVar1 = (((vtbl_entry*)(iVar2))[6].fn)
                    ((int)*(int **)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar2))[6].adj,1,
                     *(uint32_t *)(param_1 + 8));
  return uVar1;
}
