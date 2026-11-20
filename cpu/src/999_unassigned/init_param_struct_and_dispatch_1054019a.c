/* @k10d init_param_struct_and_dispatch_1054019a @ 0x1054019a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Initializes fields in param_2 using a helper, then calls a dispatch function and a
 *   conditional secondary handler.
 * summary:
 *   The function clears a field at offset 0x78 in param_1 and saves/clears fields at
 *   offsets 0xc and 0x10 in param_2. It calls call_single_helper_1047f97e to populate a
 *   local stack buffer, then packs these values into 16-bit fields at offsets 0x14, 0x16,
 *   and 0x1c in param_2. It then calls process_buffered_data_block with both parameters; if
 *   that returns 0 and the saved value from param_2+0xc is non-zero, it calls
 *   dispatch_lens_fw_update_step_1053d138 with param_1, the saved value, a field from
 *   param_1+0x54, and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_param_struct_and_dispatch_1054019a(int param_1,void *param_2)

{
  struct {
    int iStack_38;
    int iStack_34;
    int iStack_30;
  } _cfg_38;
  int iVar1;
  int iVar2;
  uintptr_t sp;
  ushort uStack_2a;
  short sStack_26;
  short sStack_22;
  
  *(uint32_t *)(param_1 + 0x78) = 0;
  iVar2 = *(int *)((int)param_2 + 0xc);
  *(uint32_t *)((int)param_2 + 0x10) = 0;
  *(uint32_t *)((int)param_2 + 0xc) = 0;
  call_single_helper_1047f97e((uint32_t)(&_cfg_38.iStack_38));
  *(ushort *)((int)param_2 + 0x16) =
       (ushort)(_cfg_38.iStack_38 / 2) | (ushort)(_cfg_38.iStack_34 << 5) | (ushort)(_cfg_38.iStack_30 << 0xb);
  *(ushort *)((int)param_2 + 0x14) =
       (sStack_26 + 1) * 0x20 | uStack_2a | (sStack_22 + -0x50) * 0x200;
  *(uint16_t *)((int)param_2 + 0x1c) = *(uint16_t *)((int)param_2 + 0x14);
  iVar1 = process_buffered_data_block((void *)(param_1),(void *)(param_2));
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = dispatch_lens_fw_update_step_1053d138((void *)(param_1),(uint)(iVar2),(uint)(*(uint32_t *)(param_1 + 0x54)),(uint)(0));
    }
  }
  return iVar1;
}
