/* @k10d set_two_flag_bytes @ 0x104b73b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Sets two consecutive bytes at offsets 0x40 and 0x41 of a structure to 1.
 * summary:
 *   The function takes a pointer in param_1 and writes the value 1 to the bytes at offsets
 *   0x40 and 0x41. It has no callees and performs no other operations. The specific meaning
 *   of these flags is unknown without further context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_flag_bytes(int param_1)

{
  *(uint8_t *)(param_1 + 0x40) = 1;
  *(uint8_t *)(param_1 + 0x41) = 1;
  return;
}
