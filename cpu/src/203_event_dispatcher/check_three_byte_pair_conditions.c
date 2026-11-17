/* @k10d check_three_byte_pair_conditions @ 0x104993e2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads a 12-byte buffer via a virtual call and validates three specific byte pairs
 *   against constants.
 * summary:
 *   The function invokes a virtual method at offset 0x24 on an object pointed to by param_1
 *   to fill a 12-byte stack buffer. It then checks if the first two bytes are 0xff and
 *   0xd8, the next two are 0xff and 0xe1, and the following two are 0x00. It also calls an
 *   unknown function compare_byte_arrays with a pointer to 0x105b5abe. Returns 1 if all
 *   conditions are met and the callee returns 0, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_three_byte_pair_conditions(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  char cStack_14;
  char cStack_13;
  char cStack_12;
  char cStack_11;
  char cStack_10;
  char cStack_f;
  uint8_t auStack_e [6];
  
  uVar5 = 0;
  uVar4 = *(uint32_t *)**(uint32_t **)(param_1 + 4);
  iVar6 = **(int **)(param_1 + 8);
  (**(code **)(iVar6 + 0x34))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar6 + 0x30),uVar4,0,0)
  ;
  iVar6 = **(int **)(param_1 + 8);
  iVar6 = (**(code **)(iVar6 + 0x24))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar6 + 0x20),uVar4,&cStack_14,
                     0xc);
  if (iVar6 != 0) {
    bVar1 = true;
    bVar2 = true;
    bVar3 = true;
    if ((cStack_14 != -1) || (cStack_13 != -0x28)) {
      bVar1 = false;
    }
    if ((cStack_12 != -1) || (cStack_11 != -0x1f)) {
      bVar2 = false;
    }
    if ((cStack_10 == '\0') && (cStack_f == '\0')) {
      bVar3 = false;
    }
    iVar6 = compare_byte_arrays(auStack_e,(void *)0x105b5abe/*ROM*/,6);
    if ((((!bVar1) || (!bVar2)) || (!bVar3)) || (uVar5 = 1, iVar6 != 0)) {
      uVar5 = 0;
    }
  }
  return uVar5;
}
