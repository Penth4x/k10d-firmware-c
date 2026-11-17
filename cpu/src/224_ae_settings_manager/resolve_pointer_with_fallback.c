/* @k10d resolve_pointer_with_fallback @ 0x104be124
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer derived from param_1, optionally replaced by a helper call if a
 *   status check passes.
 * summary:
 *   The function initializes a local pointer to param_1 + 0x1408. It calls
 *   lookup_and_call_table_entry; if the result is non-zero, it calls
 *   find_first_active_entry with a computed offset (param_1 + 0x2c4c + (param_2 & 0xffff) *
 *   0xb34) and param_3, storing the result in the local pointer. If the final pointer
 *   equals the initial offset (param_1 + 0x1408), it calls initialize_large_struct. The
 *   function returns the final pointer value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int resolve_pointer_with_fallback(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1408;
  iVar1 = lookup_and_call_table_entry(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
  if (iVar1 != 0) {
    iVar2 = find_first_active_entry(param_1 + 0x2c4c + (param_2 & 0xffff) * 0xb34,param_3);
  }
  if (iVar2 == param_1 + 0x1408) {
    initialize_large_struct((uint32_t *)__frv_reg_unset(4));
  }
  return iVar2;
}
