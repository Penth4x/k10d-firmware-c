/* @k10d init_object_with_two_ids_1036a3ce @ 0x1036a3ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a helper on a sub-structure at offset 0x14 and setting
 *   two fields to 0x80.
 * summary:
 *   The function first calls call_helper_on_struct_field_1036c46c with no arguments. It
 *   then computes a pointer to the sub-structure at offset 0x14 of param_1. It calls
 *   call_helper_on_struct_field_1036c41a with param_1, this sub-structure pointer, and the
 *   value 1. It subsequently calls forward_params_to_helper_1049207a twice on the sub-
 *   structure pointer, setting fields at indices 6 and 0x12 to the value 0x80. Finally, it
 *   calls request_ui_sync_code_4 on the sub-structure pointer. The specific roles of the
 *   callees and the object are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_1036a3ce(void *param_1)

{
  void *pvVar1;
  
  call_helper_on_struct_field_1036c46c();
  pvVar1 = (void *)((int)param_1 + 0x14);
  call_helper_on_struct_field_1036c41a(param_1,pvVar1,1);
  forward_params_to_helper_1049207a(pvVar1,6,0x80);
  forward_params_to_helper_1049207a(pvVar1,0x12,0x80);
  request_ui_sync_code_4(pvVar1);
  return;
}
