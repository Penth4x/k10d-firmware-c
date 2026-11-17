/* @k10d invoke_object_virtual_methods @ 0x104cec9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Conditionally invokes three virtual methods on an object based on a flag in its second
 *   field.
 * summary:
 *   Checks if param_1[1] is zero. If so, it calls virtual slot 2 (offset 0x14), then slot 3
 *   (offset 0x1c) if the first returns 0, and finally slot 5 (offset 0x2c). It returns the
 *   value of param_1[1]. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_object_virtual_methods(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,0);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*param_1 + 0x1c))((int)*(short *)(*param_1 + 0x18) + (int)param_1,0),
       iVar1 == 0)) {
      return 0;
    }
    (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  }
  return param_1[1];
}
