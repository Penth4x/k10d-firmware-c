/* @k10d set_sysparam_store_mode @ 0x10534d50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on the object and updates a mode field based on a parameter.
 * summary:
 *   This function is virtual method slot 2 of class cls_106210ec. It first calls virtual
 *   slot 3 (offset 0x2c) on the object. It then copies the value from offset 0x1c
 *   (param_1[0xe]) to offset 0x18 (param_1[0xc]). If param_2 is 1, it instead copies the
 *   value from offset 0x1a (param_1[0xd]) to offset 0x18. Given the module context
 *   (system_parameter_store), this likely sets a configuration mode or state flag within
 *   the system parameter structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_sysparam_store_mode(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  param_1[0xc] = param_1[0xe];
  if (param_2 == 1) {
    param_1[0xc] = param_1[0xd];
  }
  return;
}
