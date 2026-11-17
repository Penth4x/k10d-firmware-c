/* @k10d compute_and_store_offset @ 0x1039cd5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value from a struct field and two short parameters, then passes the result
 *   to a second function.
 * summary:
 *   The function reads a 32-bit value from offset 0x20 of the object pointed to by param_1.
 *   It calls app_obj_factory with this value, param_3, and two computed offsets derived
 *   from param_4 and param_5 (using a stride of 0x18). The return value of app_obj_factory
 *   is then passed to invoke_virtual_then_call_helper_10494188 along with param_2. The
 *   specific roles of the callees and the data structures are not known.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_offset(int param_1,int param_2,void *param_3,short param_4,short param_5)

{
  void *pVar1;
  
  pVar1 = app_obj_factory((void *)(uint32_t)(*(uint32_t *)(param_1 + 0x20)),param_3,
                       (void *)((param_4 + -1) * 0x18 + 0x1a),
                       (void *)((param_5 + -1) * 0x18 + 0x12));
  invoke_virtual_then_call_helper_10494188(param_2,(int)(uint32_t)pVar1);
  return;
}
