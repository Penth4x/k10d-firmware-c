/* @k10d validate_and_store_task_param @ 0x1000e2b0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Validates a task index and parameter flags, then stores a value into a task control
 *   block field.
 * summary:
 *   Checks that param_1 is within the range defined by DAT_10011d42 and that the low bits
 *   of *param_2 are zero. If valid, it accesses an entry in an array at DAT_10011d08
 *   (stride 0x10) and checks a status field at offset -0x10 for the value -2. If the status
 *   is -2 and bit 1 of *param_2 is set, it stores param_2[1] into the field at offset -0x10
 *   after checking it is >= 1. Finally, it calls initialize_timeout_queue_node_1000f778
 *   with the original arguments. Returns specific error codes (0xffffffee, 0xffffffef,
 *   0xffffffd7, 0xfffffff5) for various validation failures.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t validate_and_store_task_param(int param_1,ushort *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 < 1) || (DAT_10011d42/*ROM*/ < param_1)) {
    uVar1 = E_ID;
  }
  else if ((*param_2 & 0xfffc) == 0) {
    iVar2 = DAT_10011d08/*ROM*/ + param_1 * 0x10;
    if (*(short *)(iVar2 + -0x10) == -2) {
      if ((*param_2 & 2) != 0) {
        if ((short)param_2[1] < 1) {
          return E_PAR;
        }
        *(ushort *)(iVar2 + -10) = param_2[1];
      }
      initialize_timeout_queue_node_1000f778(param_1,param_2);
      uVar1 = 0;
    }
    else {
      uVar1 = E_OBJ;
    }
  }
  else {
    uVar1 = E_RSATR;
  }
  return uVar1;
}
