/* @k10d configure_display_layer_params @ 0x1048f5dc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Configures display layer parameters and enables output by writing to a display
 *   controller object.
 * summary:
 *   The function initializes a local lookup table, refreshes the settings working copy if a
 *   flag is set, and performs a virtual call on an object at param_1+0xc. It then calls a
 *   series of functions (copy_bytes_into_struct_offset through clamp_and_write_byte_field)
 *   that appear to configure display layers or channels, using a value derived from setting
 *   0x98. Finally, it calls check_kernel_call_success_10459fea with a timeout or delay
 *   value of 100.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_display_layer_params(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  void *pvVar4;
  uintptr_t sp;
  char acStack_17 [15];
  
  acStack_17[0] = -7;
  acStack_17[1] = 0xfa;
  acStack_17[2] = 0xfb;
  acStack_17[3] = 0xfc;
  acStack_17[4] = 0xfd;
  acStack_17[5] = 0xfe;
  acStack_17[6] = 0xff;
  acStack_17[7] = 0;
  acStack_17[8] = 1;
  acStack_17[9] = 2;
  acStack_17[10] = 3;
  acStack_17[0xb] = 4;
  acStack_17[0xc] = 5;
  acStack_17[0xd] = 6;
  acStack_17[0xe] = 7;
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),7);
  uVar2 = return_sram_address_10436cf4();
  bVar3 = check_object_field_via_helper(*(void **)(param_1 + 0x18));
  if (bVar3) {
    settings_refresh_working_copy(*(void **)(param_1 + 0x18));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  (((vtbl_entry*)(iVar1))[3].fn)(*(int *)(param_1 + 0xc) + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  pvVar4 = *(void **)(param_1 + 0xc);
  iVar1 = add_four_to_param(uVar2);
  copy_bytes_into_struct_offset(pvVar4,iVar1,0x5d);
  init_struct_with_copy_and_flag(*(uint32_t *)(param_1 + 0xc));
  set_bit5_at_offset_0x2a((void *)(*(uint32_t *)(param_1 + 0xc)),(int)(0));
  dispatch_on_flag_param(*(void **)(param_1 + 0xc),1);
  call_helper_with_flag_one_104436aa((void *)(*(uint32_t *)(param_1 + 0xc)));
  uVar2 = *(uint32_t *)(param_1 + 0xc);
  iVar1 = setting_get(*(int *)(param_1 + 0x18),0x98);
  clamp_and_write_byte_field((void *)(uVar2),(int)acStack_17[iVar1]);
  check_kernel_call_success_10459fea();
  return;
}
