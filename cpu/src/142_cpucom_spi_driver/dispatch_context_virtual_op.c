/* @k10d dispatch_context_virtual_op @ 0x104658c2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of helper functions on a sub-object and then dispatches a virtual
 *   call based on a mode flag.
 * summary:
 *   The function takes a context object (param_1) and a mode flag (param_2). It calls seven
 *   helper functions (update_status_word_bits_10440498 through
 *   call_helper_on_field_0x18_104407ea) on a sub-object located at offset 0xc of the
 *   context. It then retrieves a pointer from offset 0x14 and performs a virtual call. If
 *   param_2 is 0, it calls virtual slot 12 (offset 0x64); otherwise, it calls virtual slot
 *   27 (offset 0x6c) with an argument of 1. The specific role of the helpers and the
 *   virtual target is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_context_virtual_op(void *param_1,int param_2)

{
  int iVar1;
  
  update_status_word_bits_10440498(*(void **)((int)param_1 + 0xc),0xa000);
  set_bit3_of_word_at_offset_0x20(*(void **)((int)param_1 + 0xc),0x40);
  clear_bit_2_of_word_at_offset_0x20(*(void **)((int)param_1 + 0xc));
  call_subobject_method_at_offset_0x14_10440736(*(void **)((int)param_1 + 0xc));
  call_helper_on_field_0x18_104407ea(*(void **)((int)param_1 + 0xc));
  invoke_callback_at_offset_0x10(*(void **)((int)param_1 + 0xc));
  clear_low_bit_at_offset_0x20(*(void **)((int)param_1 + 0xc));
  iVar1 = *(int *)((int)param_1 + 0x14);
  if (param_2 == 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 100))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x60));
  }
  else {
    (**(code **)(*(int *)(iVar1 + 4) + 0x6c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x68),1);
  }
  return;
}
