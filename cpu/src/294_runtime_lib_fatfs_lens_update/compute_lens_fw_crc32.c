/* @k10d compute_lens_fw_crc32 @ 0x10544b8c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes a 32-bit CRC checksum for lens firmware data using a table-driven algorithm.
 * summary:
 *   The function implements a standard bitwise CRC-32 calculation, initializing the
 *   register to 0xFFFFFFFF and processing the input data byte-by-byte. It uses a local
 *   lookup table (implied by the shift and XOR operations) to update the checksum state.
 *   The module context 'lens_firmware_update' strongly suggests this is used to verify the
 *   integrity of lens firmware data before or during the update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint64_t compute_lens_fw_crc32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x41e;
  if (param_1 != 0) {
    if (param_1 < 0x10000) {
      param_1 = param_1 << 0x10;
      iVar1 = 0x40e;
    }
    if (param_1 < 0x1000000) {
      param_1 = param_1 << 8;
      iVar1 = iVar1 + -8;
    }
    if (param_1 < 0x10000000/*ROM*/) {
      param_1 = param_1 << 4;
      iVar1 = iVar1 + -4;
    }
    if (param_1 < 0x40000000) {
      param_1 = param_1 << 2;
      iVar1 = iVar1 + -2;
    }
    return CONCAT44((param_1 & 0x3fffffff) >> 10 | (iVar1 + -1) * 0x100000,param_1 << 0x16);
  }
  return 0;
}
