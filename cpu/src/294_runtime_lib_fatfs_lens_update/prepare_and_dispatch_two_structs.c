/* @k10d prepare_and_dispatch_two_structs @ 0x1054019c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Zeros fields in two structs, packs computed values into one, then calls a dispatcher
 *   and a conditional follow-up.
 * summary:
 *   The function clears offsets 0x78 in param_1 and 0xc/0x10 in param_2. It calls
 *   call_single_helper_1047f97e to fill a local buffer, then packs those values into
 *   param_2+0x14 and param_2+0x16, copying 0x14 to 0x1c. It calls
 *   process_buffered_data_block(param_1, param_2); if that returns 0 and the saved value
 *   from param_2+0xc is non-zero, it calls dispatch_lens_fw_update_step_1053d138 with
 *   param_1, that saved value, param_1+0x54, and 0. No camera-specific behavior is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int prepare_and_dispatch_two_structs(void *param_1,void *param_2)

{
  struct {
    int iStack_2c;
    int iStack_28;
    int iStack_24;
  } _cfg_2c;
  int iVar1;
  int iVar2;
  uintptr_t sp;
  ushort uStack_1e;
  short sStack_1a;
  short sStack_16;
  
  *(uint32_t *)((int)param_1 + 0x78) = 0;
  iVar2 = *(int *)((int)param_2 + 0xc);
  *(uint32_t *)((int)param_2 + 0x10) = 0;
  *(uint32_t *)((int)param_2 + 0xc) = 0;
  call_single_helper_1047f97e((uint32_t)(&_cfg_2c.iStack_2c));
  *(ushort *)((int)param_2 + 0x16) =
       (ushort)(_cfg_2c.iStack_2c / 2) | (ushort)(_cfg_2c.iStack_28 << 5) | (ushort)(_cfg_2c.iStack_24 << 0xb);
  *(ushort *)((int)param_2 + 0x14) =
       (sStack_1a + 1) * 0x20 | uStack_1e | (sStack_16 + -0x50) * 0x200;
  *(uint16_t *)((int)param_2 + 0x1c) = *(uint16_t *)((int)param_2 + 0x14);
  iVar1 = process_buffered_data_block(param_1,param_2);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = dispatch_lens_fw_update_step_1053d138(param_1,iVar2,*(uint32_t *)((int)param_1 + 0x54),0);
    }
  }
  return iVar1;
}
