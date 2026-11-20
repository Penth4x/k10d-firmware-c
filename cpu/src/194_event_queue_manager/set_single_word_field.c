/* @k10d set_single_word_field @ 0x10491dce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Stores the second argument into the first word of the object pointed to by the first
 *   argument.
 * summary:
 *   The function performs a single 32-bit store of param_2 into the memory location
 *   referenced by param_1. It is a virtual method (slot 2) for two small classes
 *   (cls_105b4188 and cls_105b41d0), suggesting it is a simple setter or state-update
 *   operation within a polymorphic interface. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_single_word_field(cls_105b41d0 *param_1,uint32_t param_2)

{
  param_1->field_0x0 = param_2;
  return;
}
