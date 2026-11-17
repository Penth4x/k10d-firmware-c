/* @k10d adjust_image_processor_gain_104ff85c @ 0x104ff85c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Iteratively adjusts a gain parameter based on a target value and sends the updated
 *   configuration to the image processor.
 * summary:
 *   The function enters a loop to calculate an optimal value (uVar5) by comparing a current
 *   state (param_1+0x24) against a target (param_2[10]) with 90% and 110% thresholds. It
 *   constructs a configuration struct on the stack from param_2 and calls
 *   configure_object_with_mode_flags to send it to the device at param_1+0x30. The loop
 *   repeats up to 100 times or until the value converges. Finally, it sends the final
 *   configuration once more.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_image_processor_gain_104ff85c(int param_1,uint32_t *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint32_t *puVar4;
  uint uVar5;
  uintptr_t sp;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint32_t uStack_54;
  uint8_t uStack_50;
  uint8_t uStack_4f;
  uint uStack_4c;
  uint8_t uStack_48;
  uint8_t uStack_47;
  uint32_t uStack_44;
  uint8_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_24;
  uint8_t uStack_20;
  uint8_t uStack_1f;
  uint uStack_1c;
  uint8_t uStack_18;
  uint8_t uStack_17;
  uint32_t uStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  uStack_c = 0;
  uVar1 = 0;
  uVar5 = 0x251c;
  while( true ) {
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_10 = 0;
    uStack_38 = param_2[1];
    uStack_34 = param_2[2];
    uStack_30 = param_2[3];
    uStack_28 = *(uint16_t *)(param_2 + 5);
    if (param_2[9] == 2) {
      uStack_14 = 2;
    }
    else if (param_2[9] == 1) {
      uStack_14 = 1;
    }
    else {
      uStack_14 = 1;
    }
    uStack_2c = *(uint16_t *)(param_2 + 4);
    uStack_2a = *(uint16_t *)((int)param_2 + 0x12);
    uStack_24 = param_2[6];
    uStack_3c = *param_2;
    uStack_18 = 1;
    if (*(ushort *)(param_2 + 4) < 0x280) {
      uStack_17 = 0;
    }
    else {
      uStack_17 = 2;
    }
    puVar4 = (uint32_t *)(param_1 + 0x3c);
    uStack_1c = uVar5;
    eventflag_clr_flg(puVar4,1);
    configure_object_with_mode_flags(*(int *)(param_1 + 0x30),param_1 + 4,&uStack_3c);
    eventflag_wai_flg(puVar4,1,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar4,1);
    reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
    uVar3 = *(uint *)(param_1 + 0x24);
    if (0x27f < *(ushort *)(param_2 + 4)) {
      uVar3 = uVar3 << 2;
    }
    if (uVar5 < 0x65) break;
    iVar2 = param_2[10];
    if (iVar2 == 0) {
      if (0x251b < uVar5) {
        uVar5 = 0x251c;
      }
      goto LAB_104ffac8;
    }
    if ((0x251b < uVar5) && (uVar3 < (uint)(iVar2 * 0x6e) / 100)) {
      uVar5 = 0x251c;
      goto LAB_104ffac8;
    }
    if (uVar3 < (uint)(iVar2 * 0x5a) / 100) {
      uVar5 = uVar5 + 100;
    }
    else {
      if (uVar3 <= (uint)(iVar2 * 0x6e) / 100) goto LAB_104ffac8;
      uVar5 = uVar5 - 100;
    }
    if (100 < uVar1) goto LAB_104ffac8;
    uVar1 = uVar1 + 1;
  }
  uVar5 = 100;
LAB_104ffac8:
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_47 = 0;
  uStack_68 = param_2[1];
  uStack_64 = param_2[2];
  uStack_60 = param_2[3];
  uStack_58 = *(uint16_t *)(param_2 + 5);
  if (param_2[9] == 2) {
    uStack_44 = 2;
  }
  else if (param_2[9] == 1) {
    uStack_44 = 1;
  }
  else {
    uStack_44 = 1;
  }
  uStack_5c = *(uint16_t *)(param_2 + 4);
  uStack_5a = *(uint16_t *)((int)param_2 + 0x12);
  uStack_54 = param_2[6];
  uStack_6c = *param_2;
  puVar4 = (uint32_t *)(param_1 + 0x3c);
  uStack_4c = uVar5;
  eventflag_clr_flg(puVar4,1);
  configure_object_with_mode_flags(*(int *)(param_1 + 0x30),param_1 + 4,&uStack_6c);
  eventflag_wai_flg(puVar4,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,1);
  reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
  return;
}
