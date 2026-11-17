/* @k10d advance_ring_position_index @ 0x103a2fda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Computes the next index in a circular buffer based on current position and direction,
 *   then updates the pointer and calls a callback.
 * summary:
 *   The function reads a current index from offset 0x42 of the object in param_1 and
 *   compares it against boundary values stored at offsets 0x48, 0x4a, and 0x40 (via the
 *   array base at 0x50). Depending on whether the current index is at the start, end, or
 *   middle, and the direction indicated by param_2, it calculates a new index by adding or
 *   subtracting a step size stored at offset 0x46. It then reads a byte value from an array
 *   at offset 0xb4 using the new index, stores this new index back to offset 0x42, and
 *   calls update_three_settings_by_mode with a pointer from offset 0x28, the new value, and
 *   a flag from offset 0x41. This pattern is characteristic of a circular buffer or ring
 *   buffer iterator with a callback on update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void advance_ring_position_index(int param_1,int param_2)

{
  uint8_t uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(param_1 + 0x50);
  uVar2 = (uint)puVar4[*(byte *)(param_1 + 0x42)];
  uVar3 = (uint)*(ushort *)(param_1 + 0x48);
  if (uVar2 == uVar3) {
    if (param_2 == 0) {
      uVar2 = uVar2 - *(ushort *)(param_1 + 0x46) & 0xffff;
    }
    else if (*(char *)(param_1 + 0x4d) == '\0') {
      uVar2 = (uint)*puVar4;
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0x4a);
    }
  }
  else if (uVar2 == *(ushort *)(param_1 + 0x4a)) {
    if (param_2 == 0) {
      uVar2 = uVar3;
      if (*(char *)(param_1 + 0x4d) == '\0') {
        uVar2 = (uint)*puVar4;
      }
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x46) + uVar2 & 0xffff;
    }
  }
  else if (uVar2 == *puVar4) {
    if ((*(char *)(param_1 + 0x4c) == '\0') &&
       (uVar2 = (uint)*(ushort *)(param_1 + 0x4a), param_2 == 0)) {
      uVar2 = uVar3;
    }
  }
  else if (param_2 == 0) {
    uVar2 = uVar2 - *(ushort *)(param_1 + 0x46) & 0xffff;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x46) + uVar2 & 0xffff;
  }
  uVar1 = *(uint8_t *)(param_1 + 0xb4 + uVar2);
  *(uint8_t *)(param_1 + 0x42) = uVar1;
  update_three_settings_by_mode(*(uint32_t *)(param_1 + 0x28),uVar1,*(uint8_t *)(param_1 + 0x41));
  return;
}
