/* @k10d forward_field_5c_to_helper_104b4eac @ 0x104b4eac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x5c of the object in param_1 and passes it with
 *   param_2 to match_verb_in_table, returning the result.
 * summary:
 *   A thin wrapper that extracts a single int field (offset 0x5c) from the structure
 *   pointed to by param_1 and forwards it, along with param_2, to the callee
 *   match_verb_in_table. The boolean return value of the callee is passed through
 *   unchanged. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_field_5c_to_helper_104b4eac(int param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = match_verb_in_table(*(int *)(param_1 + 0x5c),(int)param_2);
  return bVar1;
}
