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

/* WARNING: Struct "cls_105d65d0": ignoring overlapping field "field_0x1e4" */

void init_object_and_check_fields(cls_105d65d0 *param_1,int *param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  compute_four_buffer_offsets(param_1,param_3);
  puVar4 = &param_1->field_0x140;
  set_object_field_and_invoke_virtual_104a29b0(puVar4,param_3);
  set_object_field_and_invoke_virtual_104a29b0(&((uint32_t *)&(param_1->field_0x1b4))[0],param_3);
  puVar3 = &((uint32_t *)&(param_1->field_0x1b4))[12];
  set_object_field_and_invoke_virtual_104a29b0(puVar3,param_3);
  iVar1 = write_two_byte_status_to_object((int)param_1,param_2);
  if ((((iVar1 != 0) && (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0xc,param_2,(int)puVar4), bVar2))
      && (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0x44,param_2,(int)puVar4), bVar2)) &&
     ((bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0x7c,param_2,(int)puVar4), bVar2 &&
      (bVar2 = dispatch_event_to_subscribers((int)&param_1->field_0xb4,param_2,(int)&param_1->field_0x1b4), bVar2))))
  {
    check_flag_then_delegate((cls_105b6aa0 *)&param_1->field_0xec,param_2,puVar3);
  }
  return;
}
