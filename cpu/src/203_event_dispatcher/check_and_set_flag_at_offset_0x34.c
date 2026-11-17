/* @k10d check_and_set_flag_at_offset_0x34 @ 0x10499d56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Retrieves a struct via a helper, validates several fields, and sets/returns a flag at
 *   offset 0x34.
 * summary:
 *   Calls compute_struct_array_offset with a value from param_1+4 and the constant 3 to
 *   obtain a pointer to a data structure. It checks if fields at offsets 0x0, 0x4, 0x30,
 *   0x18, 0x1c, 0x20, and 0x28 meet specific non-zero or value conditions (e.g., field at
 *   0x20 equals 3, field at 0x28 equals 1). If all conditions are met, it sets the byte at
 *   offset 0x34 to 1. Finally, it returns the current value of the byte at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_and_set_flag_at_offset_0x34(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)compute_struct_array_offset(*(int *)(param_1 + 4),3);
  if ((((*piVar1 != 0) && (piVar1[1] != 0)) && (piVar1[0xc] != 0)) &&
     (((piVar1[6] != 0 && (piVar1[7] != -1)) && ((piVar1[8] == 3 && (piVar1[10] == 1)))))) {
    *(uint8_t *)(piVar1 + 0xd) = 1;
  }
  return *(uint8_t *)(piVar1 + 0xd);
}
