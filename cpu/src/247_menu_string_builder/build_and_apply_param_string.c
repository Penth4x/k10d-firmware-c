/* @k10d build_and_apply_param_string @ 0x104de0f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Selects a base string by param_3, builds a formatted string via a helper, and applies
 *   it to param_1.
 * summary:
 *   The function chooses between two rodata strings (DAT_105bb0d0 or DAT_105bb0c8) based on
 *   whether param_3 is zero. It calls format_string_to_buffer_10545140 to construct a
 *   32-byte buffer on the stack using that base string, param_2, and param_4. Finally, it
 *   calls append_string_to_buffer to pass the constructed buffer to param_1. The specific
 *   subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_apply_param_string(int *param_1,void *param_2,int param_3,void *param_4)

{
  char *pcVar1;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  if (param_3 == 0) {
    pcVar1 = (char *)&DAT_105bb0d0/*ROM*/;
  }
  else {
    pcVar1 = (char *)&DAT_105bb0c8/*ROM*/;
  }
  format_string_to_buffer_10545140(auStack_28,pcVar1,param_2,param_4);
  append_string_to_buffer(param_1,auStack_28);
  return;
}
