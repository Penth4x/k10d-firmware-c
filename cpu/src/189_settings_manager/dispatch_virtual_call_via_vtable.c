/* @k10d dispatch_virtual_call_via_vtable @ 0x1048d250
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object stored at offset 0x30 of the input structure.
 * summary:
 *   The function first calls a helper at 0x1048cc66 with the object pointer and three
 *   parameters. It then dereferences the object's vtable pointer at offset 0x20, retrieves
 *   the function pointer at vtable offset 0x24, and performs a virtual call with a this-
 *   adjustment. Finally, it calls call_helper_if_field_nonzero_1048d4b2 with the object
 *   pointer and the constant 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_vtable(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5,uint16_t param_6)

{
  int iVar1;
  
  (*(code *)0x1048cc66/*ROM*/)(*(uint32_t *)(param_1 + 0x30),param_1 + 4,param_2,param_3);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x20);
  (**(code **)(iVar1 + 0x24))
            (*(int *)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x20),param_4,param_5,param_6);
  call_helper_if_field_nonzero_1048d4b2(*(uint32_t *)(param_1 + 0x30),1);
  return;
}
