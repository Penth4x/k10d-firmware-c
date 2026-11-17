/* @k10d check_object_state_flags_1051ab82 @ 0x1051ab82
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper and returns a specific flag byte based on internal
 *   state conditions.
 * summary:
 *   Calls compute_struct_array_offset with a field from param_1 to obtain a pointer to a
 *   structure. It checks if four specific integer fields (offsets 0, 4, 0xc, 0x18) are non-
 *   zero. If valid, it inspects further fields at offsets 0x1c, 0x20, 0x24, and 0x28 to
 *   potentially set the byte at offset 0x34 to 1. Finally, it returns the value of the byte
 *   at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_object_state_flags_1051ab82(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)compute_struct_array_offset(*(int *)(param_1 + 4),0);
  if ((((*piVar1 != 0) && (piVar1[1] != 0)) && (piVar1[0xc] != 0)) && (piVar1[6] != 0)) {
    if (piVar1[7] == 1) {
      if (piVar1[10] == 1) {
        piVar1[8] = -1;
        *(uint8_t *)(piVar1 + 0xd) = 1;
      }
    }
    else if (((piVar1[7] == 0) && (piVar1[8] == 0)) &&
            ((*(short *)(piVar1 + 9) == 8 && (piVar1[10] == 1)))) {
      *(uint8_t *)(piVar1 + 0xd) = 1;
    }
  }
  return *(uint8_t *)(piVar1 + 0xd);
}
