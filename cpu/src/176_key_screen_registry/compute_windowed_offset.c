/* @k10d compute_windowed_offset @ 0x10482720
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Calculates a bounded offset and range within a circular buffer or window structure.
 * summary:
 *   The function takes a structure pointer, reads a size/length field at offset 0xc and a
 *   divisor at 0x1c. It calls helper functions to determine a base index and a step size.
 *   It then iterates, adjusting an index variable (uVar5) downwards until it matches a
 *   calculated limit, effectively finding a position within a window defined by the
 *   structure's fields. Finally, it stores the calculated offset, base, and range back into
 *   the structure at offsets 0x14, 0x18, and 0x24.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_windowed_offset(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(uint *)(param_1 + 0xc) / (uint)*(byte *)(param_1 + 0x1c) +
          (uint)(*(uint *)(param_1 + 0xc) % (uint)*(byte *)(param_1 + 0x1c) != 0);
  iVar3 = select_size_by_threshold_104829f6(param_1,iVar8);
  iVar4 = map_size_to_flag(param_1,*(uint32_t *)(param_1 + 0xc));
  uVar5 = compute_16bit_product(param_1,iVar8,iVar3);
  while( true ) {
    uVar6 = compute_indexed_offset(param_1,iVar4,uVar5);
    if ((int)uVar6 < 9) {
      uVar6 = uVar6 + iVar4 & 0xffff;
    }
    uVar7 = compute_linear_index(param_1,uVar6,uVar5);
    while (uVar2 = (((*(int *)(param_1 + 0xc) - iVar4) - uVar7) / (uint)*(byte *)(param_1 + 0x1c) +
                   2) * iVar3, uVar1 = uVar2 >> 0xc,
          uVar2 = uVar1 + (uVar2 + uVar1 * -0x1000 != 0) & 0xffff, (int)uVar5 < (int)uVar2) {
      uVar7 = uVar7 + iVar4 & 0xffff;
      uVar6 = uVar6 + iVar4 & 0xffff;
    }
    if (uVar5 == uVar2) break;
    uVar5 = uVar5 - 1 & 0xffff;
  }
  *(uint *)(param_1 + 0x24) = uVar5;
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0xc) - iVar4;
  *(uint8_t *)(param_1 + 0x1d) = 0xb;
  *(short *)(param_1 + 0x28) = (short)iVar3;
  *(short *)(param_1 + 0x1e) = (short)uVar6;
  return;
}
