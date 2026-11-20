/* @k10d calculate_lens_fw_transfer_bounds @ 0x105431d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int calculate_lens_fw_transfer_bounds(void *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int extraout_r4;
  uint uVar3;
  int extraout_r4_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uintptr_t sp;
  int *in_stack_00000010;
  int iStack_10;
  uint uStack_c;
  
  uVar5 = param_3[1];
  uVar1 = *(uint *)((int)param_1 + 0x10);
  uVar3 = param_2[1] * uVar1;
  uVar2 = param_3[2];
  if (uVar2 == 0) {
    if (uVar5 < uVar3) {
      compute_lens_fw_block_offset_10542e98((int)param_1,*param_2,*param_3,uVar5,0,(int)&uStack_c);
      iVar6 = uVar5 - uStack_c;
      iStack_10 = extraout_r4_00;
      if (uStack_c != 0) {
        uVar3 = unsigned_divide(uStack_c,uVar1);
        uVar1 = compute_modulo_10544c28(uStack_c,uVar1);
        if (uVar1 == 0) {
          uVar3 = uVar3 - 1;
        }
        *in_stack_00000010 = *param_2 + uVar3;
      }
    }
    else {
      iStack_10 = compute_lens_fw_offset((void *)(param_1),(void *)(*param_3),(int *)(param_2),(uint *)(&uStack_c));
      iVar6 = uVar5 - uStack_c * uVar1;
      if (iStack_10 < 0) {
        *in_stack_00000010 = *param_2 + uStack_c;
      }
      else {
        *in_stack_00000010 = *param_2 + param_2[1] + -1;
      }
    }
  }
  else {
    uVar4 = uVar5;
    if (uVar3 <= uVar2 + uVar5) {
      uVar4 = uVar3 - uVar2;
    }
    compute_lens_fw_block_offset_10542e98((int)param_1,*param_2,*param_3,uVar4,uVar2,(int)&uStack_c);
    iVar6 = uVar5 - uStack_c;
    iStack_10 = extraout_r4;
    if (extraout_r4 < 0) {
      uVar3 = unsigned_divide(param_3[2] + uStack_c,uVar1);
      *in_stack_00000010 = *param_2 + uVar3;
    }
    else {
      *in_stack_00000010 = *param_2 + param_2[1] + -1;
    }
  }
  in_stack_00000010[1] = param_3[1] - iVar6;
  return iStack_10;
}
