/* @k10d check_two_short_pairs_equal @ 0x1037389a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Compares two pairs of 16-bit values from an object and returns 1 if they differ, else
 *   calls a helper.
 * summary:
 *   Reads two shorts from the object at offsets 0x30 and 0x32, and two more from the
 *   pointer stored at offset 0x34 (at +4 and +6). If both pairs are equal, it calls
 *   poll_and_update_state_entry with the object and r5; otherwise it returns 1. The result
 *   of the helper call is returned in the equal case.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_short_pairs_equal(void *param_1)

{
  uint32_t uVar1;
  uint32_t r5_in;
  
  if ((*(short *)(*(int *)((int)param_1 + 0x34) + 4) == *(short *)((int)param_1 + 0x30)) &&
     (*(short *)(*(int *)((int)param_1 + 0x34) + 6) == *(short *)((int)param_1 + 0x32))) {
    uVar1 = poll_and_update_state_entry(param_1,r5_in);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
