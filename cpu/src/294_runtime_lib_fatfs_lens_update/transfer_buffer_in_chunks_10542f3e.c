/* @k10d transfer_buffer_in_chunks_10542f3e @ 0x10542f3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies a buffer in chunks via helper calls, tracking offset and remaining size.
 * summary:
 *   Iterates over a data buffer, calling compute_lens_fw_block_offset_10542e98 and
 *   compute_lens_fw_offset to move data in blocks. It updates an offset pointer and
 *   remaining count, and returns error codes -0x1f5 or -0x390 if size checks fail. The
 *   function manages a state structure with progress information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10543050) overlaps instruction at (ram,0x1054304e)
    */

int transfer_buffer_in_chunks_10542f3e(uint32_t param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_r4;
  int extraout_r4_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint *puVar7;
  int in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  uint8_t auStack_24 [8];
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  puVar7 = (uint *)auStack_24;
  iStack_18 = in_stack_00000014[2];
  iVar5 = 0;
  uVar4 = in_stack_00000014[1];
  iVar6 = *in_stack_00000014;
  uStack_14 = *(uint *)(in_stack_00000010 + 0x10);
  uStack_1c = unsigned_divide(iStack_18 + uVar4,uStack_14);
  uVar2 = compute_modulo_10544c28(iStack_18 + uVar4,uStack_14);
  if (uVar2 != 0) {
    uStack_1c = uStack_1c + 1;
  }
  if ((param_2[1] == 0) || (param_2[2] == 0)) {
    iVar5 = dispatch_lens_fw_update(in_stack_00000010,uStack_1c,param_2);
    if (iVar5 < 0) goto code_r0x105431bc;
  }
  else if (uStack_1c < param_2[1]) {
    param_2[1] = uStack_1c;
    param_2[2] = *param_2 + uStack_1c;
  }
  uStack_10 = param_2[1] * uStack_14;
  if (iStack_18 != 0) {
    uVar2 = uVar4;
    if (uStack_10 <= iStack_18 + uVar4) {
      uVar2 = uStack_10 - iStack_18;
    }
    uVar3 = *param_2;
    *puVar7 = iStack_18;
    puVar7[1] = (uint)&uStack_c;
    compute_lens_fw_block_offset_10542e98(in_stack_00000010,uVar3,iVar6,uVar2,*puVar7,puVar7[1]);
    uVar4 = uVar4 - uStack_c;
    iVar6 = iVar6 + uStack_c;
    iVar5 = extraout_r4;
    if (extraout_r4 < 0) {
      uVar2 = unsigned_divide(iStack_18 + uStack_c,uStack_14);
      *in_stack_00000018 = *param_2 + uVar2;
      goto code_r0x105431bc;
    }
    iVar1 = *param_2 + param_2[1] + -1;
    if (uVar4 == 0) {
      *in_stack_00000018 = iVar1;
      goto code_r0x105431bc;
    }
    *in_stack_00000018 = iVar1;
    uStack_1c = uStack_1c - param_2[1];
    if ((param_2[2] < 2) || (*(uint *)(in_stack_00000010 + 0x4c) < param_2[2])) {
      if (*(uint *)(in_stack_00000010 + 0x50) < param_2[2]) {
        iVar5 = -0x1f5;
      }
      else {
        iVar5 = -0x390;
      }
      goto code_r0x105431bc;
    }
    *param_2 = param_2[2];
    iVar5 = dispatch_lens_fw_update(in_stack_00000010,uStack_1c,param_2);
    if (iVar5 < 0) goto code_r0x105431bc;
    uStack_10 = param_2[1] * uStack_14;
  }
  while (uVar4 != 0) {
    if (uVar4 < uStack_10) {
      uVar2 = *param_2;
      *puVar7 = 0;
      puVar7[1] = (uint)&uStack_c;
      compute_lens_fw_block_offset_10542e98(in_stack_00000010,uVar2,iVar6,uVar4,*puVar7,puVar7[1]);
      uVar4 = uVar4 - uStack_c;
      iVar6 = iVar6 + uStack_c;
      if (uStack_c != 0) {
        uStack_10 = unsigned_divide(uStack_c,uStack_14);
        uVar2 = compute_modulo_10544c28(uStack_c,uStack_14);
        if (uVar2 == 0) {
          uStack_10 = uStack_10 - 1;
        }
        *in_stack_00000018 = *param_2 + uStack_10;
      }
      iVar5 = extraout_r4_00;
      if ((extraout_r4_00 < 0) || (uVar4 != 0)) break;
    }
    else {
      iVar5 = compute_lens_fw_offset((void *)(in_stack_00000010),(void *)(iVar6),(int *)(param_2),(uint *)(&uStack_c));
      uVar4 = uVar4 - uStack_c * uStack_14;
      iVar6 = iVar6 + uStack_c * uStack_14;
      if (iVar5 < 0) {
        *in_stack_00000018 = *param_2 + uStack_c;
        break;
      }
      *in_stack_00000018 = *param_2 + param_2[1] + -1;
      uStack_1c = uStack_1c - param_2[1];
      if (uVar4 != 0) {
        uVar2 = param_2[2];
        if ((uVar2 < 2) || (*(uint *)(in_stack_00000010 + 0x4c) < uVar2)) {
          if (*(uint *)(in_stack_00000010 + 0x50) < param_2[2]) {
            iVar5 = -0x1f5;
          }
          else {
            iVar5 = -0x390;
          }
          break;
        }
        *param_2 = uVar2;
        iVar5 = dispatch_lens_fw_update(in_stack_00000010,uStack_1c,param_2);
        if (iVar5 != 0) break;
        uStack_10 = param_2[1] * uStack_14;
      }
    }
  }
code_r0x105431bc:
  in_stack_00000018[1] = in_stack_00000014[1] - uVar4;
  return iVar5;
}
