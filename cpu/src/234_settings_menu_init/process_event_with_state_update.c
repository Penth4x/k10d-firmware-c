/* @k10d process_event_with_state_update @ 0x104c9332
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 234_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Processes an event by copying state, checking a condition, and dispatching to a handler
 *   if necessary.
 * summary:
 *   The function copies specific fields from param_3 to param_4 and initializes a flag in
 *   param_1. It calls compute_buffer_size_and_init to check a condition; if the check
 *   fails, it constructs a stack-based structure using values from param_3 and param_4 (via
 *   return_first_word_1045c514/1e) and calls register_two_pointers_with_flags and
 *   encode_mode_parameter_and_send to process the event. It updates a status byte in
 *   param_4 based on the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_event_with_state_update(int param_1,void *param_2,int param_3,int param_4,int param_5,uint param_6,
                uint32_t param_7)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t local_78 [4];
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
  
  piVar4 = (int *)local_78;
  copy_large_struct((uint32_t *)(param_4 + 0x34),(uint32_t *)(param_3 + 0x34));
  *(uint32_t *)(param_4 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  *(uint8_t *)(param_1 + 0x219) = 0;
  iVar2 = compute_buffer_size_and_init((void *)param_4,param_2,1);
  if (iVar2 == 0) {
    if (*(int *)(param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)(param_4 + 0x210) = 0;
  }
  else {
    uStack_30 = 0;
    uStack_2e = 0;
    uStack_2c = 0;
    uStack_2a = 0;
    uStack_28 = 0;
    uStack_3c = *(uint32_t *)(param_3 + 0x20);
    uStack_38 = *(uint32_t *)(param_3 + 0x24);
    uStack_34 = *(uint32_t *)(param_3 + 0x28);
    uStack_40 = *(uint32_t *)(param_3 + 0x1c);
    puVar1 = (uint32_t *)(param_3 + 0x2c);
    uVar3 = return_first_word_1045c514(puVar1);
    uStack_2c = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    uStack_30 = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar1);
    uStack_2a = 0;
    uStack_28 = 0;
    uStack_24 = 1;
    uStack_14 = 0;
    uStack_12 = 0;
    uStack_10 = 0;
    uStack_e = 0;
    uStack_c = 0;
    uStack_20 = *(uint32_t *)(param_4 + 0x20);
    uStack_1c = *(uint32_t *)(param_4 + 0x24);
    uStack_18 = *(uint32_t *)(param_4 + 0x28);
    puVar1 = (uint32_t *)(param_4 + 0x2c);
    uStack_2e = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    uStack_10 = (short)uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    uStack_14 = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar1);
    uStack_e = 0;
    uStack_c = 0;
    uStack_12 = (short)uVar3;
    iVar2 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&uStack_40,&uStack_24);
    if (iVar2 != 0) {
      if ((param_5 == 1) && (iVar2 = read_struct_field_at_index_104c2890((uint32_t *)(param_3 + 0x34),6), iVar2 == 2)) {
        param_6 = param_6 | 0x80000000/*SDRAM*/;
      }
      uVar3 = *(uint32_t *)(param_1 + 0x4c);
      *piVar4 = param_7;
      iVar2 = encode_mode_parameter_and_send(uVar3,&uStack_24,param_5,param_6,*piVar4);
      if (iVar2 != 0) {
        *(uint8_t *)(param_4 + 0x210) = 1;
        return iVar2;
      }
    }
    *(uint8_t *)(param_4 + 0x210) = 0;
  }
  return 0;
}
