/* @k10d allocate_buffer_by_mode @ 0x10484f50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory buffer of a size determined by the mode parameter and a base offset.
 * summary:
 *   The function selects a base size (0xb0, 0xd8, or 0x100) based on param_3 and adds
 *   param_2 (after validation and offset adjustment) to determine the final allocation
 *   size. It calls read_byte_from_offset with a pointer derived from param_1 and the
 *   calculated size. If the first allocation attempt fails, it retries using a pointer
 *   stored at param_1 + 0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_by_mode(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = param_1 + 0x14;
    iVar1 = read_byte_from_offset(iVar3,0xb0);
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
  }
  else if (param_3 == 1) {
    if ((param_2 < 0xb0) || (0xd7 < param_2)) {
      return 0;
    }
    iVar3 = param_1 + 0x14;
    iVar1 = read_byte_from_offset(iVar3,0xd8);
    param_2 = param_2 + 0x28;
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    if (param_2 < 0xb0) {
      return 0;
    }
    if (0xd7 < param_2) {
      return 0;
    }
    iVar3 = param_1 + 0x14;
    iVar1 = read_byte_from_offset(iVar3,0x100);
    param_2 = param_2 + 0x50;
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
  }
  uVar2 = read_byte_from_offset(iVar3,param_2);
  return uVar2;
}
