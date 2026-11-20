/* @k10d dispatch_object_event_by_type_103953c6 @ 0x103953c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * dispatch_object_event_by_type_103953c6(cls_10562cbc *param_1,int *param_2)

{
  int iVar1;
  void *puVar2;
  
  param_1->field_0x74 = (uint32_t)((void *)param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0x11) {
      store_result_at_offset_0x74_10395488(param_1);
    }
    else if (param_2[1] == 0xc) {
      store_result_at_offset_0x74_103954a2(param_1);
    }
  }
  else if (iVar1 == 7) {
    puVar2 = (void *)get_or_create_singleton_object_10396af8();
    param_1->field_0x74 = (uint32_t)(puVar2);
  }
  else if (iVar1 == 8) {
    puVar2 = (void *)
             (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                       ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x74 = (uint32_t)(puVar2);
  }
  return (void*)(param_1->field_0x74);
}
