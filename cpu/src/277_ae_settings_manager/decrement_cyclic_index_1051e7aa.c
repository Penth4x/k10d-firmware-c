/* @k10d decrement_cyclic_index_1051e7aa @ 0x1051e7aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Decments a byte index at offset 5, wrapping around a modulus stored at offset 3.
 * summary:
 *   The function reads a flag at offset 4 of the structure pointed to by param_1. If the
 *   flag is non-zero, it computes the value at offset 5 modulo the value at offset 3. If
 *   the flag is less than or equal to this modulo result, it decrements the flag by 1 and
 *   stores it back at offset 5. This logic implements a cyclic decrement with a wrap-around
 *   condition based on the modulus.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_cyclic_index_1051e7aa(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 5) % (uint)*(byte *)(param_1 + 3);
    cVar2 = (char)uVar3;
    if (bVar1 <= uVar3) {
      cVar2 = bVar1 - 1;
    }
    *(char *)(param_1 + 5) = cVar2;
  }
  return;
}
