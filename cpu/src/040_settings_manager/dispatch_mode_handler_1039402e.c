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

uint32_t dispatch_mode_handler_1039402e(cls_10562aa0 *param_1,int *param_2)

{
  uint32_t uVar1;
  
  param_1->field_0x2c = (uint32_t)(param_1);
  if (*param_2 == 7) {
    uVar1 = get_or_create_singleton_object_10396af8();
    param_1->field_0x2c = uVar1;
  }
  else if (*param_2 == 8) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x2c = uVar1;
  }
  return param_1->field_0x2c;
}
