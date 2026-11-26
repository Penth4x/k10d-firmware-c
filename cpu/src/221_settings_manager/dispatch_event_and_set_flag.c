/* @k10d dispatch_event_and_set_flag @ 0x104b7a4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates an event code against a whitelist and either sets a flag or calls a helper on
 *   the object.
 * summary:
 *   The function checks param_2 against a set of specific hex values (0x1040003-0x1040013,
 *   0x1070001-0x10a0001). If the code matches a subset (0x104000e, 0x1040011-0x1040013), it
 *   calls invoke_listener_slot_two on the object at offset 0x2c. For other valid codes, it
 *   calls set_flg_obj on the object at offset 0x24. It returns 0 in all cases.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_and_set_flag(cls_105b9274 *param_1,int param_2)

{
  if (param_2 != 0x104000d) {
    if (param_2 < 0x104000e) {
      if (param_2 != 0x1040008) {
        if (param_2 < 0x1040009) {
          if (((param_2 != 0x1040003) && (param_2 != 0x1040005)) && (param_2 != 0x1040006)) {
            return 0;
          }
        }
        else if (((param_2 != 0x1040009) && (param_2 != 0x104000a)) && (param_2 != 0x104000b)) {
          return 0;
        }
      }
    }
    else {
      if (param_2 == 0x1040013) {
code_r0x104b7b0c:
        invoke_listener_slot_two((int *)&param_1->field_0x2c);
        return 0;
      }
      if (param_2 < 0x1040014) {
        if (param_2 != 0x104000e) {
          if ((param_2 != 0x1040011) && (param_2 != 0x1040012)) {
            return 0;
          }
          goto code_r0x104b7b0c;
        }
      }
      else if ((((param_2 != 0x1070001) && (param_2 != 0x1080001)) && (param_2 != 0x1090001)) &&
              (param_2 != 0x10a0001)) {
        return 0;
      }
    }
  }
  set_flg_obj(&param_1->field_0x24, 0x1);
  return 0;
}
