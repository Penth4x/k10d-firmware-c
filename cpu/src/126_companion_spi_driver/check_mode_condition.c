/* @k10d check_mode_condition @ 0x10449dc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a specific condition is met for mode 8, based on two internal state
 *   fields.
 * summary:
 *   The function checks if param_2 is 8. If so, it inspects an integer field at offset
 *   0x3c4 of the object pointed to by param_1. If that field is 0, it calls a helper at
 *   0x1044bd30 with a pointer to offset 0x17d; if the helper returns 1, the function
 *   returns 1. If the field is 1, it calls a helper at 0x10447236 with a pointer to offset
 *   0x1a4; if that helper returns 1, the function returns 1. Otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_condition(void *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (param_2 == 8) {
    if (*(int *)((int)param_1 + 0x3c4) == 0) {
      iVar1 = (*(code *)0x1044bd30/*ROM*/)((int)param_1 + 0x17d);
      if (iVar1 == 1) {
        uVar2 = 1;
      }
    }
    else if ((*(int *)((int)param_1 + 0x3c4) == 1) &&
            (iVar1 = (*(code *)0x10447236/*ROM*/)((int)param_1 + 0x1a4), iVar1 == 1)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
