/* @k10d decrement_cyclic_index_1051eb92 @ 0x1051eb92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Decments a byte index at offset 5, wrapping around a modulus stored at offset 3.
 * summary:
 *   The function reads a flag at param_1+4. If non-zero, it computes the value at param_1+5
 *   modulo the value at param_1+3. It then decrements the result by 1 if the flag is less
 *   than or equal to the modulo result, effectively performing a cyclic decrement with
 *   wrap-around logic. The updated value is written back to param_1+5. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_cyclic_index_1051eb92(int param_1)

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
