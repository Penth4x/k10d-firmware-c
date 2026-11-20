/* @k10d init_object_from_source_struct @ 0x104b798c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 221_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_object_from_source_struct(cls_105b9274 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  param_1->field_0xc = *(uint32_t *)(iVar1 + 0x20);
  param_1->field_0x10 = *(uint32_t *)(iVar1 + 0x14);
  param_1->field_0x14 = *(uint32_t *)(iVar1 + 0xc);
  param_1->field_0x18 = *(uint32_t *)(iVar1 + 0x18);
  param_1->field_0x1c = *(uint32_t *)(iVar1 + 0x1c);
  param_1->field_0x20 = *(uint32_t *)(iVar1 + 8);
  wait_flg_obj(&param_1->field_0x24,0);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x2c))[1],1,1);
  uVar2 = heap_alloc_2(_DAT_80048310/*SDRAM*/ << 1);
  param_1->field_0x44 = uVar2;
  uVar2 = heap_alloc_2(_DAT_80048310/*SDRAM*/);
  param_1->field_0x48 = uVar2;
  return 1;
}
