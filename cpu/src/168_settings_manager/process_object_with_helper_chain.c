/* @k10d process_object_with_helper_chain @ 0x1047bf3a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a temporary object, calls two processing helpers in sequence, and returns a
 *   status from a final helper.
 * summary:
 *   The function initializes a stack-allocated object via cls_105b572c_new. It checks a
 *   value derived from param_1+0x54, then calls configure_and_dispatch_event and
 *   build_event_from_params with the object and other parameters. If successful, it calls
 *   allocate_and_init_buffer_1047a664 to get a return value. The object is deleted before
 *   returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_with_helper_chain(int param_1,uint16_t *param_2,ushort *param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_1d8 [4];
  cls_105b572c cStack_1c0;
  
  puVar3 = (uint32_t *)auStack_1d8;
  cls_105b572c_new(&cStack_1c0);
  iVar1 = call_helper_with_second_field_1047a570(*(int *)(param_1 + 0x54));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = configure_and_dispatch_event(param_1,param_2,0,&cStack_1c0), iVar1 != 0)) {
    *puVar3 = (uintptr_t)(&cStack_1c0);
    iVar1 = build_event_from_params(param_1,param_2,0,param_3,(int *)*puVar3);
    if (iVar1 != 0) {
      uVar2 = allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
    }
  }
  cls_105b572c_delete(&cStack_1c0,2);
  return uVar2;
}
