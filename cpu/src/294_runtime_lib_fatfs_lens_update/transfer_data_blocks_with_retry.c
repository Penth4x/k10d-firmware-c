/* @k10d transfer_data_blocks_with_retry @ 0x105421b8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates through data blocks, calling helper functions to process each block with a
 *   maximum of two retries per block.
 * summary:
 *   The function loops while a remaining count (_cfg_48.uStack_2c) is greater than or equal to a
 *   block size (_cfg_48.uStack_30). For each block, it calls allocate_lens_fw_buffer_1053d612 and
 *   dispatch_lens_fw_update_step_1053d1f0 to prepare data, then
 *   compute_indexed_lookup_value to process it. If processing fails with specific error
 *   codes, it retries up to two times. It updates progress pointers in param_5 and param_6
 *   and calls dispatch_lens_fw_update_step_1053d138 on failure to reset state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10542200) overlaps instruction at (ram,0x105421fe)
    */

int transfer_data_blocks_with_retry(void *param_1,int param_2,int param_3,uint32_t param_4,int *param_5,int *param_6,
                int *param_7)

{
  struct {
    int iStack_48;
    int iStack_44;
    uint32_t uStack_40;
    int iStack_3c;
    int * piStack_38;
    int iStack_34;
    uint uStack_30;
    uint uStack_2c;
    uint uStack_28;
    int iStack_24;
  } _cfg_48;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_58 [4];
  uint auStack_54 [3];
  int iStack_8;
  
  piVar5 = (int *)auStack_58;
  _cfg_48.uStack_2c = param_5[1];
  *param_7 = 0;
  _cfg_48.uStack_30 = *(uint *)((int)param_1 + 0x10);
  *param_6 = 0;
  param_6[1] = 0;
  iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_3,param_2,auStack_54);
  if ((iVar1 == 0) &&
     (iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,auStack_54[0],1,auStack_54 + 2), iVar1 == 0)) {
    auStack_54[1] = 1;
    iStack_8 = param_2;
    while (_cfg_48.uStack_30 <= _cfg_48.uStack_2c) {
      iVar4 = 2;
      while( true ) {
        iVar1 = allocate_lens_fw_buffer_1053d612(param_1,iStack_8,&_cfg_48.iStack_48);
        if (iVar1 < 0) goto code_r0x10542506;
        _cfg_48.uStack_40 = *(uint32_t *)((int)param_1 + 0x54);
        iVar1 = dispatch_lens_fw_update_step_1053d1f0((int)param_1,&_cfg_48.iStack_48);
        if (iVar1 < 0) goto code_r0x10542506;
        _cfg_48.iStack_3c = _cfg_48.iStack_44;
        if ((_cfg_48.iStack_44 == iStack_8) && (uVar2 = compute_modulo_10544c28(_cfg_48.uStack_2c,_cfg_48.uStack_30), uVar2 != 0)) {
          _cfg_48.iStack_44 = _cfg_48.iStack_3c + -1;
          iVar1 = compute_indexed_lookup_value((int)param_1,*param_5,&_cfg_48.iStack_48,&_cfg_48.uStack_28);
          _cfg_48.iStack_44 = _cfg_48.iStack_44 + 1;
        }
        else {
          iVar1 = compute_indexed_lookup_value((int)param_1,*param_5,&_cfg_48.iStack_48,&_cfg_48.uStack_28);
        }
        if (iVar1 == 0) break;
        if (((iVar1 == -6) || (iVar3 = merge_lens_fw_block_entry(param_1,&_cfg_48.iStack_48), iVar3 != 0)) ||
           (iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,_cfg_48.iStack_48,*(uint32_t *)((int)param_1 + 0x54),0),
           iVar1 != 0)) goto code_r0x10542506;
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) {
          return -0x38a;
        }
      }
      if ((*param_6 != 0) && (iVar1 = dispatch_lens_update_step((int)param_1,*param_6,_cfg_48.iStack_48), iVar1 < 0))
      goto code_r0x10542506;
      _cfg_48.uStack_2c = _cfg_48.uStack_2c - _cfg_48.uStack_28 * _cfg_48.uStack_30;
      *param_5 = _cfg_48.uStack_28 * _cfg_48.uStack_30 + *param_5;
      *param_6 = _cfg_48.iStack_48 + _cfg_48.uStack_28 + -1;
      iStack_8 = iStack_8 - _cfg_48.iStack_44;
      if (*param_7 == 0) {
        *param_7 = _cfg_48.iStack_48;
      }
    }
    if (_cfg_48.uStack_2c == 0) {
code_r0x105424ca:
      iVar1 = dispatch_lens_update_step((int)param_1,*param_6,auStack_54[2]);
      if (-1 < iVar1) {
        iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,param_3,auStack_54[2],*param_7);
        param_6[1] = param_5[1] - _cfg_48.uStack_2c;
        return iVar1;
      }
    }
    else {
      _cfg_48.iStack_34 = param_5[1];
      iVar4 = 2;
      do {
        if (iStack_8 != 0) {
          iVar1 = allocate_lens_fw_buffer_1053d612(param_1,iStack_8,&_cfg_48.iStack_48);
          _cfg_48.piStack_38 = &_cfg_48.iStack_48;
          if (iVar1 < 0) goto code_r0x10542506;
          _cfg_48.uStack_40 = *(uint32_t *)((int)param_1 + 0x54);
          iVar1 = dispatch_lens_fw_update_step_1053d1f0((int)param_1,&_cfg_48.iStack_48);
          if ((iVar1 < 0) ||
             ((*param_6 != 0 && (iVar1 = dispatch_lens_update_step((int)param_1,*param_6,_cfg_48.iStack_48), iVar1 < 0)))
             ) goto code_r0x10542506;
        }
        uVar2 = auStack_54[0];
        param_5[1] = _cfg_48.uStack_2c;
        iVar1 = _cfg_48.iStack_48 + _cfg_48.iStack_44;
        *piVar5 = (int)&_cfg_48.iStack_24;
        iVar1 = (*(code *)0x10542b28/*ROM*/)(param_1,iVar1 + -1,uVar2,param_5);
        if (-1 < iVar1) {
          param_5[1] = _cfg_48.iStack_34;
          *param_6 = _cfg_48.iStack_48 + _cfg_48.iStack_44 + -1;
          _cfg_48.uStack_2c = _cfg_48.uStack_2c - _cfg_48.iStack_24;
          goto code_r0x105424ca;
        }
        if (((iVar1 == -6) || (iVar1 = merge_lens_fw_block_entry(param_1,&_cfg_48.iStack_48), iVar1 != 0)) ||
           ((iVar1 = dispatch_lens_update_step((int)param_1,*param_6,*(int *)((int)param_1 + 0x54)), iVar1 != 0
            || (iVar1 = dispatch_lens_update_step((int)param_1,_cfg_48.iStack_48 + _cfg_48.iStack_44 + -1,
                                     *(int *)((int)param_1 + 0x50)), iVar1 != 0))))
        goto code_r0x10542506;
        iVar4 = iVar4 + -1;
        iStack_8 = 1;
      } while (0 < iVar4);
      iVar1 = -0x38a;
    }
code_r0x10542506:
    if (*param_7 != 0) {
      dispatch_lens_fw_update_step_1053d138(param_1,*param_7,*(uint32_t *)((int)param_1 + 0x54),0);
    }
    *param_6 = param_3;
    param_6[1] = 0;
  }
  return iVar1;
}
