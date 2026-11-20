/* @k10d init_object_with_timeout_and_callback @ 0x10368512
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 011_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by zeroing fields, setting a timeout, and registering a callback.
 * summary:
 *   The function clears several fields in the object pointed to by param_1. It calls
 *   query_state_and_flag_range and dispatch_event_and_return_offset, and if successful,
 *   copies two 16-bit values from a result pointer. It then calls a virtual method (slot 2)
 *   on a sub-object at offset 0x46 with a timeout of 10000. On failure or specific
 *   conditions, it calls other initialization or cleanup routines and returns either the
 *   original object or a new pointer from read_array_element_bounded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557a18 * init_object_with_timeout_and_callback(cls_10557a18 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557a18 *pcVar3;
  uintptr_t sp;
  int iStack_c;
  
  param_1->field_0x14 = 0;
  param_1->field_0x15 = 0;
  param_1->field_0x114 = 0;
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if (iVar1 == 0) {
    iStack_c = 0;
    iVar1 = dispatch_event_and_return_offset(param_1,&iStack_c,0xffffffff);
    if ((iVar1 == 1) && (iStack_c != 0)) {
      param_1->field_0x16 = *(uint16_t *)(iStack_c + 4);
      *(uint16_t *)&param_1->field_0x18 = *(uint16_t *)(iStack_c + 6);
      iVar1 = allocate_dual_buffers_for_object((cls_105aae94 *)&param_1->field_0x118,0,10000);
      if (iVar1 != 0) {
        check_and_zero_two_buffers((cls_105aae94 *)&param_1->field_0x118);
        allocate_and_init_buffer_1036bd76(param_1,0,&param_1->field_0x1c);
        iVar1 = check_and_get_value_if_ready(param_1);
        if (iVar1 != 0) {
          call_helper_on_struct_field_1036c46c();
          call_helper_on_struct_field_1036c41a(param_1,&param_1->field_0x6c,1);
          if (param_1->field_0x15 == '\0') {
            return param_1;
          }
          forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
          return param_1;
        }
        (((vtbl_entry*)(param_1->field_0x0))[10].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[10].adj);
      }
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  pcVar3 = (cls_10557a18 *)read_array_element_bounded(uVar2,1);
  return pcVar3;
}
