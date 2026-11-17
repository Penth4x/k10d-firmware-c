/* @k10d setting_get @ 0x10484e80
 * name: verified (structural evidence: decomp; setting 0xa9 = UI language (0 English, 1 French, ...))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads setting param_2 from the working copy (ids 0xb0-0x127 through per-mode sub-
 *   blocks).
 * summary:
 *   VERIFIED: decomp; setting 0xa9 = UI language (0 English, 1 French, ...)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t setting_get(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((param_2 < 0xb0) || (0xd7 < param_2)) {
    if ((param_2 < 0xd8) || (0xff < param_2)) {
      if ((param_2 < 0x100) || (0x127 < param_2)) {
        iVar1 = param_1 + 0x14;
        goto LAB_10484f04;
      }
      iVar1 = read_byte_from_offset(param_1 + 0x14,0x100);
    }
    else {
      iVar1 = read_byte_from_offset(param_1 + 0x14,0xd8);
    }
  }
  else {
    iVar1 = read_byte_from_offset(param_1 + 0x14,0xb0);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = param_1 + 0x14;
  }
LAB_10484f04:
  uVar2 = read_byte_from_offset(iVar1,param_2);
  return uVar2;
}
