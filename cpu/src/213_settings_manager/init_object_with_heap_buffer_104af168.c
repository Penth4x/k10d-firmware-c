/* @k10d init_object_with_heap_buffer_104af168 @ 0x104af168
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_buffer_104af168(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_or_init_sram_buffer_104ae40c();
  init_object_with_thirteen_members(uVar1,param_2);
  iVar2 = heap_alloc_2(0x10000);
  param_1[2] = iVar2;
  iVar2 = (uintptr_t)(init_system_parameter_block(0));
  param_1[1] = iVar2;
  copy_struct_fields_and_call(uVar1, (uint32_t)param_2);
  (*(code *)0x10536214/*ROM*/)(param_1[1],param_1[2],0x10000);
  iVar2 = cls_105b7838_new((cls_105b7838 *)0x0);
  *(int *)(iVar2 + 0xc) = param_1[1];
  *param_1 = iVar2;
  return;
}
