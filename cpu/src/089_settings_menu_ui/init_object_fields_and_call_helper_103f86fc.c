/* @k10d init_object_fields_and_call_helper_103f86fc @ 0x103f86fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes initial values to several fields of a 0x38-byte object and calls a helper with
 *   the object and zero.
 * summary:
 *   Sets the 16-bit field at offset 0x06 to param_2, clears the byte at offset 0x23, sets
 *   bytes at offsets 0x22 and 0x24 to 0xff, then calls check_mode_transition_validity with
 *   the object pointer and 0. The function is virtual slot 6 of cls_10597d1c. The role of
 *   check_mode_transition_validity is unknown, so the broader subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_fields_and_call_helper_103f86fc(uint32_t *param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 3) = param_2;
  *(uint8_t *)((int)param_1 + 0x23) = 0;
  *(uint8_t *)((int)param_1 + 0x22) = 0xff;
  *(uint8_t *)(param_1 + 9) = 0xff;
  check_mode_transition_validity(param_1,0);
  return;
}
