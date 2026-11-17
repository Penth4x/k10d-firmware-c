/* @k10d find_min_in_12_uint_array @ 0x000c094e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Scans a 12-element array of uints and returns the smallest value found.
 * summary:
 *   The function takes a pointer to an array of 12 unsigned integers (48 bytes). It
 *   initializes a minimum value from the first element and iterates through the remaining
 *   11 elements in chunks of 5, updating the minimum whenever a smaller value is
 *   encountered. It returns the final minimum value in r4. No callees are invoked, and no
 *   global state is modified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_min_in_12_uint_array(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  iVar3 = 3;
  iVar1 = 4;
  do {
    if (*(uint *)(iVar1 + (int)param_1) < uVar2) {
      uVar2 = *(uint *)(iVar1 + (int)param_1);
    }
    if (*(uint *)(iVar1 + 4 + (int)param_1) < uVar2) {
      uVar2 = *(uint *)(iVar1 + 4 + (int)param_1);
    }
    if (*(uint *)(iVar1 + 8 + (int)param_1) < uVar2) {
      uVar2 = *(uint *)(iVar1 + 8 + (int)param_1);
    }
    if (*(uint *)(iVar1 + 0xc + (int)param_1) < uVar2) {
      uVar2 = *(uint *)(iVar1 + 0xc + (int)param_1);
    }
    if (*(uint *)(iVar1 + 0x10 + (int)param_1) < uVar2) {
      uVar2 = *(uint *)(iVar1 + 0x10 + (int)param_1);
    }
    iVar1 = iVar1 + 0x14;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  return uVar2;
}
