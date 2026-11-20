/* @k10d allocate_lens_fw_segment @ 0x1053d792
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates or splits a memory segment in the lens firmware update buffer to fit a
 *   requested size.
 * summary:
 *   Iterates through a list of memory segments (param_2) to find a block that fits param_3
 *   bytes. If a suitable block is found, it calls split_lens_fw_block to process it. If no
 *   block fits, it attempts to split an existing segment or allocate new memory via
 *   write_buffer_via_virtual_method. The module context 'lens_firmware_update' indicates
 *   this manages the buffer for receiving lens firmware data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053d8d8) overlaps instruction at (ram,0x1053d8d6)
    */

int allocate_lens_fw_segment(void *param_1,uint *param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  int *piVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  int *piVar8;
  uint uStack_2c;
  uint uStack_24;
  
  piVar8 = (int *)&stack0xffffffc4;
  puVar7 = &stack0xffffffc4;
  uStack_24 = 0xffffffff;
  for (uVar1 = 0; uVar1 < *param_2; uVar1 = uVar1 + puVar5[1]) {
    puVar5 = (uint *)(param_2[9] + uVar1 * 0x14);
    uVar3 = *puVar5;
    if ((uVar3 <= param_3) && (param_3 < puVar5[1] + uVar3)) {
      param_2[4] = (uVar1 + *puVar5) - param_3;
      iVar2 = (uintptr_t)(split_lens_fw_block(puVar5,param_3,param_4));
      *param_5 = iVar2;
      *(int *)(*param_5 + 0x10) = *(int *)(*param_5 + 0x10) + 1;
      return 0;
    }
    if (((param_3 < uVar3) && (uVar3 < param_4 + param_3)) && (uVar3 < uStack_24)) {
      uStack_24 = uVar3;
    }
    if (puVar5[1] == 0) {
      return -999;
    }
  }
  if (uStack_24 == 0xffffffff) {
    if (param_4 < *param_2) {
      uVar1 = 0;
      uStack_2c = 0xffffffff;
      merge_overlapping_fw_blocks(param_1,param_2);
      for (uVar3 = 0; uVar3 < *param_2; uVar3 = uVar3 + piVar6[1]) {
        piVar6 = (int *)(param_2[9] + uVar3 * 0x14);
        if (param_3 == *piVar6 + piVar6[1]) {
          uVar1 = uVar3 + piVar6[1];
          if (*param_2 <= uVar1) {
            uVar1 = 0;
          }
          uStack_2c = 0xffffffff;
          break;
        }
        if ((uint)piVar6[4] < uStack_2c) {
          uVar1 = uVar3;
          uStack_2c = piVar6[4];
        }
      }
      puVar5 = (uint *)(param_2[9] + uVar1 * 0x14);
      if ((uStack_2c != 0xffffffff) && (param_2[4] == uVar1)) {
        uVar1 = uVar1 + puVar5[1];
        if (*param_2 <= uVar1) {
          uVar1 = 0;
        }
        puVar5 = (uint *)(param_2[9] + uVar1 * 0x14);
      }
      param_2[4] = uVar1;
      if (param_4 < puVar5[1]) {
        puVar5[param_4 * 5] = *puVar5 + param_4;
        puVar5[param_4 * 5 + 1] = puVar5[1] - param_4;
        puVar5[param_4 * 5 + 4] = puVar5[4];
        puVar5[param_4 * 5 + 3] = puVar5[3];
        puVar5[1] = param_4;
      }
      if ((puVar5[3] == 1) && (iVar2 = write_sequential_data_blocks((int)param_1,param_2,(int *)puVar5), iVar2 != 0)
         ) {
        return iVar2;
      }
    }
    else {
      piVar8 = (int *)&stack0xffffffc4;
      if ((param_2[1] != *param_2) &&
         (iVar2 = iterate_struct_array_entries(param_1,param_2), piVar8 = (int *)puVar7, iVar2 != 0)) {
        return iVar2;
      }
      puVar5 = (uint *)param_2[9];
      puVar5[1] = *param_2;
    }
    *puVar5 = 0;
    puVar5[3] = 0xffffffff;
    uVar1 = puVar5[1];
    pvVar4 = (void *)puVar5[2];
    *piVar8 = (int)&uStack_24;
    iVar2 = write_buffer_via_virtual_method(param_1,param_3,uVar1,pvVar4,(int *)*piVar8);
    if (iVar2 == 0) {
      *puVar5 = param_3;
      puVar5[4] = 0;
      puVar5[3] = 0;
      iVar2 = 0;
      *param_5 = (int)puVar5;
    }
    else {
      *puVar5 = 0;
      *param_5 = 0;
      if (iVar2 == -6) {
        iVar2 = -6;
      }
      else {
        iVar2 = -0x385;
      }
    }
  }
  else {
    iVar2 = allocate_lens_fw_segment(param_1,param_2,param_3,uStack_24 - param_3,param_5);
  }
  return iVar2;
}
