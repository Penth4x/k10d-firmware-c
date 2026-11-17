/* @k10d check_and_process_field_5c @ 0x104b4f7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Checks a value at offset 0x5c of param_1 and conditionally calls a handler with
 *   param_2.
 * summary:
 *   Reads the 4-byte value at param_1 + 0x5c and passes it to push_entry_to_ring_buffer. If
 *   the result is non-zero, it calls match_verb_in_table with the same field value and
 *   param_2, returning the boolean result. If the first check returns zero, it returns 0.
 *   The specific role of the field at 0x5c and the callees is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_and_process_field_5c(int param_1,void *param_2)

{
  int iVar1;
  bool bVar3;
  uint uVar2;
  
  iVar1 = push_entry_to_ring_buffer(*(uint32_t *)(param_1 + 0x5c));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    bVar3 = match_verb_in_table(*(int *)(param_1 + 0x5c),(int)param_2);
    uVar2 = (uint)bVar3;
  }
  return uVar2;
}
