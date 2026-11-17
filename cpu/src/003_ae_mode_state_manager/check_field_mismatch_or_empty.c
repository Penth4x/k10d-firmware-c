/* @k10d check_field_mismatch_or_empty @ 0x1036404c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a field at offset 0x1c differs from a reference value or is zero.
 * summary:
 *   Calls get_value_from_byte_field to get a reference integer. Calls
 *   read_byte_at_offset_one_1051e4f6 and read_byte_at_offset_four_1051e508 on the pointer
 *   at offset 0x1c of param_1. Returns 1 if the value from read_byte_at_offset_one_1051e4f6
 *   does not match the reference or if the value from read_byte_at_offset_four_1051e508 is
 *   zero, otherwise returns 0. The specific meaning of the fields and reference value is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_field_mismatch_or_empty(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = get_value_from_byte_field(__frv_reg_unset(4));
  iVar3 = read_byte_at_offset_one_1051e4f6((int)param_1 + 0x1c);
  cVar4 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
  uVar1 = 0;
  if ((iVar3 != iVar2) || (cVar4 == '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}
