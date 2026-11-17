/* @k10d subtract_timeout_from_queue @ 0x1000fd20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Subtracts a timeout value from the first entry of a linked timeout queue, splitting the
 *   entry if the timeout exceeds the head value.
 * summary:
 *   Walks a singly-linked list of timeout entries (stride 0x44) starting at DAT_6a0036c4.
 *   Each entry stores a timeout value at offset 0x1c and next/prev pointers at 0x1e/0x1c.
 *   If param_1 is less than the head timeout, it decrements the head and inserts a new
 *   entry for the remainder. If param_1 exceeds the head, it removes the head and continues
 *   with the difference. Called by kernel_twai_sem for timeout handling.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void subtract_timeout_from_queue(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = -1;
  sVar2 = _DAT_6a0036c4;
  do {
    iVar3 = (int)sVar2;
    if (iVar3 == -1) {
LAB_1000fd6a:
      if (iVar3 == -1) {
        _DAT_6a0036c6 = _DAT_6a003758;
      }
      else {
        *(short *)(iVar3 * 0x44 + 0x6a001bee) = _DAT_6a003758;
      }
      if (iVar5 == -1) {
        _DAT_6a0036c4 = _DAT_6a003758;
      }
      else {
        *(short *)(iVar5 * 0x44 + 0x6a001bec) = _DAT_6a003758;
      }
      sVar4 = _DAT_6a003758;
      iVar3 = (int)_DAT_6a003758;
      *(short *)(_DAT_6a003758 * 0x44 + 0x6a001bec) = sVar2;
      *(short *)(iVar3 * 0x44 + 0x6a001bee) = (short)iVar5;
      *(int *)(sVar4 * 0x44 + 0x6a001c1c) = param_1;
      return;
    }
    iVar1 = iVar3 * 0x44;
    iVar6 = *(int *)(iVar1 + 0x6a001c1c);
    if (param_1 < iVar6) {
      iVar5 = (int)*(short *)(iVar1 + 0x6a001bee);
      *(int *)(iVar1 + 0x6a001c1c) = iVar6 - param_1;
      goto LAB_1000fd6a;
    }
    sVar2 = *(short *)(iVar1 + 0x6a001bec);
    param_1 = param_1 - iVar6;
    iVar5 = iVar3;
  } while( true );
}
