/* @k10d set_image_processor_param @ 0x104ff424
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Sets a parameter in an image processor object based on a command code and raises a
 *   flag.
 * summary:
 *   This function acts as a setter for an object (likely an image processor driver
 *   instance). It checks param_2 against specific command codes (0xe00001, 0xe00002,
 *   0xe00003, 0xe00004) to determine which field (offset 0x24 or 0x28) to update with
 *   param_3 or zero. After updating the field, it calls set_flg_obj on a flag at offset
 *   0x3c to signal a change. It returns 0 on success or if the command is unrecognized.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_image_processor_param(cls_105d49dc *param_1,int param_2,uint32_t param_3)

{
  if (param_2 == 0xe00001) {
    param_1->field_0x24 = param_3;
  }
  else if (param_2 == 0xe00003) {
    param_1->field_0x28 = param_3;
  }
  else if (param_2 == 0xe00002) {
    param_1->field_0x28 = 0;
  }
  else {
    if (param_2 != 0xe00004) {
      return 0;
    }
    param_1->field_0x28 = param_3;
  }
  set_flg_obj(&param_1->field_0x3c);
  return 0;
}
