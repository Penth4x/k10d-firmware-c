/* @k10d dispatch_mode_change_by_id @ 0x103a2f5e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches two sub-operations on an object based on a mode ID, calling helpers with
 *   derived parameters.
 * summary:
 *   The function checks two flag bytes at offsets 0x4c and 0x42 of the object in param_1.
 *   If the first flag is clear, it calls advance_ring_position_index with a second argument
 *   of 0 or 1 depending on whether param_2 is 0x10 or 0xd/0xf. If the second flag is clear,
 *   it maps param_2 values 0x25-0x28 to two boolean-like integers and calls
 *   clamp_and_update_2d_index with those values and (param_3 >> 1) + 1. The specific camera
 *   subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_by_id(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x4c) == '\0') {
    if (param_2 == 0x10) {
      advance_ring_position_index((int)param_1,0);
    }
    else if ((param_2 == 0xd) || (param_2 == 0xf)) {
      advance_ring_position_index((int)param_1,1);
    }
  }
  if (*(char *)((int)param_1 + 0x42) == '\0') {
    if (param_2 == 0x25) {
      iVar1 = 1;
      iVar2 = 1;
    }
    else if (param_2 == 0x26) {
      iVar1 = 1;
      iVar2 = 0;
    }
    else if (param_2 == 0x27) {
      iVar1 = 0;
      iVar2 = 1;
    }
    else {
      if (param_2 != 0x28) {
        return;
      }
      iVar1 = 0;
      iVar2 = 0;
    }
    clamp_and_update_2d_index((int)param_1,iVar1,iVar2,(param_3 >> 1) + 1);
  }
  return;
}
