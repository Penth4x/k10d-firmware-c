/* @k10d store_value_if_check_passes @ 0x10494f0a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a check function and, if it returns non-zero, stores param_2 at offset 0x7c of
 *   param_1 and calls dispatch_virtual_event_callback.
 * summary:
 *   Invokes an unknown function at 0x1049460e. If the result is non-zero, writes param_2
 *   into the structure pointed to by param_1 at offset 0x7c, then calls
 *   dispatch_virtual_event_callback with param_1. Returns the check result. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int store_value_if_check_passes(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)0x1049460e/*ROM*/)();
  if (iVar1 != 0) {
    *(uint32_t *)(param_1 + 0x7c) = param_2;
    dispatch_virtual_event_callback(param_1);
  }
  return iVar1;
}
