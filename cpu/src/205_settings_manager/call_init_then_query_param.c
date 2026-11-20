/* @k10d call_init_then_query_param @ 0x104a19dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an init routine, then conditionally calls a query routine on param_1 based on a
 *   status check.
 * summary:
 *   The function first calls clear_struct_fields_104a1a02 with no arguments. It then calls
 *   an unknown function at 0x104a29d0 with param_1 as an argument. If that call returns 0,
 *   the function returns 0. Otherwise, it calls initialize_struct_offsets with param_1 and
 *   returns its result. The specific roles of the callees are unknown, so the behavior is
 *   described mechanically as a conditional dispatch based on a status check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_init_then_query_param(cls_105b6174 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_struct_fields_104a1a02(param_1);
  iVar1 = (*(code *)0x104a29d0/*ROM*/)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = initialize_struct_offsets(param_1);
  }
  return uVar2;
}
