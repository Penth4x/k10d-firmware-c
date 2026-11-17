/* @k10d init_struct_and_call_helper_104d52b0 @ 0x104d52b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Zeroes two fields at offsets 0x14 and 0x18 of the object, then calls a helper with the
 *   object and 0.
 * summary:
 *   The function takes a pointer to a structure, clears a 4-byte field at offset 0x14 and a
 *   1-byte field at offset 0x18, and then invokes write_byte_to_four_offsets_104d52f4 with
 *   the object pointer and an integer argument of 0. This pattern is typical of an
 *   initialization or reset routine for a specific data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_and_call_helper_104d52b0(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  *(uint8_t *)((int)param_1 + 0x18) = 0;
  write_byte_to_four_offsets_104d52f4((int)param_1,0);
  return;
}
