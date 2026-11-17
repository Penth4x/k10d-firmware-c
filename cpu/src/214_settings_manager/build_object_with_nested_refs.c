/* @k10d build_object_with_nested_refs @ 0x104b1fec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_object_with_nested_refs(int param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar1 = cls_105d7078_new(0);
  iVar2 = allocate_and_init_six_field_struct(0);
  iVar3 = cls_105c20d0_new(0);
  uVar4 = get_or_init_sram_block_104b0a5e();
  (*(code *)0x104b0f6e/*ROM*/)(uVar4,uVar1,param_2,param_3);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,uVar1,6);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,*(uint32_t *)(param_1 + 0x24),0xfe);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,*(uint32_t *)(param_1 + 0x28),100);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,*(uint32_t *)(param_1 + 0x2c),0x66);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,*(uint32_t *)(param_1 + 0x2c),0xff);
  (*(code *)0x104b26bc/*ROM*/)(iVar2,*(uint32_t *)(param_1 + 0x30),0x67);
  uVar1 = cls_105d70c8_new(0);
  uVar4 = cls_105d70f0_new(0);
  **(uint32_t **)(iVar2 + 0x10) = uVar1;
  *(uint32_t *)(*(int *)(iVar2 + 0x10) + 4) = uVar4;
  *(int *)(iVar3 + 8) = iVar2;
  return iVar3;
}
