/* @k10d build_lens_update_packet_1053a8a4 @ 0x1053a8a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Populates a 0x20-byte lens firmware update packet with byte-swapped parameters and
 *   flags.
 * summary:
 *   Calculates the destination packet address within an array pointed to by param_2 using
 *   an index from param_1. Calls format_lens_fw_info_line to initialize the packet header,
 *   then copies and byte-swaps various 16-bit and 32-bit fields from the source structure
 *   (param_1) into the packet. Sets specific flag bits (0x08 and 0x10) in the packet's
 *   status byte based on bits 0 and 1 of a control word in the source structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_lens_update_packet_1053a8a4(int param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)((int)param_2 + (*(int *)(param_1 + 8) + -1) * 0x20);
  format_lens_fw_info_line(param_1 + 0x28,param_1 + 0x24,pvVar2);
  *(uint8_t *)((int)pvVar2 + 0xb) = *(uint8_t *)(param_1 + 0x1f);
  *(uint8_t *)((int)pvVar2 + 0xc) = 0;
  if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
    *(byte *)((int)pvVar2 + 0xc) = *(byte *)((int)pvVar2 + 0xc) | 8;
  }
  if ((*(uint *)(param_1 + 0x20) & 2) != 0) {
    *(byte *)((int)pvVar2 + 0xc) = *(byte *)((int)pvVar2 + 0xc) | 0x10;
  }
  *(ushort *)((int)pvVar2 + 0x18) =
       *(ushort *)(param_1 + 0x14) << 8 | *(ushort *)(param_1 + 0x14) >> 8;
  *(ushort *)((int)pvVar2 + 0x16) =
       *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8;
  *(ushort *)((int)pvVar2 + 0x10) =
       *(ushort *)(param_1 + 0x18) << 8 | *(ushort *)(param_1 + 0x18) >> 8;
  *(ushort *)((int)pvVar2 + 0xe) =
       *(ushort *)(param_1 + 0x1a) << 8 | *(ushort *)(param_1 + 0x1a) >> 8;
  *(uint8_t *)((int)pvVar2 + 0xd) = *(uint8_t *)(param_1 + 0x1e);
  *(ushort *)((int)pvVar2 + 0x12) =
       *(ushort *)(param_1 + 0x1c) << 8 | *(ushort *)(param_1 + 0x1c) >> 8;
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)((int)pvVar2 + 0x1c) =
       uVar1 << 0x18 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18 | (uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_1 + 0xc) & 0xffff;
  *(ushort *)((int)pvVar2 + 0x1a) = (ushort)(uVar1 << 8) | (ushort)(uVar1 >> 8);
  *(ushort *)((int)pvVar2 + 0x14) =
       (ushort)((*(uint *)(param_1 + 0xc) >> 0x10) << 8) |
       (ushort)(byte)(*(uint *)(param_1 + 0xc) >> 0x18);
  return;
}
