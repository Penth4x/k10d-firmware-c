/* @k10d parse_three_digit_numeric_fields @ 0x10479470
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two numeric values from ASCII digit fields in a buffer using a lookup table
 *   for digit validation.
 * summary:
 *   The function reads bytes at offsets 0x12-0x14 and 0x1f-0x22 from the buffer pointed to
 *   by param_2. It uses the table at DAT_106220f1 to verify each byte is a valid ASCII
 *   digit (bit 0x20 set) before converting them to integers. The first value is a 3-digit
 *   number stored in *param_3, and the second is a 4-digit number stored in *param_4. It
 *   returns 1 if both values are non-zero, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_three_digit_numeric_fields(uint32_t param_1,int param_2,short *param_3,short *param_4)

{
  uint32_t uVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  if (((((&DAT_106220f1)[*(byte *)(param_2 + 0x12)] & 0x20) != 0) &&
      (((&DAT_106220f1)[*(byte *)(param_2 + 0x13)] & 0x20) != 0)) &&
     (((&DAT_106220f1)[*(byte *)(param_2 + 0x14)] & 0x20) != 0)) {
    *param_3 = (*(byte *)(param_2 + 0x12) - 0x30) * 100 + (*(byte *)(param_2 + 0x13) - 0x30) * 10 +
               (*(byte *)(param_2 + 0x14) - 0x30);
  }
  if (((((&DAT_106220f1)[*(byte *)(param_2 + 0x1f)] & 0x20) != 0) &&
      (((&DAT_106220f1)[*(byte *)(param_2 + 0x20)] & 0x20) != 0)) &&
     ((((&DAT_106220f1)[*(byte *)(param_2 + 0x21)] & 0x20) != 0 &&
      (((&DAT_106220f1)[*(byte *)(param_2 + 0x22)] & 0x20) != 0)))) {
    *param_4 = (*(byte *)(param_2 + 0x1f) - 0x30) * 1000 + (*(byte *)(param_2 + 0x20) - 0x30) * 100
               + (*(byte *)(param_2 + 0x21) - 0x30) * 10 + (*(byte *)(param_2 + 0x22) - 0x30);
  }
  uVar1 = 0;
  if ((*param_3 != 0) && (*param_4 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
