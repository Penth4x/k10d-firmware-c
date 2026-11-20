/* @k10d init_param_struct_and_dispatch_104e6e0a @ 0x104e6e0a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes fields in param_2, calls a helper to populate local values, packs them into
 *   param_2, and dispatches via two callees.
 * summary:
 *   The function zeroes specific offsets in param_1 and param_2. It calls
 *   call_single_helper_1047f97e to fill local stack variables, then packs these values into
 *   param_2 at offsets 0x14-0x1c using bit shifts and arithmetic. Finally, it calls
 *   process_buffered_data_block with both parameters; if that returns 0 and a saved value
 *   from param_2 is non-zero, it calls dispatch_lens_fw_update_step_1053d138 with param_1,
 *   the saved value, and a field from param_1. The specific subsystem is not identifiable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_param_struct_and_dispatch_104e6e0a(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  ushort uStack_1e;
  short sStack_1a;
  short sStack_16;
  
  *(uint32_t *)((int)param_1 + 0x78) = 0;
  iVar2 = *(int *)((int)param_2 + 0xc);
  *(uint32_t *)((int)param_2 + 0x10) = 0;
  *(uint32_t *)((int)param_2 + 0xc) = 0;
  call_single_helper_1047f97e((uint32_t)(&iStack_2c));
  *(ushort *)((int)param_2 + 0x16) =
       (ushort)(iStack_2c / 2) | (ushort)(iStack_28 << 5) | (ushort)(iStack_24 << 0xb);
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
