/* @k10d dispatch_param_based_on_state @ 0x104bd7d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Routes execution to one of two handlers based on a state comparison, then conditionally
 *   calls a third function.
 * summary:
 *   Compares param_2 against a value at offset 0x8d0 in the object pointed to by param_1.
 *   If equal, calls select_and_activate_entry; otherwise calls lookup_entry_by_index and,
 *   if that returns non-zero, calls find_first_active_entry with a computed offset. If the
 *   result equals param_1 + 0x1408, calls initialize_large_struct. Returns the result of
 *   the handler call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_param_based_on_state(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1408;
  if (param_2 == *(int *)(param_1 + 0x8d0)) {
    iVar2 = select_and_activate_entry(param_1,param_3);
  }
  else {
    iVar1 = lookup_entry_by_index(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar2 = find_first_active_entry(param_1 + 0xe04c + param_2 * 0xb34,param_3);
    }
  }
  if (iVar2 == param_1 + 0x1408) {
    initialize_large_struct((uint32_t *)(uint32_t)param_1);
  }
  return iVar2;
}
