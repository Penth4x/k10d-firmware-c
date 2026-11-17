/* @k10d dispatch_mode_handler_1039402e @ 0x1039402e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to a mode-specific handler based on a value in param_2 and stores the result
 *   in the object.
 * summary:
 *   The function first sets param_1[0xb] to the object pointer. It then checks the value at
 *   *param_2: if it is 7, it calls get_or_create_singleton_object_10396af8; if it is 8, it
 *   performs a virtual call to slot 10 (offset 0x6c) of the object. The return value of the
 *   selected handler is stored in param_1[0xb] and returned. The specific camera subsystem
 *   is not identifiable from the provided pseudocode and single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_mode_handler_1039402e(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0xb] = (int)param_1;
  if (*param_2 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0xb] = iVar1;
  }
  else if (*param_2 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,0);
    param_1[0xb] = iVar1;
  }
  return param_1[0xb];
}
