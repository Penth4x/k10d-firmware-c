/* @k10d process_object_state_change_1047b99e @ 0x1047b99e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_state_change_1047b99e(int param_1, uint32_t param_2, uint32_t param_3)
{
  int iVar1;
  uintptr_t sp;
  bool bVar2;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
    uStack_c = *(uint16_t *)(iVar1 + 8);
    uStack_a = *(uint16_t *)(iVar1 + 10);
    if (*(int *)(iVar1 + 4) == 1) {
      iVar1 = process_object_with_helper_chain((int)(param_1),(uint16_t *)(&uStack_c),(ushort *)(*(uint32_t *)(iVar1 + 0xc)));
      bVar2 = iVar1 == 0;
    }
    else if (*(int *)(iVar1 + 4) == 3) {
      iVar1 = dispatch_state_transition_1047bfb0(param_1,(short *)(uint32_t)param_2,(short *)(uint32_t)param_3);
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(uint32_t *)(param_1 + 0x34) = 1;
    }
    else {
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
  }
  return;
}
