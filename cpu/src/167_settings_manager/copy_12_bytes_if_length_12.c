/* @k10d copy_12_bytes_if_length_12 @ 0x1047764c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 12 bytes from param_2 to param_1+0x11 if count_string_bytes(param_2) returns 0xc
 *   and validate_iso_code_string succeeds.
 * summary:
 *   Checks a length/size value from count_string_bytes(param_2) against 0xc (12). If
 *   matched, calls get_or_init_sram_buffer_10478858 and validate_iso_code_string with the
 *   result and param_2. On success, copies 12 bytes (3 iterations of 4) from param_2 to
 *   param_1+0x11. Returns 1 on success, 0 otherwise. The specific camera subsystem role is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_12_bytes_if_length_12(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  iVar3 = count_string_bytes(param_2);
  uVar5 = 0;
  if (iVar3 == 0xc) {
    uVar4 = get_or_init_sram_buffer_10478858();
    iVar3 = validate_iso_code_string(uVar4,param_2,(ushort *)0x0);
    if (iVar3 != 0) {
      iVar1 = 0;
      iVar2 = 2;
      iVar3 = 0x11;
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
