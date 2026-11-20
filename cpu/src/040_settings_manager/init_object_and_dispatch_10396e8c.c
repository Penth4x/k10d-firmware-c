/* @k10d init_object_and_dispatch_10396e8c @ 0x10396e8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562fec * init_object_and_dispatch_10396e8c(cls_10562fec *param_1)

{
  bool bVar3;
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  char cStack_9;
  
  param_1->field_0x4 = (uintptr_t)(&param_1->field_0x8);
  call_two_initializers_1039459e();
  call_helper_with_second_field_10396f3e(param_1);
  cStack_9 = '\0';
  bVar3 = initialize_module_and_set_flag(param_1,&cStack_9);
  if (bVar3) {
    (((vtbl_entry*)(param_1->field_0x0))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj);
    param_1 = (cls_10562fec *)get_or_create_singleton_object_103957d8(1);
  }
  else if (cStack_9 == '\0') {
    iVar1 = get_or_init_sram_object_103973c4();
    pvVar2 = (void *)dispatch_on_mode_value(iVar1);
    (((vtbl_entry*)(param_1->field_0x0))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj);
    param_1 = (cls_10562fec *)create_and_configure_object_10393b98(0,pvVar2,500);
  }
  return param_1;
}
