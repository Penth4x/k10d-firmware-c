/* @k10d allocate_and_init_widget @ 0x1045bd5c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte widget object (or uses a provided one) and initializes its first
 *   two fields via two helper calls.
 * summary:
 *   If param_1 is NULL, it heap_allocates 0x10 bytes; on allocation failure it returns
 *   NULL. It then calls alloc_and_zero_two_words_1045bc0e on the object base and
 *   alloc_and_zero_two_words_1045c3bc on the object at offset 8 (param_1 + 2), likely
 *   initializing two sub-objects or members. The caller text_widget_layout suggests this
 *   constructs a text widget instance, but the callee roles are unverified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_widget(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    alloc_and_zero_two_words_1045bc0e(param_1);
    alloc_and_zero_two_words_1045c3bc(param_1 + 2);
  }
  return (int)param_1;
}
