/* @k10d invoke_object_callback_and_store_result @ 0x104b74bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object and stores the return value in a struct field.
 * summary:
 *   The function writes two bytes from parameters to offsets 0x868 and 0x869 of the object.
 *   It then invokes a virtual function (slot 4) via the vtable pointer at offset 0xc. If
 *   the virtual call returns 1, it calls two helper functions and
 *   map_mode_bit_to_code_104b759a. The final result is stored at offset 0x86c and returned
 *   as a boolean.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_callback_and_store_result(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar1 = param_1 + 0x10;
  zero_struct_fields_1046c7e8((void *)iVar1);
  *(uint8_t *)(param_1 + 0x868) = (uint8_t)param_2;
  *(uint8_t *)(param_1 + 0x869) = (uint8_t)param_3;
  store_value_to_pointer_1046c7d4((void *)iVar1,*(uint32_t *)(param_1 + 0x870));
  iVar2 = **(int **)(param_1 + 0xc);
  iVar1 = (**(code **)(iVar2 + 0x2c))
                    ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x28),param_1,iVar1);
  if (iVar1 == 1) {
    uStack_c = 0;
    eventflag_wai_flg((uint32_t *)(param_1 + 4),0x3f,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 4),uStack_c);
    iVar1 = map_mode_bit_to_code_104b759a(param_1,uStack_c);
  }
  *(int *)(param_1 + 0x86c) = iVar1;
  return iVar1 != 0;
}
