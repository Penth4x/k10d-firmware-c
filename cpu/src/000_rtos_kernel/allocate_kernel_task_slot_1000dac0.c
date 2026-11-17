/* @k10d allocate_kernel_task_slot_1000dac0 @ 0x1000dac0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task creation request and allocates a free slot from the kernel task table.
 * summary:
 *   Checks the task ID and priority fields in param_1 against kernel limits (DAT_10011d4c)
 *   and alignment. Scans the task table at 0x6a001be8 for a slot marked -2 (free). Calls
 *   allocate_kernel_memory_block to initialize the slot and initialize_task_control_block
 *   to finalize the task structure. Returns the slot index or a negative error code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

int allocate_kernel_task_slot_1000dac0(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int caller_r9;
  uintptr_t sp;
  uint uStack_c;
  
  if ((*param_1 & 0xfffd) == 0) {
    if (((((short)param_1[6] < 1) || (DAT_10011d4c/*ROM*/ < (short)param_1[6])) ||
        (uStack_c = *(uint *)(param_1 + 10), (uStack_c & 3) != 0)) ||
       ((*(uint *)(param_1 + 8) < 0x60 || ((*(uint *)(param_1 + 8) & 3) != 0)))) {
      caller_r9 = E_PAR;
    }
    else {
      iVar2 = 1;
      if (0 < DAT_10011d4a/*ROM*/) {
        iVar1 = 0x44;
        do {
          if (*(short *)(iVar1 + 0x6a001be8) == -2) {
            caller_r9 = (int)(short)iVar2;
            break;
          }
          iVar1 = iVar1 + 0x44;
          iVar2 = iVar2 + 1;
        } while (iVar1 <= DAT_10011d4a/*ROM*/ * 0x44);
      }
      if (DAT_10011d4a/*ROM*/ < iVar2) {
        caller_r9 = E_NOID;
      }
      else if ((uStack_c == 0) &&
              (iVar2 = allocate_kernel_memory_block(*(uint *)(param_1 + 8),&uStack_c), iVar2 != 1)) {
        caller_r9 = E_NOMEM;
      }
      else {
        initialize_task_control_block((short)caller_r9,param_1,uStack_c);
        if ((*param_1 & 2) == 0) {
          *(uint8_t *)(caller_r9 * 0x44 + 0x6a001c06) = 0x10;
        }
        else {
          cre_tsk_insert_setup();
        }
      }
    }
  }
  else {
    caller_r9 = E_RSATR;
  }
  return caller_r9;
}
