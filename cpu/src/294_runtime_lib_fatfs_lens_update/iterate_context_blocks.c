/* @k10d iterate_context_blocks @ 0x105432ec
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over a count of items in a context, calling a per-item handler and updating
 *   progress pointers.
 * summary:
 *   The function loops param_2 times, calling allocate_lens_fw_buffer_1053d612 to fetch an
 *   item index and write_data_block_with_offset to process it. It updates param_3 with the
 *   current index and a calculated offset (index * stride from param_1+0x10), and sets
 *   param_4 to the first processed index. Error handling calls merge_lens_fw_block_entry
 *   and dispatch_lens_update_step for cleanup or state checks. The specific domain (lens
 *   firmware) is not verifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_context_blocks(void *param_1,int param_2,int *param_3,int *param_4)

{
  struct {
    int iStack_3c;
    int iStack_38;
    uint32_t uStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
  } _cfg_3c;
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  iVar1 = 0;
  _cfg_3c.iStack_28 = *(int *)((int)param_1 + 0x10);
  *param_3 = *param_4;
  param_3[1] = 0;
  _cfg_3c.iStack_2c = param_2;
code_r0x1054342a:
  if (_cfg_3c.iStack_2c != 0) {
    while (iVar1 = allocate_lens_fw_buffer_1053d612(param_1,_cfg_3c.iStack_2c,&_cfg_3c.iStack_3c), -1 < iVar1) {
      _cfg_3c.uStack_34 = *(uint32_t *)((int)param_1 + 0x54);
      iVar1 = dispatch_lens_fw_update_step_1053d1f0((int)param_1,&_cfg_3c.iStack_3c);
      if ((iVar1 < 0) ||
         ((*param_3 != 0 && (iVar1 = dispatch_lens_update_step((int)param_1,*param_3,_cfg_3c.iStack_3c), iVar1 != 0))))
      break;
      _cfg_3c.iStack_24 = _cfg_3c.iStack_38;
      iVar3 = param_2 - _cfg_3c.iStack_2c;
      _cfg_3c.iStack_30 = iVar3 * _cfg_3c.iStack_28;
      iVar2 = _cfg_3c.iStack_3c;
      while( true ) {
        if (_cfg_3c.iStack_24 < 1) {
          _cfg_3c.iStack_2c = param_2 - iVar3;
          goto code_r0x1054342a;
        }
        iVar1 = write_data_block_with_offset(param_1,iVar2,0);
        if (iVar1 != 0) break;
        _cfg_3c.iStack_30 = _cfg_3c.iStack_30 + _cfg_3c.iStack_28;
        *param_3 = iVar2;
        param_3[1] = _cfg_3c.iStack_30;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 1;
        if (*param_4 == 0) {
          *param_4 = _cfg_3c.iStack_3c;
        }
        _cfg_3c.iStack_24 = _cfg_3c.iStack_24 + -1;
      }
      _cfg_3c.iStack_2c = param_2 - iVar3;
      if (((((iVar1 == -6) || (iVar1 = merge_lens_fw_block_entry(param_1,&_cfg_3c.iStack_3c), iVar1 != 0)) ||
           ((*param_3 != 0 &&
            (iVar1 = dispatch_lens_update_step((int)param_1,*param_3,*(int *)((int)param_1 + 0x54)), iVar1 != 0))
           )) || (iVar1 = dispatch_lens_update_step((int)param_1,iVar2,*(int *)((int)param_1 + 0x50)), iVar1 != 0
                 )) ||
         ((1 < _cfg_3c.iStack_24 &&
          (iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,iVar2 + 1,*(uint32_t *)((int)param_1 + 0x54),0),
          iVar1 != 0)))) break;
    }
  }
  param_3[1] = (param_2 - _cfg_3c.iStack_2c) * _cfg_3c.iStack_28;
  return iVar1;
}
