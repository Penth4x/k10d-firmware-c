/* @k10d init_object_and_check_fields @ 0x1051831a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes object fields via helper calls and conditionally invokes a virtual method
 *   if four field checks pass.
 * summary:
 *   Calls compute_four_buffer_offsets and set_object_field_and_invoke_virtual_104a29b0 to
 *   initialize or set fields at offsets 0x50, 0x6d, and 0x79. Checks the return value of
 *   write_two_byte_status_to_object and then performs four sequential boolean checks using
 *   dispatch_event_to_subscribers on fields at offsets 3, 0x11, 0x1f, and 0x2d. If all
 *   checks succeed, it calls the virtual method slot 2 (check_flag_then_delegate) on the
 *   object with parameters from offsets 0x3b and 0x79.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_check_fields(uint32_t *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  
  compute_four_buffer_offsets(param_1,param_3);
  puVar3 = param_1 + 0x50;
  set_object_field_and_invoke_virtual_104a29b0(puVar3,param_3);
  set_object_field_and_invoke_virtual_104a29b0(param_1 + 0x6d,param_3);
  set_object_field_and_invoke_virtual_104a29b0(param_1 + 0x79,param_3);
  iVar1 = write_two_byte_status_to_object((int)param_1,param_2);
  if ((((iVar1 != 0) && (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 3),param_2,(int)puVar3), bVar2)) &&
      (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x11),param_2,(int)puVar3), bVar2)) &&
     ((bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x1f),param_2,(int)puVar3), bVar2 &&
      (bVar2 = dispatch_event_to_subscribers((int)(param_1 + 0x2d),param_2,(int)(param_1 + 0x6d)), bVar2)))) {
    check_flag_then_delegate(param_1 + 0x3b,param_2,param_1 + 0x79);
  }
  return;
}
