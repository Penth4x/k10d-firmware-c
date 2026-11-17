/* @k10d copy_8_byte_block_if_valid @ 0x1047744a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies an 8-byte block from param_2 to param_1+8 if count_string_bytes returns 8 and
 *   parse_three_digit_ascii_value succeeds.
 * summary:
 *   Checks a condition via count_string_bytes(param_2) expecting value 8. If true, calls
 *   get_or_init_sram_buffer_10478858 and parse_three_digit_ascii_value; on success, copies
 *   8 bytes from param_2 to param_1+8 in two 4-byte chunks. Returns 1 on success, 0
 *   otherwise. The specific role of the 8-byte block and the callees is not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_8_byte_block_if_valid(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  iVar3 = count_string_bytes(param_2);
  uVar5 = 0;
  if (iVar3 == 8) {
    uVar4 = get_or_init_sram_buffer_10478858();
    iVar3 = parse_three_digit_ascii_value(uVar4,param_2,0);
    if (iVar3 != 0) {
      iVar1 = 0;
      iVar2 = 1;
      iVar3 = 8;
      do {
        *(char *)(param_1 + iVar3) = param_2[iVar1];
        *(char *)(param_1 + iVar3 + 1) = param_2[iVar1 + 1];
        *(char *)(param_1 + iVar3 + 2) = param_2[iVar1 + 2];
        *(char *)(param_1 + iVar3 + 3) = param_2[iVar1 + 3];
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 4;
      } while (-1 < iVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}
