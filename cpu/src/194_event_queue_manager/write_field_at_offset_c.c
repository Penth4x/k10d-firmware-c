/* @k10d write_field_at_offset_c @ 0x10491bb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the field at offset 0xc of the object pointed to by param_1 via a
 *   helper.
 * summary:
 *   The function takes an object pointer and a 32-bit value, then calls
 *   forward_struct_and_second_field with a pointer to the object's field at offset 0xc and
 *   the value. It acts as a thin setter wrapper for that specific struct member. No camera-
 *   specific behavior is evident from the code or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_c(void *param_1,uint32_t param_2)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = param_2;
  forward_struct_and_second_field((int *)((int)param_1 + 0xc),&uStack_c);
  return;
}
