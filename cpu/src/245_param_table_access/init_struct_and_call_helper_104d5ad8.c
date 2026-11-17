/* @k10d init_struct_and_call_helper_104d5ad8 @ 0x104d5ad8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields at offsets 0x14 and 0x18 of a struct, then calls a helper with the
 *   struct and 0.
 * summary:
 *   The function takes a pointer to a structure, sets the 4-byte field at offset 0x14 to 0
 *   and the 1-byte field at offset 0x18 to 0. It then calls
 *   write_byte_to_four_offsets_104d5b1c with the structure pointer and an integer 0. The
 *   specific role of the structure and the helper function is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_call_helper_104d5ad8(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  *(uint8_t *)((int)param_1 + 0x18) = 0;
  write_byte_to_four_offsets_104d5b1c((int)param_1,0);
  return;
}
