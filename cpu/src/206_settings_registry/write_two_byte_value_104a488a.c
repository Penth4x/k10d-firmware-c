/* @k10d write_two_byte_value_104a488a @ 0x104a488a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Formats a 16-bit value into a 4-byte buffer and writes it to a destination.
 * summary:
 *   The function calls read_three_byte_status to populate a local 4-byte stack buffer
 *   (auStack_c) using param_1. It then calls copy_bytes_to_struct_field, passing param_2,
 *   the buffer, and the length 4, likely to transmit or store the data. The specific roles
 *   of the callees are unknown, but the pattern suggests a data preparation and output
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_byte_value_104a488a(uint32_t param_1,int param_2)

{
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  read_three_byte_status(param_1,auStack_c);
  copy_bytes_to_struct_field(param_2,auStack_c,4);
  return;
}
