/* @k10d compute_buffer_size_and_init @ 0x104c3e02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_buffer_size_and_init(void *param_1,uint32_t *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  
  if (param_3 == 1) {
    iVar1 = return_first_word_1045c514(param_2);
    iVar2 = read_struct_field_at_offset_4(param_2);
    uVar4 = iVar1 * iVar2 * 2;
  }
  else {
    iVar1 = return_first_word_1045c514(param_2);
    iVar2 = read_struct_field_at_offset_4(param_2);
    uVar4 = (uint)(iVar1 * iVar2 * 3) >> 1;
  }
  uVar3 = init_buffer_with_pool_alloc(param_1,uVar4);
  compute_and_store_interval_params((int)param_1,param_2,param_3);
  return uVar3;
}
