/* @k10d invoke_virtual_slot_two_1047d840 @ 0x1047d840
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 169_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1047d840(uint32_t param_1,int *param_2,uint32_t param_3)

{
  uintptr_t sp;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  
  alloc_and_zero_20_bytes(&uStack_1c);
  uStack_1c = 1;
  uStack_18 = 0x14;
  (**(code **)(*param_2 + 0x14))((int)*(short *)(*param_2 + 0x10) + (int)param_2,param_3,&uStack_1c)
  ;
  free_heap_if_flagged_10482f3c(&uStack_1c,2);
  return;
}
