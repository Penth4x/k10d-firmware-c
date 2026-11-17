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

uint32_t set_status_flag_by_code(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = dispatch_mode_update_request_10507fb0(param_1,param_3);
  if (iVar2 == 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x8c) < 2) {
      iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
    }
    *(uint32_t *)(iVar1 + 0x30) = 0;
  }
  if (param_2 == 0x10008) {
    if (iVar2 != 0) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x40;
    }
  }
  else if (param_2 < 0x10009) {
    if (param_2 == 0x10000) {
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        iVar1 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 1;
      }
    }
    else if (param_2 == 0x10002) {
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        iVar1 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 2;
      }
    }
    else {
      if (param_2 != 0x10003) {
        return 0;
      }
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        iVar1 = 0;
        if (*(int *)(param_1 + 0x8c) < 2) {
          iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
        }
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 4;
      }
    }
  }
  else if (param_2 == 0x1000f) {
    if (iVar2 != 0) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x20;
    }
  }
  else if (param_2 == 0x10036) {
    if (iVar2 != 0) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 0x10;
    }
  }
  else {
    if (param_2 != 0x42000) {
      return 0;
    }
    if (iVar2 != 0) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      iVar1 = 0;
      if (*(int *)(param_1 + 0x8c) < 2) {
        iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
      }
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar1 + 0x30) | 8;
    }
  }
  set_flg_obj((uint32_t *)(param_1 + 0x328));
  return 0;
}
