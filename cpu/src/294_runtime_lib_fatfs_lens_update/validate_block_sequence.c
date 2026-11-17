/* @k10d validate_block_sequence @ 0x1053a78c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks a sequence of 0x20-byte blocks for termination markers, status flags, and
 *   checksums.
 * summary:
 *   Iterates through param_2 blocks of 0x20 bytes starting at param_1. For each block, it
 *   checks for termination markers (0xe5 or 0x00), verifies a status byte at offset 0xb,
 *   compares a checksum byte at offset 0xd against a value computed by
 *   compute_byte_checksum, and checks a flag at offset 0x1a. Returns 0 on success or a
 *   negative error code with the failing index in param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_block_sequence(void *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    if (*(char *)((int)param_1 + 0xb) == '\x0f') {
      *param_3 = 1;
      return 0xfffffe6e;
    }
  }
  else {
    uVar1 = compute_byte_checksum((void *)((int)param_1 + (param_2 - 1) * 0x20));
    uVar3 = 0;
    iVar2 = 0;
    uVar4 = param_2;
    while (uVar4 = uVar4 - 1, uVar3 < param_2 - 1) {
      if ((*(char *)(iVar2 + (int)param_1) == -0x1b) || (*(char *)(iVar2 + (int)param_1) == '\0')) {
        *param_3 = uVar3;
        return 0xfffffe70;
      }
      if (*(char *)((int)param_1 + iVar2 + 0xb) != '\x0f') {
        *param_3 = uVar3;
        return 0xfffffe6e;
      }
      if ((*(byte *)(iVar2 + (int)param_1) & 0xffffffbf) != uVar4) {
        *param_3 = uVar3 + 1;
        return 0xfffffe6e;
      }
      if (uVar1 != *(byte *)((int)param_1 + iVar2 + 0xd)) {
        *param_3 = uVar3 + 1;
        return 0xfffffe6e;
      }
      uVar3 = uVar3 + 1;
      if (*(short *)((int)param_1 + iVar2 + 0x1a) != 0) {
        *param_3 = uVar3;
        return 0xfffffe6e;
      }
      iVar2 = iVar2 + 0x20;
    }
    if ((*(char *)((param_2 - 1) * 0x20 + (int)param_1) == -0x1b) ||
       (*(char *)((param_2 - 1) * 0x20 + (int)param_1) == '\0')) {
      *param_3 = param_2 - 1;
      return 0xfffffe70;
    }
    if ((*(byte *)((int)param_1 + (param_2 - 1) * 0x20 + 0xb) & 8) != 0) {
      *param_3 = param_2;
      return 0xfffffe6e;
    }
  }
  return 0;
}
