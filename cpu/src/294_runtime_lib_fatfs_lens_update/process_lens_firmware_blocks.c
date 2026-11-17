/* @k10d process_lens_firmware_blocks @ 0x1053c074
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over lens firmware data blocks, fetching and validating 16-bit words against a
 *   target pattern and reporting mismatch counts.
 * summary:
 *   The function processes a buffer of lens firmware data (param_1 + 0x4c) by iterating
 *   through 16-bit words and comparing them against a target value (uStack_a). It calls
 *   write_buffer_via_virtual_method and transfer_data_via_virtual_method to fetch or
 *   process data blocks, likely over the lens communication interface. Mismatches are
 *   counted and reported via insert_lens_fw_block. The final count of matching entries is
 *   stored in param_1 + 0x74, and the remaining count is stored in in_stack_00000010[6].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053c1e0) overlaps instruction at (ram,0x1053c1de)
    */

int process_lens_firmware_blocks(void *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint16_t *puVar4;
  int iVar5;
  ushort *puVar6;
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
  uint8_t auStack_14 [4];
  uint8_t auStack_10 [6];
  ushort uStack_a;
  
  piVar9 = (int *)auStack_54;
  uStack_a = (ushort)((uint)*(uint32_t *)((int)param_1 + 0x50) >> 8) & 0xff |
             (ushort)((*(uint *)((int)param_1 + 0x50) & 0xff) << 8);
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
    puVar4 = *(uint16_t **)((int)piStack_20 + 8);
    *puVar4 = 0xf8ff;
    puVar4[1] = 0xffff;
    uStack_24 = *(uint *)((int)param_1 + 0x4c);
    uVar1 = 0;
    iStack_28 = 2;
    puVar6 = puVar4 + 2;
    iStack_50 = 2;
    for (uStack_2c = 2; iStack_50 = iStack_50 + 1, uStack_2c < uStack_24; uStack_2c = uStack_2c + 1)
    {
      if (*puVar6 == uStack_a) {
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
    *piVar9 = (int)auStack_14;
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
    puVar4 = (uint16_t *)piVar7[2];
    *puVar4 = 0xf8ff;
    puVar4[1] = 0xffff;
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
        if (*puVar6 == uStack_a) {
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
          *piVar9 = (int)auStack_10;
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
      *piVar9 = (int)auStack_14;
      iVar2 = write_buffer_via_virtual_method(param_1,iVar2,uVar1,pvVar3,(int *)*piVar9);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        return -0x385;
      }
      *piStack_20 = iStack_34;
      puVar6 = (ushort *)piStack_20[2];
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
      *piVar9 = (int)auStack_14;
      iVar2 = write_buffer_via_virtual_method(param_1,iVar2,uVar1,pvVar3,(int *)*piVar9);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        return -0x385;
      }
    }
  }
  in_stack_00000010[6] = (*(int *)((int)param_1 + 0x4c) - iStack_18) - 2;
  *(int *)((int)param_1 + 0x74) = iStack_18;
  return 0;
}
