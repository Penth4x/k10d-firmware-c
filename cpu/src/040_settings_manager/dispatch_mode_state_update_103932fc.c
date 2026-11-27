/* @k10d dispatch_mode_state_update_103932fc @ 0x103932fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a state code from read_field_at_offset_0xf4 to a small integer and calls one of
 *   three update functions with param_1+8.
 * summary:
 *   The function calls read_field_at_offset_0xf4 to retrieve a state identifier (values in
 *   the 0x5060014-0x5060036 range). It branches on this value to select a small integer
 *   (0-3) and then invokes either a function at 0x10398bda,
 *   store_value_at_offset_0x28_10398bce, or store_value_at_offset_0x30_10398be6, passing
 *   param_1+8 and the selected integer. The specific meaning of the state codes and the
 *   target functions is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_update_103932fc(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = read_field_at_offset_0xf4((uint32_t)param_1);
  if (uVar1 == 0x5060025) {
    uVar2 = 1;
LAB_103933ca:
    (*(code *)0x10398bda/*ROM*/)(param_1 + 8,uVar2);
    return;
  }
  if (uVar1 < 0x5060026) {
    if (uVar1 == 0x5060018) {
      uVar2 = 2;
    }
    else if (uVar1 < 0x5060019) {
      if (uVar1 == 0x5060014) {
        uVar2 = 0;
      }
      else {
        if (uVar1 != 0x5060016) {
          return;
        }
        uVar2 = 1;
      }
    }
    else {
      if (uVar1 != 0x506001a) {
        if (uVar1 != 0x5060023) {
          return;
        }
        uVar2 = 0;
        goto LAB_103933ca;
      }
      uVar2 = 3;
    }
    store_value_at_offset_0x28_10398bce(param_1 + 8,uVar2);
    return;
  }
  if (uVar1 == 0x5060032) {
    uVar2 = 0;
  }
  else {
    if (uVar1 < 0x5060033) {
      if (uVar1 == 0x5060027) {
        uVar2 = 2;
      }
      else {
        if (uVar1 != 0x5060029) {
          return;
        }
        uVar2 = 3;
      }
      goto LAB_103933ca;
    }
    if (uVar1 == 0x5060034) {
      uVar2 = 1;
    }
    else {
      if (uVar1 != 0x5060036) {
        return;
      }
      uVar2 = 2;
    }
  }
  store_value_at_offset_0x30_10398be6(param_1 + 8,uVar2);
  return;
}
