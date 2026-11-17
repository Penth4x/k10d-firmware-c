/* @k10d set_object_field_and_invoke_virtual_104e066a @ 0x104e066a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_field_and_invoke_virtual_104e066a(int param_1,uint32_t param_2)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x1028) = param_2;
  *(uint32_t *)(param_1 + 0x1024) = 0x4009;
  iVar1 = **(int **)(param_1 + 0x1020);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x1020) + (int)*(short *)(iVar1 + 0x10));
  return 1;
}
