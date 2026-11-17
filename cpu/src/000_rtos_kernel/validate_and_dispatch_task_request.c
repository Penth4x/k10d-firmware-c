/* @k10d validate_and_dispatch_task_request @ 0x10011860
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task index and request parameters, then dispatches to a handler or
 *   initialization routine.
 * summary:
 *   Checks if param_1 is within the range defined by DAT_10011d4a and validates fields in
 *   the param_2 structure (flags, indices, alignment). If valid, it checks a status word at
 *   an offset from param_1; if -2, it calls allocate_kernel_memory_block and
 *   initialize_task_control_block, or cre_tsk_insert_setup based on a flag bit. Returns
 *   specific error codes (0xffffffee, 0xffffffef, etc.) for various validation failures.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_and_dispatch_task_request(int param_1,ushort *param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint uStack_c;
  
  if ((param_1 < 1) || (DAT_10011d4a/*ROM*/ < param_1)) {
    uVar2 = E_ID;
  }
  else if ((*param_2 & 0xfffd) == 0) {
    if (((((short)param_2[6] < 1) || (DAT_10011d4c/*ROM*/ < (short)param_2[6])) ||
        (uStack_c = *(uint *)(param_2 + 10), (uStack_c & 3) != 0)) ||
       ((*(uint *)(param_2 + 8) < 0x60 || ((*(uint *)(param_2 + 8) & 3) != 0)))) {
      uVar2 = E_PAR;
    }
    else {
      iVar1 = (short)param_1 * 0x44;
      if (*(short *)(iVar1 + 0x6a001be8) == -2) {
        if ((uStack_c == 0) && (iVar3 = allocate_kernel_memory_block(*(uint *)(param_2 + 8),&uStack_c), iVar3 != 1))
        {
          uVar2 = E_NOMEM;
        }
        else {
          initialize_task_control_block((short)param_1,param_2,uStack_c);
          if ((*param_2 & 2) == 0) {
            *(uint8_t *)(iVar1 + 0x6a001c06) = 0x10;
            uVar2 = 0;
          }
          else {
            cre_tsk_insert_setup();
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = E_OBJ;
      }
    }
  }
  else {
    uVar2 = E_RSATR;
  }
  return uVar2;
}
