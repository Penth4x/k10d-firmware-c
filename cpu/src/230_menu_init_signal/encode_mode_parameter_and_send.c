/* @k10d encode_mode_parameter_and_send @ 0x104c2f58
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Encodes a mode selector and value into a 2-byte structure and passes it to a lower-
 *   level send function.
 * summary:
 *   The function takes a mode selector (param_3) and a value (param_4), mapping the
 *   selector to a specific code (0, 1, 2, 4, or 3) and potentially transforming the value
 *   (e.g., param_4 * 3 + param_5 for mode 2). It constructs a local structure containing
 *   this encoded data and calls configure_buffer_and_dispatch_event with the original first
 *   argument, a pointer to the structure, and a length of 1. The specific camera subsystem
 *   is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t encode_mode_parameter_and_send(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  uintptr_t sp;
  uint32_t uStack_14;
  int iStack_10;
  void *pvStack_c;
  
  uStack_14 = 0;
  if (param_3 == 0) {
    uStack_14 = 0;
  }
  else if (param_3 == 1) {
    uStack_14 = 1;
  }
  else if (param_3 == 2) {
    param_4 = param_4 * 3 + param_5;
    uStack_14 = 2;
  }
  else if (param_3 == 3) {
    uStack_14 = 4;
  }
  else if (param_3 == 4) {
    uStack_14 = 3;
  }
  iStack_10 = param_4;
  pvStack_c = param_2;
  configure_buffer_and_dispatch_event(param_1,&uStack_14,1);
  return 1;
}
