/* @k10d check_buffer_length_mismatch @ 0x1036d170
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the length at offset 0x1c of param_1 differs from
 *   get_value_from_mode_byte's result or the flag is zero.
 * summary:
 *   Calls get_value_from_mode_byte on param_1 and
 *   read_byte_at_offset_one_1051e4f6/read_byte_at_offset_four_1051e508 on param_1+0x1c.
 *   Compares the integer result of read_byte_at_offset_one_1051e4f6 against
 *   get_value_from_mode_byte and checks if the byte from read_byte_at_offset_four_1051e508
 *   is zero. Returns 1 if either condition is true, otherwise 0. The specific meaning of
 *   the data at offset 0x1c is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_buffer_length_mismatch(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = get_value_from_mode_byte((int)param_1);
  iVar3 = read_byte_at_offset_one_1051e4f6((int)param_1 + 0x1c);
  cVar4 = read_byte_at_offset_four_1051e508((int)param_1 + 0x1c);
  uVar1 = 0;
  if ((iVar3 != iVar2) || (cVar4 == '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}
