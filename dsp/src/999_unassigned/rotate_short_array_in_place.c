/* @k10d rotate_short_array_in_place @ 0x000d2e3e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Rotates a short array of length DAT_0003cd47 by one position using a circular
 *   difference pass and a reverse copy.
 * summary:
 *   The function takes a pointer to a short array whose length is given by the global
 *   DAT_0003cd47. It first performs a forward pass where each element is replaced by
 *   (element - element[4]) + 0x4000, which is a circular subtraction with wrap-around for a
 *   16-bit value. It then performs a backward pass copying elements to shift the array, and
 *   finally restores the first two original values to complete the rotation. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void rotate_short_array_in_place(short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  sVar1 = *param_1;
  sVar2 = param_1[1];
  iVar4 = DAT_0003cd47 - 4;
  psVar3 = param_1;
  do {
    *psVar3 = (*psVar3 - psVar3[4]) + 0x4000;
    psVar3 = psVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = DAT_0003cd47 - 4;
  do {
    psVar3[1] = psVar3[-1];
    iVar4 = iVar4 + -1;
    psVar3 = psVar3 + -1;
  } while (iVar4 != 0);
  param_1[1] = sVar2;
  *param_1 = sVar1;
  return;
}
