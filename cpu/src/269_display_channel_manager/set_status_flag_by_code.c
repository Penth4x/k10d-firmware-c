/* @k10d set_status_flag_by_code @ 0x10507458
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Maps a numeric code to a specific bit in a status word within a sub-object array and
 *   sets it.
 * summary:
 *   The function first calls dispatch_mode_update_request_10507fb0 to determine an index or
 *   validity. It then calculates a pointer to a sub-object (stride 0x34) based on a count
 *   at offset 0x8c. Depending on the value of param_2 (e.g., 0x10000, 0x10002, 0x10008,
 *   0x42000), it sets a specific bit (1, 2, 4, 8, 0x10, 0x20, 0x40) in the word at offset
 *   0x30 of that sub-object. Finally, it calls set_flg_obj on a flag object at offset
 *   0x328.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050749a) overlaps instruction at (ram,0x10507498)
    */

uint32_t set_status_flag_by_code(cls_105d51fc *param_1,int param_2,int *param_3)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  int iVar3;
  
  iVar3 = dispatch_mode_update_request_10507fb0((int)(param_1),(int *)(param_3));
  if (iVar3 == 0) {
    puVar1 = (uint32_t *)0x0;
    if (param_1->field_0x8c < 2) {
      puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
    }
    puVar1[0xc] = 0;
  }
  if (param_2 == 0x10008) {
    if (iVar3 != 0) {
      puVar1 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar2 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar1[0xc] = puVar2[0xc] | 0x40;
    }
  }
  else if (param_2 < 0x10009) {
    if (param_2 == 0x10000) {
      if (iVar3 != 0) {
        puVar1 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar2 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar1[0xc] = puVar2[0xc] | 1;
      }
    }
    else if (param_2 == 0x10002) {
      if (iVar3 != 0) {
        puVar1 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar2 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar1[0xc] = puVar2[0xc] | 2;
      }
    }
    else {
      if (param_2 != 0x10003) {
        return 0;
      }
      if (iVar3 != 0) {
        puVar1 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar2 = (uint32_t *)0x0;
        if (param_1->field_0x8c < 2) {
          puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
        }
        puVar1[0xc] = puVar2[0xc] | 4;
      }
    }
  }
  else if (param_2 == 0x1000f) {
    if (iVar3 != 0) {
      puVar1 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar2 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar1[0xc] = puVar2[0xc] | 0x20;
    }
  }
  else if (param_2 == 0x10036) {
    if (iVar3 != 0) {
      puVar1 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar2 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar1[0xc] = puVar2[0xc] | 0x10;
    }
  }
  else {
    if (param_2 != 0x42000) {
      return 0;
    }
    if (iVar3 != 0) {
      puVar1 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar1 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar2 = (uint32_t *)0x0;
      if (param_1->field_0x8c < 2) {
        puVar2 = &param_1->field_0x24 + param_1->field_0x8c * 0xd;
      }
      puVar1[0xc] = puVar2[0xc] | 8;
    }
  }
  set_flg_obj(&param_1->field_0x328, 0x40);
  return 0;
}
