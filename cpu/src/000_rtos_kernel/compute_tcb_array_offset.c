/* @k10d compute_tcb_array_offset @ 0x1000fe70
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a kernel TCB array based on a task ID and a per-field
 *   stride table.
 * summary:
 *   The function takes a task identifier (param_1) and a field selector (param_2) and
 *   returns an offset calculated as base + id * stride - stride. The base addresses
 *   (DAT_10011d14, etc.) and strides (10, 0xc, 0x1c, etc.) correspond to different fields
 *   within a Task Control Block structure. This is a standard µITRON/REALOS kernel helper
 *   for accessing specific TCB members (like priority, status, or stack pointer) from the
 *   global TCB array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_tcb_array_offset(int param_1,uint32_t param_2)

{
  int iVar1;
  short sVar2;
  
  sVar2 = (short)param_1;
  switch(param_2) {
  case 2:
    iVar1 = DAT_10011d14/*ROM*/ + sVar2 * 10 + -10;
    break;
  case 3:
    iVar1 = DAT_10011d10/*ROM*/ + sVar2 * 0xc + -0xc;
    break;
  case 4:
    iVar1 = DAT_10011d0c/*ROM*/ + sVar2 * 0x1c + -0x1c;
    break;
  case 5:
    iVar1 = DAT_10011d0c/*ROM*/ + sVar2 * 0x1c + -0x18;
    break;
  case 6:
    iVar1 = DAT_10011d08/*ROM*/ + param_1 * 0x10 + -0x10;
    break;
  case 7:
    iVar1 = DAT_10011d04/*ROM*/ + sVar2 * 0xe + -0xe;
    break;
  case 8:
    iVar1 = DAT_10011d00/*ROM*/ + sVar2 * 0x24 + -0x24;
    break;
  case 9:
    iVar1 = DAT_10011d00/*ROM*/ + sVar2 * 0x24 + -0x20;
    break;
  default:
    iVar1 = 0;
    break;
  case 0xd:
    iVar1 = DAT_10011cfc/*ROM*/ + sVar2 * 0x18 + -0x18;
    break;
  case 0xe:
    iVar1 = DAT_10011cf8/*ROM*/ + param_1 * 0x20 + -0x20;
  }
  return iVar1;
}
