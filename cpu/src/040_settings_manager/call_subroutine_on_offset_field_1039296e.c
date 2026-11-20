/* @k10d call_subroutine_on_offset_field_1039296e @ 0x1039296e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0xc to a single callee and returns.
 * summary:
 *   The function takes one pointer-like argument, adds 0xc to it, and passes the resulting
 *   address to init_object_with_many_subhandles. It performs no other operations and
 *   returns immediately. The role of the callee and the meaning of the offset field are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_1039296e(cls_10562850 *param_1)

{
  uint32_t r5_in;
  void *r6_in;
  void *r7_in;
  
  init_object_with_many_subhandles((cls_10563348 *)&param_1->field_0xc,r5_in,r6_in,r7_in);
  return;
}
