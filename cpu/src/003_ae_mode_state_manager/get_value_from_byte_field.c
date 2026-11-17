/* @k10d get_value_from_byte_field @ 0x10364084
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Returns a small integer (4, 9, or 16) based on the value of a byte at offset 0x6c in
 *   the input structure.
 * summary:
 *   The function reads a single byte from offset 0x6c of the object pointed to by param_1.
 *   It maps the byte value 0x00 to 9, 0x01 to 4, and 0x02 to 16, defaulting to 9 for any
 *   other value. No other memory locations are accessed and no external functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_from_byte_field(int param_1)

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
