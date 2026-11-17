/* @k10d init_object_with_two_ids_104b04a8 @ 0x104b04a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104b04a8(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_or_create_singleton_object_1046c502();
  uVar3 = *(uint32_t *)(iVar1 + 4);
  uVar2 = alloc_and_zero_struct_1046c686((uint32_t *)0x0);
  *(uint32_t *)((int)param_1 + 4) = uVar2;
  iVar1 = cls_105d8b38_new(0);
  *(int *)((int)param_1 + 8) = iVar1;
  *(uint32_t *)(iVar1 + 8) = *(uint32_t *)((int)param_1 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x10) = uVar3;
  uVar2 = get_or_init_sram_buffer_104af136();
  call_handler_with_fetched_arg_104af30e(uVar2,*(uint32_t *)((int)param_1 + 8));
  return;
}
