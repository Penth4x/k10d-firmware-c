/* @k10d adjust_image_processor_gain_104ffb94 @ 0x104ffb94
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Iteratively adjusts an image processor parameter by stepping a value down until a
 *   target condition is met.
 * summary:
 *   The function builds a command structure on the stack from param_2 and param_3, then
 *   enters a loop that calls configure_object_with_mode_flags and
 *   reset_object_fields_and_call_vtable to interact with the image processor. It reads a
 *   value from *(param_1 + 0x24) and compares it to param_3[1]. If the value is too high,
 *   it decrements a local variable (_cfg_40.uStack_c) by 500 in a loop, re-sending commands until
 *   the condition is satisfied or the value reaches a minimum of 100. This behavior is
 *   consistent with an automatic gain or exposure adjustment loop for the image pipeline.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_image_processor_gain_104ffb94(int param_1,int param_2,uint32_t *param_3)

{
  struct {
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint32_t uStack_28;
    uint8_t uStack_24;
    uint8_t uStack_23;
    uint uStack_20;
    uint8_t uStack_1c;
    uint8_t uStack_1b;
    uint32_t uStack_18;
    uint8_t uStack_14;
    uint32_t uStack_10;
    uint uStack_c;
  } _cfg_40;
  int iVar1;
  uint32_t *puVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  uint uStack_6c;
  uStack_6c = 0;
  _cfg_40.uStack_10 = 0;
  _cfg_40.uStack_c = 0x251c;
  _cfg_40.uStack_24 = 0;
  _cfg_40.uStack_23 = 0;
  iVar4 = 0;
  _cfg_40.uStack_14 = 0;
  iVar1 = param_1 + 4;
  do {
    _cfg_40.uStack_40 = *(uint32_t *)(param_2 + 4);
    _cfg_40.uStack_3c = *(uint32_t *)(param_2 + 8);
    _cfg_40.uStack_38 = *(uint32_t *)(param_2 + 0xc);
    _cfg_40.uStack_34 = *param_3;
    _cfg_40.uStack_30 = *(uint16_t *)(param_2 + 0x10);
    _cfg_40.uStack_2e = *(uint16_t *)(param_2 + 0x12);
    if (param_3[4] == 2) {
      _cfg_40.uStack_18 = 2;
    }
    else if (param_3[4] == 1) {
      _cfg_40.uStack_18 = 1;
    }
    else {
      _cfg_40.uStack_18 = 1;
    }
    _cfg_40.uStack_1c = 1;
    if (*(ushort *)(param_2 + 0x10) < 0x280) {
      _cfg_40.uStack_1b = 0;
    }
    else if (iVar4 == 0) {
      _cfg_40.uStack_1b = 4;
    }
    else {
      _cfg_40.uStack_1b = 4;
    }
    _cfg_40.uStack_28 = param_3[2];
    _cfg_40.uStack_2c = *(uint16_t *)(param_3 + 5);
    puVar2 = (uint32_t *)(param_1 + 0x3c);
    _cfg_40.uStack_20 = _cfg_40.uStack_c;
    eventflag_clr_flg(puVar2,1);
    configure_object_with_mode_flags(*(int *)(param_1 + 0x30),iVar1,&_cfg_40.uStack_40);
    eventflag_wai_flg(puVar2,1,&_cfg_40.uStack_10,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar2,1);
    if (*(ushort *)(param_2 + 0x10) < 0x280) {
      uVar3 = *(uint *)(param_1 + 0x24);
LAB_104ffce4:
      uStack_6c = uVar3;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x24) << 4;
      if (iVar4 == 0) goto LAB_104ffce4;
    }
    reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
    if (uVar3 <= (uint)param_3[1]) {
      *(uint8_t *)(param_1 + 0x2c) = 1;
      goto LAB_104ffd24;
    }
    if (iVar4 == 0) {
      compute_image_processor_gain(*(uint32_t *)(param_1 + 0x34),param_3[1],uVar3,&_cfg_40.uStack_c);
    }
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
LAB_104ffd24:
      if (*(char *)(param_1 + 0x2c) == '\0') {
        if (uVar3 * 100 < (uint)(param_3[1] * 0x46) / 100) {
          _cfg_40.uStack_c = 0x251c;
          binary_search_lookup_table(*(uint32_t *)(param_1 + 0x34),param_3[1],uStack_6c,(uint *)__frv_reg_unset(7));
        }
        else {
          adjust_iso_sensitivity_value(*(uint32_t *)(param_1 + 0x34),param_3[1],uVar3,&_cfg_40.uStack_c);
        }
      }
      *(uint8_t *)(param_1 + 0x2c) = 0;
      _cfg_40.uStack_40 = *(uint32_t *)(param_2 + 4);
      _cfg_40.uStack_3c = *(uint32_t *)(param_2 + 8);
      _cfg_40.uStack_38 = *(uint32_t *)(param_2 + 0xc);
      _cfg_40.uStack_34 = *param_3;
      _cfg_40.uStack_30 = *(uint16_t *)(param_2 + 0x10);
      _cfg_40.uStack_2e = *(uint16_t *)(param_2 + 0x12);
      if (param_3[4] == 2) {
        _cfg_40.uStack_18 = 2;
      }
      else if (param_3[4] == 1) {
        _cfg_40.uStack_18 = 1;
      }
      else {
        _cfg_40.uStack_18 = 1;
      }
      _cfg_40.uStack_28 = param_3[2];
      _cfg_40.uStack_2c = *(uint16_t *)(param_3 + 5);
      puVar2 = (uint32_t *)(param_1 + 0x3c);
      _cfg_40.uStack_20 = _cfg_40.uStack_c;
      _cfg_40.uStack_1c = 0;
      _cfg_40.uStack_1b = 0;
      eventflag_clr_flg(puVar2,1);
      configure_object_with_mode_flags(*(int *)(param_1 + 0x30),iVar1,&_cfg_40.uStack_40);
      eventflag_wai_flg(puVar2,1,&_cfg_40.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar2,1);
      param_3[3] = *(uint32_t *)(param_1 + 0x24);
      reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
      if ((uint)param_3[2] < *(uint *)(param_1 + 0x24)) {
        do {
          _cfg_40.uStack_c = _cfg_40.uStack_c - 500;
          if (_cfg_40.uStack_c < 100) {
            _cfg_40.uStack_c = 100;
          }
          puVar2 = (uint32_t *)(param_1 + 0x3c);
          _cfg_40.uStack_20 = _cfg_40.uStack_c;
          eventflag_clr_flg(puVar2,1);
          configure_object_with_mode_flags(*(int *)(param_1 + 0x30),iVar1,&_cfg_40.uStack_40);
          eventflag_wai_flg(puVar2,1,&_cfg_40.uStack_10,_DAT_105a2af0/*ROM*/);
          eventflag_clr_flg(puVar2,1);
          param_3[3] = *(uint32_t *)(param_1 + 0x24);
          reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
        } while (((uint)param_3[2] <= *(uint *)(param_1 + 0x24)) && (100 < _cfg_40.uStack_c));
      }
      return;
    }
  } while( true );
}
