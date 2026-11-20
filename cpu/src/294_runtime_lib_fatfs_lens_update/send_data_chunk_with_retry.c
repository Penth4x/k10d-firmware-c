/* @k10d send_data_chunk_with_retry @ 0x10543568
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transmits a block of data from a buffer using a communication helper, handling retries
 *   and updating progress pointers.
 * summary:
 *   The function iterates through a data buffer (param_1) to send chunks via
 *   compute_indexed_lookup_value and allocate_lens_fw_buffer_1053d612. It manages a retry
 *   counter (iStack_28) and updates output pointers (param_3, param_4, param_5) to track
 *   the current position and remaining bytes. Error codes like -6 trigger specific recovery
 *   paths involving merge_lens_fw_block_entry and dispatch_lens_update_step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105436e0) overlaps instruction at (ram,0x105436de)
    */

int send_data_chunk_with_retry(void *param_1,int param_2,int *param_3,int *param_4,int *param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t auStack_48 [8];
  int local_40;
  int iStack_3c;
  uint32_t uStack_38;
  int aiStack_34 [2];
  int *piStack_2c;
  int iStack_28;
  void *pvStack_24;
  uint uStack_20;
  int iStack_4;
  
  piVar4 = (int *)auStack_48;
  *param_5 = 0;
  *param_4 = 0;
  param_4[1] = 0;
  pvVar3 = (void *)param_3[1];
  pvStack_24 = *(void **)((int)param_1 + 0x10);
  iStack_4 = param_2;
  do {
    iStack_28 = 2;
LAB_10543590:
    while( true ) {
      while( true ) {
        piStack_2c = &local_40;
        iVar1 = allocate_lens_fw_buffer_1053d612(param_1,iStack_4,piStack_2c);
        if (iVar1 < 0) {
          return iVar1;
        }
        uStack_38 = *(uint32_t *)((int)param_1 + 0x54);
        if ((*param_4 != 0) && (iVar1 = dispatch_lens_update_step((int)param_1,*param_4,local_40), iVar1 < 0)) {
          return iVar1;
        }
        iVar1 = dispatch_lens_fw_update_step_1053d1f0((int)param_1,piStack_2c);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (pvVar3 <= (void *)(iStack_3c * (int)pvStack_24) &&
            iStack_3c * (int)pvStack_24 - (int)pvVar3 != 0) break;
        iVar1 = compute_indexed_lookup_value((int)param_1,*param_3,piStack_2c,&uStack_20);
        *param_3 = (int)pvStack_24 * uStack_20 + *param_3;
        pvVar3 = (void *)((int)pvVar3 - (int)pvStack_24 * uStack_20);
        if (-1 < iVar1) goto LAB_10543882;
        if (iVar1 == -6) {
          return -6;
        }
        iVar1 = merge_lens_fw_block_entry(param_1,piStack_2c);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (uStack_20 != 0) {
          if (*param_5 == 0) {
            *param_5 = local_40;
          }
          *param_4 = local_40 + uStack_20 + -1;
          param_4[1] = param_3[1] - (int)pvVar3;
          iVar1 = dispatch_lens_update_step((int)param_1,*param_4,*(int *)((int)param_1 + 0x54));
          if (iVar1 < 0) {
            return iVar1;
          }
        }
        iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,local_40 + uStack_20,*(uint32_t *)((int)param_1 + 0x54),0);
        if (iVar1 < 0) {
          return iVar1;
        }
        iStack_4 = iStack_4 - uStack_20;
        iStack_28 = iStack_28 + -1;
        if (iStack_28 < 1) {
          return -0x38a;
        }
      }
      if (pvVar3 <= pvStack_24) break;
      iStack_3c = iStack_3c + -1;
      iVar1 = compute_indexed_lookup_value((int)param_1,*param_3,piStack_2c,&uStack_20);
      *param_3 = (int)pvStack_24 * uStack_20 + *param_3;
      pvVar3 = (void *)((int)pvVar3 - (int)pvStack_24 * uStack_20);
      iStack_3c = iStack_3c + 1;
      if ((uStack_20 != 0) && (*param_5 == 0)) {
        *param_5 = local_40;
      }
      if (-1 < iVar1) {
        *param_4 = local_40 + iStack_3c + -2;
        param_4[1] = param_3[1] - (int)pvVar3;
        break;
      }
      if (iVar1 == -6) {
        return -6;
      }
      iVar1 = merge_lens_fw_block_entry(param_1,piStack_2c);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (uStack_20 != 0) {
        *param_4 = local_40 + uStack_20 + -1;
        param_4[1] = param_3[1] - (int)pvVar3;
        iVar1 = dispatch_lens_update_step((int)param_1,*param_4,*(int *)((int)param_1 + 0x54));
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,local_40 + uStack_20,*(uint32_t *)((int)param_1 + 0x54),0);
      if (iVar1 < 0) {
        return iVar1;
      }
      iStack_4 = iStack_4 - uStack_20;
      iStack_28 = iStack_28 + -1;
      if (iStack_28 < 1) {
        return -0x38a;
      }
    }
    iVar2 = *param_3;
    iVar1 = local_40 + iStack_3c;
    *piVar4 = (int)&uStack_20;
    piVar4[1] = (uint)param_6;
    iVar1 = write_buffered_data_block((int)param_1,iVar1 + -1,iVar2,pvVar3,(int *)*piVar4,
                         *(char *)((int)piVar4 + 7));
    if (iVar1 < 0) {
      if (iVar1 == -6) {
        return -6;
      }
      aiStack_34[0] = local_40 + iStack_3c + -1;
      aiStack_34[1] = 1;
      iVar1 = merge_lens_fw_block_entry(param_1,aiStack_34);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = dispatch_lens_update_step((int)param_1,*param_4,*(int *)((int)param_1 + 0x54));
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = dispatch_lens_update_step((int)param_1,local_40 + iStack_3c + -1,*(int *)((int)param_1 + 0x50));
      if (iVar1 < 0) {
        return iVar1;
      }
      iStack_28 = iStack_28 + -1;
      iStack_4 = 1;
      if (iStack_28 < 1) {
        return -0x38a;
      }
      goto LAB_10543590;
    }
    *param_3 = *param_3 + uStack_20;
    pvVar3 = (void *)((int)pvVar3 - uStack_20);
LAB_10543882:
    *param_4 = local_40 + iStack_3c + -1;
    param_4[1] = param_3[1] - (int)pvVar3;
    iStack_4 = iStack_4 - iStack_3c;
    if (*param_5 == 0) {
      *param_5 = local_40;
    }
    if (pvVar3 == 0) {
      return 0;
    }
  } while( true );
}
