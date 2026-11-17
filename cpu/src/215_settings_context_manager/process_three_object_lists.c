/* @k10d process_three_object_lists @ 0x104b4010
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through three separate object lists, invoking virtual methods on each element
 *   and calling a final handler for the last item.
 * summary:
 *   The function takes a structure containing three counts (at offsets 0, 1, 2) and three
 *   pointers to arrays of object pointers (at offsets 0x10, 0x14, 0x18). For each non-empty
 *   list, it iterates through all but the last element, calling a virtual method (slot at
 *   offset 0x2c) on each object. It then calls a specific function pointer (0x104b29ce,
 *   0x104b2b98, or 0x104b2f96) with the list's base pointer (offsets 4, 8, 0xc) and the
 *   last element. Returns 1 if all lists were empty or processed successfully, 0 if a
 *   handler returned non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_three_object_lists(byte *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 4) == 0) || (*param_1 == 0)) {
LAB_104b4078:
    if ((*(int *)(param_1 + 8) != 0) && (param_1[1] != 0)) {
      uVar3 = 0;
      if (1 < param_1[1]) {
        do {
          piVar1 = *(int **)((uVar3 + 1) * 4 + *(int *)(param_1 + 0x14));
          iVar4 = *piVar1;
          (**(code **)(iVar4 + 0x2c))
                    ((int)piVar1 + (int)*(short *)(iVar4 + 0x28),
                     *(uint32_t *)(uVar3 * 4 + *(int *)(param_1 + 0x14)));
          uVar3 = uVar3 + 1 & 0xff;
        } while ((int)uVar3 < (int)(param_1[1] - 1));
      }
      iVar4 = (*(code *)0x104b2b98/*ROM*/)
                        (*(uint32_t *)(param_1 + 8),
                         *(uint32_t *)(*(int *)(param_1 + 0x14) + uVar3 * 4));
      if (iVar4 == 0) goto LAB_104b4144;
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (param_1[2] != 0)) {
      uVar3 = 0;
      if (1 < param_1[2]) {
        do {
          piVar1 = *(int **)((uVar3 + 1) * 4 + *(int *)(param_1 + 0x18));
          iVar4 = *piVar1;
          (**(code **)(iVar4 + 0x2c))
                    ((int)piVar1 + (int)*(short *)(iVar4 + 0x28),
                     *(uint32_t *)(uVar3 * 4 + *(int *)(param_1 + 0x18)));
          uVar3 = uVar3 + 1 & 0xff;
        } while ((int)uVar3 < (int)(param_1[2] - 1));
      }
      iVar4 = (*(code *)0x104b2f96/*ROM*/)
                        (*(uint32_t *)(param_1 + 0xc),
                         *(uint32_t *)(*(int *)(param_1 + 0x18) + uVar3 * 4));
      if (iVar4 == 0) goto LAB_104b4144;
    }
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    if (1 < *param_1) {
      do {
        piVar1 = *(int **)((uVar3 + 1) * 4 + *(int *)(param_1 + 0x10));
        iVar4 = *piVar1;
        (**(code **)(iVar4 + 0x2c))
                  ((int)piVar1 + (int)*(short *)(iVar4 + 0x28),
                   *(uint32_t *)(uVar3 * 4 + *(int *)(param_1 + 0x10)));
        uVar3 = uVar3 + 1 & 0xff;
      } while ((int)uVar3 < (int)(*param_1 - 1));
    }
    iVar4 = (*(code *)0x104b29ce/*ROM*/)
                      (*(uint32_t *)(param_1 + 4),
                       *(uint32_t *)(*(int *)(param_1 + 0x10) + uVar3 * 4));
    if (iVar4 != 0) goto LAB_104b4078;
LAB_104b4144:
    uVar2 = 0;
  }
  return uVar2;
}
