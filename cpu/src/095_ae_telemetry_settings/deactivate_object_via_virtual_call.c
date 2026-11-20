/* @k10d deactivate_object_via_virtual_call @ 0x1040b6b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10599c24 * deactivate_object_via_virtual_call(cls_10599c24 *param_1)

{
  param_1->field_0x14 = 0;
  (((vtbl_entry*)(param_1->field_0x0))[8].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
  call_two_helpers_with_param_1040b76a(param_1);
  return param_1;
}
