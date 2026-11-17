/* @k10d clear_and_set_flag_bit_1047712a @ 0x1047712a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a bit in a 16-bit field at offset 4 and sets the corresponding bit in a field at
 *   offset 6 if the bit is currently set.
 * summary:
 *   The function takes a pointer to a structure and a bit index (param_2). It calls
 *   make_bit_mask_from_index to get a bitmask for the specified bit index. If the bit is
 *   set in the 16-bit value at offset 4 of the structure, it clears that bit in the
 *   offset-4 field and sets the same bit in the 16-bit value at offset 6. It returns 1 if
 *   the operation was performed, 0 otherwise. The specific role of the structure and the
 *   meaning of the two fields are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_and_set_flag_bit_1047712a(void *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint32_t uVar4;
  
  uVar4 = 0;
  if (param_2 != -1) {
    uVar1 = *(ushort *)((int)param_1 + 4);
    bVar3 = (byte)param_2;
    uVar2 = make_bit_mask_from_index(param_1,bVar3);
    if ((uVar1 & uVar2) != 0) {
      uVar2 = make_bit_mask_from_index(param_1,bVar3);
      *(ushort *)((int)param_1 + 4) = *(ushort *)((int)param_1 + 4) & ((ushort)uVar2 ^ 0xffff);
      uVar2 = make_bit_mask_from_index(param_1,bVar3);
      *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) | (ushort)uVar2;
      uVar4 = 1;
    }
  }
  return uVar4;
}
