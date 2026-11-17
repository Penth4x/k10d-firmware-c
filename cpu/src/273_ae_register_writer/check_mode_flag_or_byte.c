/* @k10d check_mode_flag_or_byte @ 0x10514d16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a callee on a struct field is non-zero or a specific byte is zero, else 0.
 * summary:
 *   Reads the 4-byte value at offset 0x58 of the input object and passes it to
 *   count_active_entries_in_seven_slots_105136e0. If the callee returns non-zero, or if the
 *   byte at offset 0x29f is zero, the function returns 1. Otherwise it returns 0. The
 *   specific meaning of the fields and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_flag_or_byte(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
  if ((iVar1 != 0) || (uVar2 = 0, *(char *)(param_1 + 0x29f) == '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}
