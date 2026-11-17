/* @k10d init_object_from_source_struct @ 0x104b798c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 221_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_from_source_struct(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0xc) = *(uint32_t *)(iVar1 + 0x20);
  *(uint32_t *)((int)param_1 + 0x10) = *(uint32_t *)(iVar1 + 0x14);
  *(uint32_t *)((int)param_1 + 0x14) = *(uint32_t *)(iVar1 + 0xc);
  *(uint32_t *)((int)param_1 + 0x18) = *(uint32_t *)(iVar1 + 0x18);
  *(uint32_t *)((int)param_1 + 0x1c) = *(uint32_t *)(iVar1 + 0x1c);
  *(uint32_t *)((int)param_1 + 0x20) = *(uint32_t *)(iVar1 + 8);
  wait_flg_obj((void *)((int)param_1 + 0x24),0);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x30),1,1);
  uVar2 = heap_alloc_2(_DAT_80048310/*SDRAM*/ << 1);
  *(uint32_t *)((int)param_1 + 0x44) = uVar2;
  uVar2 = heap_alloc_2(_DAT_80048310/*SDRAM*/);
  *(uint32_t *)((int)param_1 + 0x48) = uVar2;
  return 1;
}
