/* @k10d dispatch_on_flag_with_context @ 0x104730d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 166_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a context pointer if param_2 is zero, otherwise calls a different
 *   helper.
 * summary:
 *   Retrieves a pointer from initialize_singleton_object_1045d6a0. If param_2 is 0, it
 *   passes the value at offset 0x28 of that pointer to call_helper_with_self_and_one.
 *   Otherwise, it calls initialize_object_with_defaults with no arguments. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_with_context(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  if (param_2 == 0) {
    call_helper_with_self_and_one((void *)(*(uint32_t *)(iVar1 + 0x28)));
  }
  else {
    initialize_object_with_defaults((int *)__frv_reg_unset(4));
  }
  return;
}
