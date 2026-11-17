/* @k10d adjust_and_notify_counter @ 0x10367e9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Increments or decrements a clamped counter in a struct and calls three notification
 *   functions with the new value.
 * summary:
 *   The function modifies a 16-bit value at offset 0xa0 of the object pointed to by
 *   param_1. If param_2 is non-zero, it increments the value (wrapping to 0 if it exceeds
 *   99); if param_2 is zero, it decrements the value (clamping to 99 if it drops below 0,
 *   though the logic suggests a specific range check). It also manages a flag at offset
 *   0xa2 based on the counter state. Finally, it calls three functions
 *   (register_menu_item_and_set_flag_1037faf4, register_and_set_two_menu_items,
 *   request_ui_sync_code_4) passing the object pointer (offset 0x18) and the updated
 *   counter/flag values, likely to update a UI element or hardware state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_and_notify_counter(int param_1,int param_2)

{
  ushort uVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 0xa3) == '\0') {
    if (*(char *)(param_1 + 0xa4) != '\0') {
      if (*(char *)(param_1 + 0xa2) == '\0') {
        *(uint8_t *)(param_1 + 0xa2) = 1;
        if (*(short *)(param_1 + 0xa0) == 0) {
          *(uint16_t *)(param_1 + 0xa0) = 1;
        }
      }
      else {
        *(uint8_t *)(param_1 + 0xa2) = 0;
      }
    }
  }
  else {
    if (param_2 == 0) {
      uVar1 = *(short *)(param_1 + 0xa0) - 1;
      *(ushort *)(param_1 + 0xa0) = uVar1;
      if (99 < uVar1) {
        *(uint16_t *)(param_1 + 0xa0) = 99;
      }
    }
    else {
      uVar1 = *(short *)(param_1 + 0xa0) + 1;
      *(ushort *)(param_1 + 0xa0) = uVar1;
      if (99 < uVar1) {
        *(uint16_t *)(param_1 + 0xa0) = 0;
      }
    }
    if (*(short *)(param_1 + 0xa0) == 0) {
      *(uint8_t *)(param_1 + 0xa2) = 0;
    }
  }
  pvVar2 = (void *)(param_1 + 0x18);
  register_menu_item_and_set_flag_1037faf4((int)pvVar2,*(short *)(param_1 + 0xa0));
  register_and_set_two_menu_items((int)pvVar2,(uint)*(byte *)(param_1 + 0xa2));
  request_ui_sync_code_4(pvVar2);
  return;
}
