/* @k10d compute_mode_dependent_pair_values @ 0x104a1d24
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Computes two 8-bit values based on a state query and writes them to two slots of
 *   param_2.
 * summary:
 *   The function queries a state via call_virtual_slot_two_104a290e. If the state is 9 or
 *   0xc, it derives values from a field at param_1+0x508. If 0x10 or 0x11, it uses
 *   constants 1 and 0xb4. Otherwise, it calls virtual methods on an object at param_1+0x14
 *   and query_object_state_flag_104a28e4 to compute values, passing them to
 *   validate_and_lookup_pair. Finally, it writes the two resulting bytes to param_2 using
 *   write_to_dynamic_array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_mode_dependent_pair_values(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_30 [12];
  ushort uStack_c;
  ushort uStack_a;
  
  piVar6 = (int *)auStack_30;
  iVar1 = call_virtual_slot_two_104a290e(__frv_reg_unset(4));
  if ((iVar1 == 9) || (iVar1 == 0xc)) {
    uVar3 = (*(int *)(*(int *)(param_1 + 8) + 0x508) + 5U) / 10;
    uVar4 = 100;
  }
  else if ((iVar1 == 0x10) || (iVar1 == 0x11)) {
    uVar3 = 1;
    uVar4 = 0xb4;
  }
  else {
    uStack_c = 0;
    uStack_a = 0;
    uVar2 = *(uint32_t *)(param_1 + 0x2c);
    iVar1 = **(int **)(param_1 + 0x14);
    uVar3 = (**(code **)(iVar1 + 0x14))
                      ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x10),0);
    uVar4 = query_object_state_flag_104a28e4(param_1);
    iVar1 = **(int **)(param_1 + 0x14);
    uVar5 = (**(code **)(iVar1 + 0x14))
                      ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x10),5);
    iVar1 = *(int *)(param_1 + 0x18);
    *piVar6 = (int)&uStack_c;
    piVar6[1] = (int)&uStack_a;
    piVar6[2] = iVar1;
    validate_and_lookup_pair(uVar2,uVar3 & 0xff,uVar4,uVar5 & 0xff,(uint16_t *)*piVar6,(uint16_t *)piVar6[1]
                 ,(int *)piVar6[2]);
    uVar3 = (uint)uStack_c;
    uVar4 = (uint)uStack_a;
  }
  write_to_dynamic_array(param_2,0,uVar3);
  write_to_dynamic_array(param_2,1,uVar4);
  return;
}
