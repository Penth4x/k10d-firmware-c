/* @k10d store_event_and_apply_setting @ 0x103ea000
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores an event code in an object and conditionally applies a setting or triggers a
 *   handler based on the code.
 * summary:
 *   Writes param_2 to offset 0x18 of the object. If param_2 matches one of four specific
 *   codes (0x1870012, 0x1870014, 0x1870016, 0x1870018), it stores a corresponding byte from
 *   global memory at offset 0x20 and calls update_two_object_states. If param_2 is
 *   0x1870020 or 0x187001f, it calls setting_set with a value from offset 8 of the object,
 *   0x80, and a byte from global memory. The specific meaning of the event codes and the
 *   setting ID 0x80 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_event_and_apply_setting(int param_1,int param_2)

{
  byte bVar1;
  uint8_t uVar2;
  
  *(int *)(param_1 + 0x18) = param_2;
  uVar2 = uRam105977a4;
  if ((((param_2 == 0x1870012) || (uVar2 = uRam105977a5, param_2 == 0x1870014)) ||
      (uVar2 = uRam105977a6, param_2 == 0x1870016)) || (uVar2 = uRam105977a7, param_2 == 0x1870018))
  {
    *(uint8_t *)(param_1 + 0x20) = uVar2;
    update_two_object_states((int *)__frv_reg_unset(4));
  }
  else {
    bVar1 = bRam105977a8;
    if ((param_2 == 0x1870020) || (bVar1 = bRam105977a9, param_2 == 0x187001f)) {
      setting_set(*(int *)(param_1 + 8),0x80,(uint)bVar1);
    }
  }
  return;
}
