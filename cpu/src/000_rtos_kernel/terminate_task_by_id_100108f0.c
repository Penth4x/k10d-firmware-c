/* @k10d terminate_task_by_id_100108f0 @ 0x100108f0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task ID and calls two kernel routines to terminate the specified task.
 * summary:
 *   The function checks if param_1 is 0, in which case it calls check_kernel_flag_bit5 and
 *   retrieves a task ID from a global structure. If param_1 is non-zero, it validates it
 *   against a range defined by DAT_10011d4c. It then looks up a short value at an offset in
 *   a table starting at 0x6a0036d0. If the value is not -1, it calls ready_list_unlink and
 *   ready_list_insert with that value as an argument. The module context suggests this is a
 *   REALOS kernel service for task management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t terminate_task_by_id_100108f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = check_kernel_flag_bit5();
    if (iVar2 != 0) {
      return E_PAR;
    }
    param_1 = (int)*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c04);
  }
  else if ((param_1 < 1) || (DAT_10011d4c/*ROM*/ < param_1)) {
    return E_PAR;
  }
  sVar1 = *(short *)((param_1 + -1) * 4 + 0x6a0036d0);
  if (sVar1 != -1) {
    ready_list_unlink(sVar1);
    ready_list_insert(sVar1);
  }
  return 0;
}
