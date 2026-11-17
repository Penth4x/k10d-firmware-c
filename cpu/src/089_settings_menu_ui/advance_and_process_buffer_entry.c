/* @k10d advance_and_process_buffer_entry @ 0x103fe958
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Reads a value from the object's first pointer, stores it in a status field, and
 *   advances the pointer if the value is valid.
 * summary:
 *   Calls decode_character_code with the object and the value pointed to by its first
 *   field. If the result is not 0xffff, it clears a byte at offset 0x2e, copies four
 *   integers from offsets 0x40-0x4c to 0x1c-0x28, and calls copy_sensor_line_buffer.
 *   Finally, it increments the first field and returns whether the value was valid.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool advance_and_process_buffer_entry(int *param_1)

{
  short sVar1;
  
  sVar1 = decode_character_code(param_1,(byte *)*param_1);
  *(short *)(param_1 + 0xb) = sVar1;
  if (sVar1 != 0xffff) {
    *(uint8_t *)((int)param_1 + 0x2e) = 0;
    param_1[7] = param_1[0x10];
    param_1[8] = param_1[0x11];
    param_1[9] = param_1[0x12];
    param_1[10] = param_1[0x13];
    copy_sensor_line_buffer(param_1);
  }
  *param_1 = *param_1 + 1;
  return sVar1 != 0xffff;
}
