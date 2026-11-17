/* @k10d process_block_buffer_with_gaps @ 0x1053cc4a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Scans a buffer for a sentinel value, calls a helper for each contiguous gap, and
 *   updates a progress counter.
 * summary:
 *   The function reads a count from param_1+0x4c and a sentinel value derived from
 *   param_1+0x50. It iterates through a buffer (pointed to by in_stack_00000010[9]+8),
 *   counting elements that do not match the sentinel. For each contiguous run of non-
 *   sentinel elements, it calls insert_lens_fw_block with the start index and length. It
 *   also calls write_buffer_via_virtual_method and transfer_data_via_virtual_method in a
 *   loop that appears to process data chunks, updating a progress field at param_1+0x74.
 *   The specific subsystem (lens, sensor, etc.) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053cdba) overlaps instruction at (ram,0x1053cdb8)
    */

int process_block_buffer_with_gaps(void *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint32_t *puVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uintptr_t sp;
  int *piVar9;
  uint *in_stack_00000010;
  uint8_t auStack_54 [4];
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  int *piStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  uint8_t auStack_10 [4];
  uint8_t auStack_c [4];
  
  piVar9 = (int *)auStack_54;
  uStack_14 = (*(uint *)((int)param_1 + 0x50) | 0xff0000) >> 8 |
              *(uint *)((int)param_1 + 0x50) >> 0x18 |
              (*(uint *)((int)param_1 + 0x50) | 0xff00) << 8 | *(int *)((int)param_1 + 0x50) << 0x18
  ;
  iStack_18 = 0;
  uStack_1c = unsigned_divide(*(uint *)((int)param_1 + 0x4c),in_stack_00000010[5]);
  uVar1 = compute_modulo_10544c28(*(uint *)((int)param_1 + 0x4c),in_stack_00000010[5]);
  if (uVar1 != 0) {
    uStack_1c = uStack_1c + 1;
  }
  if (*in_stack_00000010 == uStack_1c) {
    piStack_20 = (int *)in_stack_00000010[9];
    if (*(int *)((int)piStack_20 + 0xc) != 1) {
      *(uint32_t *)((int)piStack_20 + 0xc) = 1;
      in_stack_00000010[1] = in_stack_00000010[1] - *(int *)((int)piStack_20 + 4);
    }
    *(uint *)((int)piStack_20 + 4) = *in_stack_00000010;
    puVar4 = *(uint32_t **)((int)piStack_20 + 8);
    *puVar4 = 0xffffffff;
    puVar4[1] = 0xffffffff;
    uStack_24 = *(uint *)((int)param_1 + 0x4c);
    uVar1 = 0;
    iStack_28 = 2;
    puVar6 = puVar4 + 2;
    iStack_50 = 2;
    for (uStack_2c = 2; iStack_50 = iStack_50 + 1, uStack_2c < uStack_24; uStack_2c = uStack_2c + 1)
    {
      if (*puVar6 == uStack_14) {
        iStack_18 = iStack_18 + 1;
        if (uVar1 != 0) {
          insert_lens_fw_block((int)in_stack_00000010,iStack_28,uVar1);
        }
        uVar1 = 0;
        iStack_28 = iStack_50;
      }
      else {
        uVar1 = uVar1 + 1;
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
    }
    if (uVar1 != 0) {
      insert_lens_fw_block((int)in_stack_00000010,iStack_28,uVar1);
    }
  }
  else {
    uStack_30 = 0;
    iVar2 = iterate_struct_array_entries(param_1,in_stack_00000010);
    if (iVar2 != 0) {
      return iVar2;
    }
    piVar7 = (int *)in_stack_00000010[9];
    uVar1 = *in_stack_00000010;
    iVar5 = *(int *)((int)param_1 + 0x30);
    pvVar3 = (void *)piVar7[2];
    *piVar9 = (int)auStack_10;
    iVar2 = write_buffer_via_virtual_method(param_1,iVar5,uVar1,pvVar3,(int *)*piVar9);
    iStack_34 = iVar5;
    piStack_20 = piVar7;
    if (iVar2 != 0) {
      if (iVar2 == -6) {
        return -6;
      }
      return -0x385;
    }
    piVar7[1] = *in_stack_00000010;
    puVar4 = (uint32_t *)piVar7[2];
    *puVar4 = 0xffffffff;
    puVar4[1] = 0xffffffff;
    puVar6 = puVar4 + 2;
    uStack_38 = in_stack_00000010[5] * uVar1;
    iStack_3c = 2;
    uStack_40 = 2;
    uStack_44 = 2;
    uVar8 = 0;
    do {
      uStack_4c = uStack_44;
      if (*(uint *)((int)param_1 + 0x4c) < uStack_38) {
        uStack_38 = *(uint *)((int)param_1 + 0x4c);
      }
      for (; uStack_4c = uStack_4c + 1, uStack_44 < uStack_38; uStack_44 = uStack_44 + 1) {
        if (*puVar6 == uStack_14) {
          iStack_18 = iStack_18 + 1;
          if (uVar8 != 0) {
            insert_lens_fw_block((int)in_stack_00000010,uStack_40,uVar8);
          }
          uVar8 = 0;
          uStack_40 = uStack_4c;
        }
        else {
          uVar8 = uVar8 + 1;
          if (*puVar6 != 0) {
            *puVar6 = 0;
            iStack_3c = iStack_3c + 1;
          }
        }
        puVar6 = puVar6 + 1;
      }
      if (iStack_3c != 0) {
        for (uStack_48 = 0; uStack_48 < *(uint *)((int)param_1 + 0x24); uStack_48 = uStack_48 + 1) {
          iVar2 = iStack_34 + uStack_48 * *(int *)((int)param_1 + 0x3c);
          iVar5 = piStack_20[2];
          *piVar9 = (int)auStack_c;
          iVar2 = transfer_data_via_virtual_method((int)param_1,iVar2,uVar1,iVar5,(int *)*piVar9);
          if (iVar2 != 0) {
            if (iVar2 == -6) {
              return -6;
            }
            return -0x386;
          }
        }
        iStack_3c = 0;
      }
      iVar2 = iStack_34 + uVar1;
      uStack_30 = uStack_30 + uVar1;
      iStack_34 = iVar2;
      if ((uStack_1c - uStack_30 < uVar1) && (uVar1 = uStack_1c - uStack_30, uVar1 == 0)) break;
      pvVar3 = (void *)piStack_20[2];
      *piVar9 = (int)auStack_10;
      iVar2 = write_buffer_via_virtual_method(param_1,iVar2,uVar1,pvVar3,(int *)*piVar9);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        return -0x385;
      }
      *piStack_20 = iStack_34;
      puVar6 = (uint *)piStack_20[2];
      uStack_38 = in_stack_00000010[5] * uVar1 + uStack_38;
    } while (uStack_30 < uStack_1c);
    if (uVar8 != 0) {
      insert_lens_fw_block((int)in_stack_00000010,uStack_40,uVar8);
    }
    if (*piStack_20 != *(int *)((int)param_1 + 0x30)) {
      *piStack_20 = *(int *)((int)param_1 + 0x30);
      iVar2 = *(int *)((int)param_1 + 0x30);
      uVar1 = *in_stack_00000010;
      pvVar3 = (void *)piStack_20[2];
      *piVar9 = (int)auStack_10;
      iVar2 = write_buffer_via_virtual_method(param_1,iVar2,uVar1,pvVar3,(int *)*piVar9);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        return -0x385;
      }
    }
  }
  uVar1 = (*(int *)((int)param_1 + 0x4c) - iStack_18) - 2;
  in_stack_00000010[6] = uVar1;
  in_stack_00000010[8] = uVar1;
  *(int *)((int)param_1 + 0x74) = iStack_18;
  return 0;
}
