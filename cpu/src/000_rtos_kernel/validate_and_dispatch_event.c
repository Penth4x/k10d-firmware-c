/* @k10d validate_and_dispatch_event @ 0x1000e3d8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates an event descriptor and dispatches it if the target slot is in a ready state.
 * summary:
 *   Checks that param_1 is a valid index within the range defined by DAT_10011d48. It
 *   verifies that the event descriptor at param_2 has a zero type field and valid range
 *   parameters. If the corresponding slot in the array at DAT_10011d14 is marked as -2
 *   (likely 'empty' or 'ready'), it calls write_task_control_block_entry to process the
 *   event. Returns 0 on success or specific error codes (0xffffffee, 0xffffffd7,
 *   0xffffffef, 0xfffffff5) on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_and_dispatch_event(int param_1,ushort *param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  if ((param_1 < 1) || (DAT_10011d48/*ROM*/ < param_1)) {
    uVar2 = E_ID;
  }
  else if ((*param_2 & 0xfffe) == 0) {
    if ((((*(uint *)(param_2 + 2) < 0x10000) && (uVar1 = *(uint *)(param_2 + 4), uVar1 != 0)) &&
        (uVar1 < 0x10000)) && (*(uint *)(param_2 + 2) <= uVar1)) {
      if (*(short *)((short)param_1 * 10 + DAT_10011d14/*ROM*/ + -10) == -2) {
        write_task_control_block_entry((short)param_1,param_2);
        uVar2 = 0;
      }
      else {
        uVar2 = E_OBJ;
      }
    }
    else {
      uVar2 = E_PAR;
    }
  }
  else {
    uVar2 = E_RSATR;
  }
  return uVar2;
}
