/* @k10d compute_exposure_step_index @ 0x104825b2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Iteratively computes an index and offset within a parameter array based on a value and
 *   step size.
 * summary:
 *   The function performs a fixed-point arithmetic loop to determine a position within a
 *   table or range. It uses the value at param_1+0xc and the step size at param_1+0x1c to
 *   calculate an index (stored at param_1+0x24) and an offset (stored at param_1+0x14). The
 *   loop converges on a stable index value, suggesting a search or quantization operation.
 *   The caller is a virtual method, indicating this is part of a larger object's state
 *   management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_exposure_step_index(int param_1)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  uint8_t uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(uint *)(param_1 + 0xc) / (uint)*(byte *)(param_1 + 0x1c) +
          (uint)(*(uint *)(param_1 + 0xc) % (uint)*(byte *)(param_1 + 0x1c) != 0);
  iVar2 = select_size_by_threshold_104829f6(param_1,iVar7);
  uVar3 = map_size_to_flag(param_1,*(uint32_t *)(param_1 + 0xc));
  uVar4 = compute_16bit_product(param_1,iVar7,iVar2);
  do {
    uVar8 = uVar4;
    iVar7 = compute_offset_from_index(param_1,uVar8);
    iVar5 = round_up_to_multiple(param_1,iVar7,uVar3);
    uVar4 = ((uint)((*(int *)(param_1 + 0xc) - iVar5) - iVar7) / (uint)*(byte *)(param_1 + 0x1c) + 2
            ) * iVar2;
    uVar1 = uVar4 >> 0xc;
    uVar4 = uVar1 + (uVar4 + uVar1 * -0x1000 != 0) & 0xffff;
  } while (uVar8 != uVar4);
  *(uint *)(param_1 + 0x24) = uVar8;
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0xc) - iVar5;
  uVar6 = classify_size_into_category(param_1, __frv_reg_unset(5));
  *(uint8_t *)(param_1 + 0x1d) = uVar6;
  *(short *)(param_1 + 0x28) = (short)iVar2;
  return;
}
