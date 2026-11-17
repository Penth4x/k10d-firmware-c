/* @k10d decode_and_advance_token @ 0x103fe8f0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Decodes a token from a buffer, copies payload fields if valid, and advances the buffer
 *   pointer by one or two bytes.
 * summary:
 *   Calls decode_character_code to decode a value from the buffer pointed to by *param_1,
 *   storing the result in param_1[0xb]. If the result is not 0xffff, it copies four words
 *   from param_1[0xc..0xf] to param_1[7..10], copies a byte from param_1[0x16] to offset
 *   0x2e, and calls copy_sensor_line_buffer. Then calls check_byte_above_0x9f to determine
 *   the advance amount: if it returns 0, the pointer *param_1 is incremented by 2,
 *   otherwise by 1. Returns true if the decoded value was not 0xffff.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool decode_and_advance_token(int *param_1)

{
  short sVar2;
  int iVar1;
  
  sVar2 = decode_character_code(param_1,(byte *)*param_1);
  *(short *)(param_1 + 0xb) = sVar2;
  if (sVar2 != 0xffff) {
    param_1[7] = param_1[0xc];
    param_1[8] = param_1[0xd];
    param_1[9] = param_1[0xe];
    param_1[10] = param_1[0xf];
    *(uint8_t *)((int)param_1 + 0x2e) = *(uint8_t *)(param_1 + 0x16);
    copy_sensor_line_buffer(param_1);
  }
  iVar1 = check_byte_above_0x9f(param_1,(byte *)*param_1);
  if (iVar1 == 0) {
    *param_1 = *param_1 + 2;
  }
  else {
    *param_1 = *param_1 + 1;
  }
  return sVar2 != 0xffff;
}
