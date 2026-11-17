/* @k10d deactivate_object_via_virtual_call @ 0x1040b6b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * deactivate_object_via_virtual_call(int *param_1)

{
  *(uint8_t *)(param_1 + 5) = 0;
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  call_two_helpers_with_param_1040b76a(param_1);
  return param_1;
}
