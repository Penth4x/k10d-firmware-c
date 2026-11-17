/* @k10d init_object_with_two_ids_104b02ba @ 0x104b02ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a new object instance and registers it with a parent container using two
 *   identifier values.
 * summary:
 *   The function allocates a new object via cls_105b7994_new and stores the pointer in
 *   param_1. It calls a virtual method on an object obtained from
 *   get_or_create_singleton_object_104ea7f6, passing param_2. It then invokes two functions
 *   at 0x104afcb2 with arguments 1 and 2, respectively, passing values derived from puVar1
 *   and piVar2. Finally, it calls call_helper_on_field_at_offset_0x40 on piVar2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104b02ba(int *param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int *piVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  puVar1 = (uint32_t *)get_or_init_sram_buffer_104af136();
  piVar2 = (int *)get_or_create_singleton_object_104ea7f6();
  init_object_with_heap_buffer_104af168(puVar1,param_2);
  (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2,param_2);
  init_object_with_two_ids_104b04a8(param_1);
  iVar3 = cls_105b7994_new((uint32_t *)0x0,2);
  *param_1 = iVar3;
  (**(code **)(*(int *)(iVar3 + 0x10) + 0x1c))(iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x18),0);
  (*(code *)0x104afcb2/*ROM*/)(*param_1,1,*puVar1,0);
  iVar3 = *param_1;
  uVar4 = (*(code *)0x104eac02/*ROM*/)(piVar2);
  uVar5 = (*(code *)0x104eabfc/*ROM*/)(piVar2);
  (*(code *)0x104afcb2/*ROM*/)(iVar3,2,uVar4,uVar5);
  get_or_init_sram_block_104b3d52();
  uVar4 = call_two_helpers_and_return_104b3df8();
  store_value_in_struct_field(puVar1,uVar4);
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1 + 0x1c;
  }
  (*(code *)0x104eab7a/*ROM*/)(piVar2,iVar3);
  call_helper_on_field_at_offset_0x40(piVar2);
  return;
}
