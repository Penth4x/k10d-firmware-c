/* @k10d update_setting_0x9d_on_event @ 0x103d0816
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 067_settings_context (unit names are model-proposed)
 * purpose:
 *   Stores param_3 at offset 0x14 and conditionally updates setting 0x9d based on param_2
 *   and param_3 values.
 * summary:
 *   The function writes param_3 to *(param_1 + 0x14). It calls
 *   get_or_create_singleton_object_104bb22a to get a pointer and reads offset +4. If
 *   param_2 is 0x192001a, it checks param_3: for values 0x11 or 0xe, it calls setting_set
 *   with ID 0x9d and the byte at param_1+0x20, then calls acquire_lock_and_process_event
 *   and check_kernel_call_success_10459fea(0x80). For values 7, 0, 1, or 3, it calls
 *   setting_set with ID 0x9d and sets the byte at param_1+0x22 to 0x8c. The specific
 *   meaning of setting ID 0x9d and the event code 0x192001a is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10595e74 * update_setting_0x9d_on_event(cls_10595e74 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_create_singleton_object_104bb22a();
  uVar2 = *(uint32_t *)(iVar1 + 4);
  param_1->field_0x14 = param_3;
  if (param_2 == 0x192001a) {
    if ((param_3 == 0x11) || (param_3 == 0xe)) {
      setting_set(param_1->field_0x8,0x9d,(uint)(byte)param_1->field_0x20);
      acquire_lock_and_process_event(uVar2,param_1->field_0x20);
      check_kernel_call_success_10459fea();
    }
    else if ((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) {
      setting_set(param_1->field_0x8,0x9d,(uint)(byte)param_1->field_0x20);
      param_1->field_0x22 = 0x8c;
      param_1 = (cls_10595e74 *)0x0;
    }
  }
  return param_1;
}
