/* @k10d compare_and_update_state_blocks @ 0x104c595e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Copies fields from param_3 to param_4, calls a validation routine, and on failure
 *   builds a comparison structure from both blocks.
 * summary:
 *   The function initializes a flag at param_1+0x219 and copies data from param_3 to
 *   param_4 via copy_large_struct and direct assignment. It calls
 *   compute_buffer_size_and_init with param_4, param_2, and 2; if this returns 0, it sets
 *   the flag based on param_4+0x10 and clears param_4+0x210. If non-zero, it extracts short
 *   values from param_3 and param_4 using return_first_word_1045c514 and
 *   read_struct_field_at_offset_4, packs them into a stack structure, and calls
 *   register_two_pointers_with_flags, setting param_4+0x210 based on the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_and_update_state_blocks(int param_1,uint32_t *param_2,int param_3,int param_4)

{
  struct {
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint16_t uStack_c;
  } _cfg_40;
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  *(uint8_t *)(param_1 + 0x219) = 0;
  copy_large_struct((uint32_t *)(param_4 + 0x34),(uint32_t *)(param_3 + 0x34));
  *(uint32_t *)(param_4 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  iVar2 = compute_buffer_size_and_init((void *)param_4,param_2,2);
  if (iVar2 == 0) {
    if (*(int *)(param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)(param_4 + 0x210) = 0;
    iVar2 = 0;
  }
  else {
    _cfg_40.uStack_30 = 0;
    _cfg_40.uStack_2e = 0;
    _cfg_40.uStack_2c = 0;
    _cfg_40.uStack_2a = 0;
    _cfg_40.uStack_28 = 0;
    _cfg_40.uStack_3c = *(uint32_t *)(param_3 + 0x20);
    _cfg_40.uStack_38 = *(uint32_t *)(param_3 + 0x24);
    _cfg_40.uStack_34 = *(uint32_t *)(param_3 + 0x28);
    _cfg_40.uStack_40 = *(uint32_t *)(param_3 + 0x1c);
    puVar1 = (uint32_t *)(param_3 + 0x2c);
    uVar3 = return_first_word_1045c514(puVar1);
    _cfg_40.uStack_2c = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    _cfg_40.uStack_30 = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar1);
    _cfg_40.uStack_2a = 0;
    _cfg_40.uStack_28 = 0;
    _cfg_40.uStack_14 = 0;
    _cfg_40.uStack_12 = 0;
    _cfg_40.uStack_10 = 0;
    _cfg_40.uStack_e = 0;
    _cfg_40.uStack_c = 0;
    _cfg_40.uStack_20 = *(uint32_t *)(param_4 + 0x20);
    _cfg_40.uStack_1c = *(uint32_t *)(param_4 + 0x24);
    _cfg_40.uStack_18 = *(uint32_t *)(param_4 + 0x28);
    _cfg_40.uStack_24 = *(uint32_t *)(param_4 + 0x1c);
    puVar1 = (uint32_t *)(param_4 + 0x2c);
    _cfg_40.uStack_2e = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    _cfg_40.uStack_10 = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    _cfg_40.uStack_14 = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar1);
    _cfg_40.uStack_e = 0;
    _cfg_40.uStack_c = 0;
    _cfg_40.uStack_12 = (short)uVar3;
    iVar2 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&_cfg_40.uStack_40,&_cfg_40.uStack_24);
    if (iVar2 == 0) {
      *(uint8_t *)(param_4 + 0x210) = 0;
    }
    else {
      *(uint8_t *)(param_4 + 0x210) = 1;
    }
  }
  return iVar2;
}
