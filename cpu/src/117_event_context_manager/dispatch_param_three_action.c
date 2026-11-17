/* @k10d dispatch_param_three_action @ 0x10432856
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an action based on param_3, calling different helpers with a derived mode
 *   value.
 * summary:
 *   The function branches on param_3. If it is 3, it calls init_and_set_value_10434ee8. If
 *   it is 5, it sets a local mode variable to 3. Otherwise, it calls
 *   check_setting_0x97_active to determine a mode (1 or 2). It then calls
 *   send_message_with_optional_payload with the derived mode and finally calls
 *   write_struct_field_with_optional_value. It always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_three_action(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if (param_3 == 3) {
    init_and_set_value_10434ee8(*(uint32_t *)(param_1 + 0x30),param_2,1);
  }
  else {
    if (param_3 == 5) {
      uVar3 = *(uint32_t *)(param_1 + 0x30);
      iVar2 = 3;
    }
    else {
      uVar3 = *(uint32_t *)(param_1 + 0x30);
      iVar1 = check_setting_0x97_active(uVar3);
      iVar2 = 2;
      if (iVar1 == 0) {
        iVar2 = 1;
      }
    }
    send_message_with_optional_payload(uVar3,param_2,iVar2);
  }
  write_struct_field_with_optional_value(*(uint32_t *)(param_1 + 0x30),param_2,1);
  return 1;
}
