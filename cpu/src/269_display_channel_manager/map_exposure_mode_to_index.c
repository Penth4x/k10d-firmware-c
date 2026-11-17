/* @k10d map_exposure_mode_to_index @ 0x10507eb2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Maps a raw exposure mode code to an internal index and updates a state structure.
 * summary:
 *   The function switches on the value pointed to by param_2 to determine an internal index
 *   (0-5) and stores it at offset 0x90 in the structure pointed to by param_1. It then
 *   calls set_pointer_in_array_slot multiple times with different offsets from param_2,
 *   likely copying configuration data based on the determined mode. Finally, it calls
 *   check_struct_has_nonzero_bytes on a calculated pointer and returns the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool map_exposure_mode_to_index(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  switch(*param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 5;
    break;
  default:
    goto LAB_10507ef0;
  }
  *(uint32_t *)(param_1 + 0x90) = uVar1;
LAB_10507ef0:
  iVar2 = param_1 + 0x2e4;
  set_pointer_in_array_slot(iVar2,2,param_2 + 1);
  set_pointer_in_array_slot(iVar2,1,param_2 + 0xf);
  set_pointer_in_array_slot(iVar2,0,param_2 + 0x1d);
  if ((*(int *)(param_1 + 0x90) == 2) || (*(int *)(param_1 + 0x90) == 3)) {
    set_pointer_in_array_slot(iVar2,3,param_2 + 0x2b);
  }
  if (*(int *)(param_1 + 0x90) == 4) {
    set_pointer_in_array_slot(iVar2,2,param_2 + 0x1d);
  }
  else if (*(int *)(param_1 + 0x90) == 5) {
    set_pointer_in_array_slot(iVar2,2,param_2 + 0xf);
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x8c) < 2) {
    iVar2 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
  }
  iVar2 = check_struct_has_nonzero_bytes(iVar2 + 0x1c);
  return iVar2 == 0;
}
