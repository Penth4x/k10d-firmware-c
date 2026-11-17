/* @k10d dispatch_mode_handler_1039419e @ 0x1039419e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a handler based on a mode code, storing the result in the object.
 * summary:
 *   The function takes an object pointer and a pointer to a mode code. It sets an offset
 *   (0x44) in the object to point to itself. If the mode code is 7, it calls
 *   get_or_create_singleton_object_10396af8. If the mode code is 8, it performs a virtual
 *   function call on slot 10 (offset 0x6c) of the object. The return value of the selected
 *   handler is stored in the object at offset 0x44 and returned. The specific camera
 *   subsystem is not identifiable from the provided pseudocode and single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_mode_handler_1039419e(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0x11] = (int)param_1;
  if (*param_2 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0x11] = iVar1;
  }
  else if (*param_2 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,0);
    param_1[0x11] = iVar1;
  }
  return param_1[0x11];
}
