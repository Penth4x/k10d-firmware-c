/* @k10d unlink_and_copy_pointer @ 0x1045b80c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void unlink_and_copy_pointer(uint32_t *param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_10;
  
  if (*(int *)((int)param_2 + 8) != 0) {
    swap_first_word_and_call_helper_1045b9e2((void *)&piStack_10,param_3,0);
    *(int *)(*piStack_10 + 4) = piStack_10[1];
    *(int *)piStack_10[1] = *piStack_10;
    piStack_10[2] = 0;
    iVar1 = **(int **)((int)param_2 + 4);
    (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_2 + 4) + (int)*(short *)(iVar1 + 0x18));
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + -1;
  }
  *param_1 = *param_3;
  return;
}
