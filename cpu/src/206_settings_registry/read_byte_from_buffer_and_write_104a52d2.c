/* @k10d read_byte_from_buffer_and_write_104a52d2 @ 0x104a52d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a byte from a buffer at a computed offset and writes it to a destination.
 * summary:
 *   The function calls settings_getter with a value from param_1+0x44 and constant 0xa5 to
 *   obtain a pointer. It then reads a byte from that pointer at offset 0x105b6458 and
 *   passes it to write_word_to_dynamic_array along with param_2 and 0. The specific roles
 *   of the callees and the data are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_byte_from_buffer_and_write_104a52d2(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = settings_getter(*(int *)(param_1 + 0x44),0xa5);
  write_word_to_dynamic_array(param_2,0,(ushort)*(byte *)(bVar1 + 0x105b6458/*ROM*/));
  return;
}
