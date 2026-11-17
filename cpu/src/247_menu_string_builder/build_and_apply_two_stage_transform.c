/* @k10d build_and_apply_two_stage_transform @ 0x104de132
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Selects a base pointer based on a flag, chains two calls to
 *   format_string_to_buffer_10545140, and passes the result to append_string_to_buffer.
 * summary:
 *   The function chooses between two fixed addresses (0x105bb0e0 or 0x105bb0d8) based on
 *   whether param_3 is zero. It then calls format_string_to_buffer_10545140 twice, using
 *   the output of the first call as an input to the second, before finally calling
 *   append_string_to_buffer with param_1 and the final result. The specific roles of the
 *   callees and the data structures involved are not clear from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_apply_two_stage_transform(int *param_1,void *param_2,int param_3,void *param_4)

{
  char *pcVar1;
  uintptr_t sp;
  uint8_t auStack_30 [32];
  char acStack_10 [8];
  
  if (param_3 == 0) {
    pcVar1 = (char *)0x105bb0e0/*ROM*/;
  }
  else {
    pcVar1 = (char *)0x105bb0d8/*ROM*/;
  }
  format_string_to_buffer_10545140(acStack_10,pcVar1,param_4,param_4);
  format_string_to_buffer_10545140(auStack_30,acStack_10,param_2,param_4);
  append_string_to_buffer(param_1,auStack_30);
  return;
}
