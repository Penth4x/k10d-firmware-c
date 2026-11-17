/* @k10d write_2d_region_with_padding @ 0x10542b2c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a 2D data region to a destination buffer, handling row alignment and padding.
 * summary:
 *   Calculates the destination offset based on row/column parameters and stride. It splits
 *   the write into aligned and unaligned segments, calling helper functions to transfer the
 *   data. It handles padding to align the end of the block and updates a progress or status
 *   pointer in the context structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_2d_region_with_padding(uint32_t param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uintptr_t sp;
  uint *puVar7;
  int in_stack_00000010;
  uint32_t *in_stack_00000014;
  int *in_stack_00000018;
  uint8_t auStack_30 [8];
  uint uStack_28;
  int iStack_24;
  void *pvStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  
  puVar7 = (uint *)auStack_30;
  uStack_10 = *(uint *)(in_stack_00000010 + 0xc);
  iVar3 = 0;
  iVar6 = *(int *)(in_stack_00000010 + 0x38) + (param_3 + -2) * *(int *)(in_stack_00000010 + 0x14);
  iVar4 = *(int *)(in_stack_00000010 + 0x38) + (param_2 + -2) * *(int *)(in_stack_00000010 + 0x14);
  uVar5 = in_stack_00000014[1];
  uStack_28 = in_stack_00000014[2];
  uStack_14 = unsigned_divide(uStack_28,uStack_10);
  uStack_1c = uStack_28 - uStack_14 * uStack_10;
  pvStack_20 = (void *)*in_stack_00000014;
  if (uStack_14 != 0) {
    iVar3 = (*(code *)0x1053e2b2/*ROM*/)(in_stack_00000010,iVar6,iVar4,uStack_14);
    if (iVar3 < 0) {
      *in_stack_00000018 = 0;
      return iVar3;
    }
    iVar4 = iVar4 + uStack_14;
    iVar6 = iVar6 + uStack_14;
  }
  uVar2 = uStack_1c;
  pvVar1 = pvStack_20;
  if (uStack_1c != 0) {
    if (uStack_10 < uStack_1c + uVar5) {
      iStack_24 = uStack_10 - uStack_1c;
      *puVar7 = uStack_10 - uStack_1c;
      puVar7[1] = uStack_1c;
      iVar3 = write_two_buffer_blocks(in_stack_00000010,iVar6,iVar4,pvVar1,*puVar7,puVar7[1]);
      if (iVar3 < 0) {
        *in_stack_00000018 = 0;
        return iVar3;
      }
      uVar5 = uVar5 - iStack_24;
      pvStack_20 = (void *)((int)pvStack_20 + iStack_24);
    }
    else {
      *puVar7 = uVar5;
      puVar7[1] = uVar2;
      iVar3 = write_two_buffer_blocks(in_stack_00000010,iVar6,iVar4,pvVar1,*puVar7,puVar7[1]);
      if (iVar3 < 0) {
        *in_stack_00000018 = 0;
        return iVar3;
      }
      uVar5 = 0;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 1;
  }
  uVar2 = unsigned_divide(uVar5,uStack_10);
  pvVar1 = pvStack_20;
  uStack_18 = uVar2;
  if (uVar2 != 0) {
    *puVar7 = (uint)&iStack_c;
    iVar3 = transfer_data_via_virtual_method(in_stack_00000010,iVar4,uVar2,(int)pvVar1,(int *)*puVar7);
    uVar5 = uVar5 - uStack_10 * iStack_c;
    if (iVar3 < 0) {
      *in_stack_00000018 = in_stack_00000014[1] - uVar5;
      return iVar3;
    }
    iVar4 = iVar4 + uStack_18;
    iVar6 = iVar6 + uStack_18;
    pvStack_20 = (void *)((int)pvStack_20 + uStack_10 * iStack_c);
  }
  pvVar1 = pvStack_20;
  if (uVar5 != 0) {
    *puVar7 = uVar5;
    puVar7[1] = 0;
    iVar3 = write_two_buffer_blocks(in_stack_00000010,iVar6,iVar4,pvVar1,*puVar7,puVar7[1]);
    if (iVar3 < 0) {
      *in_stack_00000018 = in_stack_00000014[1] - uVar5;
      return iVar3;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 1;
  }
  *in_stack_00000018 = in_stack_00000014[1];
  uStack_14 = unsigned_divide((*(int *)(in_stack_00000010 + 0x10) - in_stack_00000014[2]) -
                           in_stack_00000014[1],uStack_10);
  if (uStack_14 != 0) {
    iVar3 = (*(code *)0x1053e2b2/*ROM*/)(in_stack_00000010,iVar6,iVar4,uStack_14);
  }
  return iVar3;
}
