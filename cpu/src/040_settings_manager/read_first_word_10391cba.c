/* @k10d read_first_word_10391cba @ 0x10391cba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the first 32-bit word of the memory block pointed to by param_1.
 * summary:
 *   The function dereferences the pointer in param_1 and returns the value stored at that
 *   address. It has no callees and performs no side effects. It is called by three other
 *   functions, including a virtual method slot 2 of class cls_105bb2e4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_first_word_10391cba(uint32_t *param_1)

{
  return *param_1;
}
