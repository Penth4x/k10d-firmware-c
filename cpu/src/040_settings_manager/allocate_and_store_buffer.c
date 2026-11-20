/* @k10d allocate_and_store_buffer @ 0x1039cbbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer via a helper and stores the returned pointer into a target location.
 * summary:
 *   The function calls app_obj_factory with a pointer from param_1+0x20, param_3, and two
 *   computed offsets based on param_4 and param_5. It then passes the result to
 *   invoke_virtual_then_call_helper_10494188 along with param_2, likely storing the
 *   allocated pointer. The return value is the pointer obtained from the first call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_store_buffer(int param_1,int param_2,void *param_3,short param_4,short param_5)

{
  int iVar1;
  
  iVar1 = (int)app_obj_factory(*(void **)(param_1 + 0x20),param_3,(void *)((param_4 + -1) * 0x18 + 0x20),
                       (void *)((param_5 + -1) * 0x18 + 0x18));
  invoke_virtual_then_call_helper_10494188(param_2,iVar1);
  return iVar1;
}
