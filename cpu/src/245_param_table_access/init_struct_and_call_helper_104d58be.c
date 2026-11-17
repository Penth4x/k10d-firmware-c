/* @k10d init_struct_and_call_helper_104d58be @ 0x104d58be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields at offsets 0x10 and 0x14 of a struct and calls a helper with the
 *   struct and 0.
 * summary:
 *   The function takes a pointer to a structure, sets the 32-bit field at offset 0x10 to 0
 *   and the byte at offset 0x14 to 0. It then calls write_three_bytes_to_struct_104d5900
 *   passing the same pointer and the integer 0. The specific role of the struct and the
 *   helper is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_call_helper_104d58be(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x10) = 0;
  *(uint8_t *)((int)param_1 + 0x14) = 0;
  write_three_bytes_to_struct_104d5900((int)param_1,0);
  return;
}
