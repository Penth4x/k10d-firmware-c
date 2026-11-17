/* @k10d dispatch_param_by_type_code @ 0x104d04c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a 2-byte type field in param_2 and calls one of two handlers based on whether it
 *   is 3 or 4.
 * summary:
 *   The function dereferences a pointer chain from param_1 to obtain a value. It then
 *   inspects the short at offset 2 of param_2. If the value is 3, it calls
 *   write_word_to_dynamic_array with the dereferenced value cast to short. If the value is
 *   4, it calls write_to_dynamic_array with the full dereferenced value. It returns 1 if a
 *   handler was called, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_type_code(int param_1, int param_2, uint32_t param_x2)

{
  uint32_t uVar1;
  
  if (param_2 != 0) {
    uVar1 = **(uint32_t **)(*(int *)(param_1 + 4) + 0x1c);
    if (*(short *)(param_2 + 2) == 3) {
      write_word_to_dynamic_array(param_2,0,(short)uVar1);
      return 1;
    }
    if (*(short *)(param_2 + 2) == 4) {
      write_to_dynamic_array(param_2,0,uVar1);
      return 1;
    }
  }
  return 0;
}
