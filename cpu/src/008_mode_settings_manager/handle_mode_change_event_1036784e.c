/* @k10d handle_mode_change_event_1036784e @ 0x1036784e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes a mode change event by updating object state fields at offsets 0xa3-0xa8
 *   based on event type and ID.
 * summary:
 *   The function dispatches on the first word of param_2 (event type). For types 1 and 2,
 *   it sets bytes at offsets 0xa3 or 0xa4 to 1 or 0 depending on whether the event ID is
 *   0x3070008 or 0x307000f. For type 6, it sets byte 0xa5 to 1. For type 4, it validates
 *   the event ID against a set of allowed values (0, 1, 2, 4, 7, 8, 10, 12, 41) and either
 *   updates the 4-byte field at offset 0xa8 or calls helper functions
 *   invoke_callback_at_8000439c and forward_param_to_global_offset, potentially using
 *   global data from 0x105bb5f4 or 0x105bb5f8. The object size is 0xac bytes, consistent
 *   with the writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_mode_change_event_1036784e(cls_105579a8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    if (param_2[1] == 0x3070008) {
      uVar3 = 1;
      iVar1 = 0xa3;
    }
    else {
      if (param_2[1] != 0x307000f) {
        return;
      }
      uVar3 = 1;
      iVar1 = 0xa4;
    }
LAB_1036794e:
    *(uint8_t *)((int)&param_1->field_0x0 + iVar1) = uVar3;
    return;
  }
  if (iVar1 == 2) {
    if (param_2[1] == 0x3070008) {
      uVar3 = 0;
      iVar1 = 0xa3;
    }
    else {
      if (param_2[1] != 0x307000f) {
        return;
      }
      uVar3 = 0;
      iVar1 = 0xa4;
    }
    goto LAB_1036794e;
  }
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      return;
    }
    if (iVar1 != 6) {
      return;
    }
    uVar3 = 1;
    iVar1 = 0xa5;
    goto LAB_1036794e;
  }
  uVar2 = param_2[1];
  uVar4 = _DAT_105bb5f4/*ROM*/;
  if (uVar2 != 7) {
    if (uVar2 < 8) {
      if (((uVar2 != 0) && (uVar2 != 1)) && (uVar2 != 3)) {
        return;
      }
    }
    else if (uVar2 != 10) {
      if (uVar2 == 0xc) {
        if (param_1->field_0xa6 == '\0') {
          return;
        }
        param_1->field_0xa8 = 0xc;
        invoke_callback_at_8000439c();
        return;
      }
      if (uVar2 != 0x29) {
        return;
      }
      if (param_1->field_0xa6 != '\0') {
        param_1->field_0xa8 = 0x29;
        return;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar4 = _DAT_105bb5f8/*ROM*/;
      }
      goto LAB_10367938;
    }
  }
  if (param_1->field_0xa6 != '\0') {
    param_1->field_0xa8 = uVar2;
    return;
  }
LAB_10367938:
  forward_param_to_global_offset(param_1,uVar4);
  return;
}
