/* @k10d init_two_pointers_via_helper @ 0x104e0958
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Zeros two struct fields, calls a helper to populate them, and stores a flag in globals
 *   if non-zero.
 * summary:
 *   The function writes zero to offsets 0x1c and 0x20 of the object pointed to by param_1.
 *   It then calls lookup_table_entry_by_index_104e31de with the value at offset 0xc, the
 *   constant 0x1008, and the addresses of the two zeroed fields. If the helper leaves
 *   either field non-zero, the function stores param_2 into the corresponding global
 *   variable (DAT_8001090c or uRam80010930).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_pointers_via_helper(void *param_1,uint8_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x1c) = 0;
  *(uint32_t *)((int)param_1 + 0x20) = 0;
  lookup_table_entry_by_index_104e31de(*(uint32_t *)((int)param_1 + 0xc),0x1008,(void *)((int)param_1 + 0x1c),(void *)((int)param_1 + 0x20));
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    DAT_8001090c/*SDRAM*/ = param_2;
  }
  if (*(int *)((int)param_1 + 0x20) != 0) {
    uRam80010930 = param_2;
  }
  return;
}
