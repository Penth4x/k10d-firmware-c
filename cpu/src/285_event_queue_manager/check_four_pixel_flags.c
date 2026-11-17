/* @k10d check_four_pixel_flags @ 0x1052a06c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if four 16-bit values at computed offsets all have bits 13-15 set.
 * summary:
 *   The function takes a pointer to a structure and checks four 32-bit fields at offsets
 *   0x40-0x4c. If all are less than 0x2b01, it uses them as indices into four arrays
 *   pointed to by fields at 0x30-0x3c. It then checks if the upper three bits (0xe000) of
 *   the 16-bit value at each computed index are set. Returns 1 if all four checks pass, 0
 *   otherwise. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_four_pixel_flags(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((((*(uint *)(param_1 + 0x40) < 0x2b01) && (*(uint *)(param_1 + 0x44) < 0x2b01)) &&
      (*(uint *)(param_1 + 0x48) < 0x2b01)) && (*(uint *)(param_1 + 0x4c) < 0x2b01)) {
    if ((((*(ushort *)(*(int *)(param_1 + 0x30) + (*(uint *)(param_1 + 0x40) & 0xfffffffe) + -2) &
          0xe000) == 0xe000) &&
        ((*(ushort *)(*(int *)(param_1 + 0x34) + (*(uint *)(param_1 + 0x44) & 0xfffffffe) + -2) &
         0xe000) == 0xe000)) &&
       (((*(ushort *)(*(int *)(param_1 + 0x38) + (*(uint *)(param_1 + 0x48) & 0xfffffffe) + -2) &
         0xe000) == 0xe000 &&
        ((*(ushort *)(*(int *)(param_1 + 0x3c) + (*(uint *)(param_1 + 0x4c) & 0xfffffffe) + -2) &
         0xe000) == 0xe000)))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
