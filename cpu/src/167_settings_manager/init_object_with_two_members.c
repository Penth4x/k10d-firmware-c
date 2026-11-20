/* @k10d init_object_with_two_members @ 0x1047a770
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_members(void *param_1)

{
  struct {
    uint32_t uStack_14;
    int iStack_10;
    uint32_t uStack_c;
  } _cfg_14;
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  uintptr_t sp;
  uVar1 = (uint32_t)(cls_105aa5ec_new(0));
  *(uint32_t *)((int)param_1 + 8) = uVar1;
  uVar1 = (uint32_t)(cls_105aa6e8_new(0));
  *(uint32_t *)((int)param_1 + 4) = uVar1;
  alloc_two_word_pair_1047a414(&_cfg_14.uStack_14);
  iVar2 = get_or_create_sram_object_104816ee();
  _cfg_14.uStack_14 = *(uint32_t *)(iVar2 + 0xc);
  iVar2 = get_or_create_sram_object_104816ee();
  _cfg_14.iStack_10 = forward_second_field_call(*(void **)(iVar2 + 0xc));
  piVar3 = *(int **)((int)param_1 + 8);
  iVar2 = *piVar3;
  (((vtbl_entry*)(iVar2))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(iVar2))[2].adj,&_cfg_14.uStack_14);
  alloc_zeroed_word_1047a70a(&_cfg_14.uStack_c);
  _cfg_14.uStack_c = *(uint32_t *)((int)param_1 + 8);
  iVar2 = **(int **)((int)param_1 + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)((int)param_1 + 4) + (int)((vtbl_entry*)(iVar2))[2].adj,&_cfg_14.uStack_c);
  free_heap_block_if_flagged_1047a726(&_cfg_14.uStack_c,2);
  free_if_flag_set_1047a434(&_cfg_14.uStack_14,2);
  return uVar1;
}
