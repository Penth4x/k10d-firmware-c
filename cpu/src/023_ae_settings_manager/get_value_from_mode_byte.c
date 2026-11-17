/* @k10d get_value_from_mode_byte @ 0x1036d1a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a small integer (4, 9, or 16) based on the value of a byte at offset 0x6c in
 *   the input structure.
 * summary:
 *   The function reads a single byte from param_1 + 0x6c. If the byte is 0x00 or 0x01, it
 *   returns 9 or 4 respectively. If the byte is 0x02, it returns 16 (0x10). For any other
 *   value, it defaults to returning 9. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_from_mode_byte(int param_1)

{
  char cVar1;
  uint32_t uVar2;
  
  cVar1 = *(char *)(param_1 + 0x6c);
  uVar2 = 9;
  if (cVar1 == '\0') {
    uVar2 = 9;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 4;
  }
  else if (cVar1 == '\x02') {
    uVar2 = 0x10;
  }
  return uVar2;
}
