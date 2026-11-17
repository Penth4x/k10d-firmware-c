/* @k10d check_uniform_array_values @ 0x1051dfd6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Verifies that all elements in an array are identical and stores the common value in a
 *   struct field.
 * summary:
 *   The function checks if a field at offset 2 of param_3 equals 3. If so, it iterates
 *   through an array pointed to by param_3, using the count at offset 4, calling
 *   read_u16_from_struct_array to retrieve each element. It compares each element to the
 *   first one; if all match, it stores the value at offset 0x24 of param_2 and returns 1.
 *   If a mismatch is found, it stores 0 and returns 1. If the initial check fails, it
 *   returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_uniform_array_values(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  
  uVar1 = 0;
  if (*(short *)(param_3 + 2) == 3) {
    sVar2 = read_u16_from_struct_array(param_3,0);
    uVar4 = 1;
    if (1 < *(uint *)(param_3 + 4)) {
      do {
        sVar3 = read_u16_from_struct_array(param_3,uVar4);
        if (sVar3 != sVar2) {
          sVar2 = 0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_3 + 4));
    }
    *(short *)(param_2 + 0x24) = sVar2;
    uVar1 = 1;
  }
  return uVar1;
}
