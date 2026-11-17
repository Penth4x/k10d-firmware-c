/* @k10d swap_lens_info_fields @ 0x1053a9b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies and byte-swaps fields from a lens data record into a destination structure.
 * summary:
 *   The function indexes into an array of 0x20-byte records using param_2, then copies
 *   specific fields to param_3. It performs byte-swapping on 16-bit and 32-bit values,
 *   indicating a conversion between big-endian (FR60Lite) and little-endian (lens) formats.
 *   It also decodes a status byte at offset 0xc to set flags in the destination. The module
 *   context 'lens_firmware_update' and the byte-swapping behavior strongly suggest this is
 *   preparing lens data for communication with the lens CPU.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_lens_info_fields(void *param_1,uint param_2,void *param_3)

{
  void *pvVar1;
  
  *(uint *)((int)param_3 + 8) = param_2;
  pvVar1 = (void *)((int)param_1 + (param_2 - 1) * 0x20);
  *(uint *)((int)param_3 + 0xc) =
       ((*(ushort *)((int)pvVar1 + 0x14) & 0xff) << 8 |
       (int)(uint)*(ushort *)((int)pvVar1 + 0x14) >> 8) << 0x10 |
       (*(ushort *)((int)pvVar1 + 0x1a) & 0xff) << 8 |
       (int)(uint)*(ushort *)((int)pvVar1 + 0x1a) >> 8;
  *(uint *)((int)param_3 + 0x10) =
       (*(uint *)((int)pvVar1 + 0x1c) & 0xff0000) >> 8 | *(uint *)((int)pvVar1 + 0x1c) >> 0x18 |
       (*(uint *)((int)pvVar1 + 0x1c) & 0xff00) << 8 | *(int *)((int)pvVar1 + 0x1c) << 0x18;
  *(ushort *)((int)param_3 + 0x14) =
       *(short *)((int)pvVar1 + 0x18) << 8 | *(ushort *)((int)pvVar1 + 0x18) >> 8;
  *(ushort *)((int)param_3 + 0x16) =
       *(short *)((int)pvVar1 + 0x16) << 8 | *(ushort *)((int)pvVar1 + 0x16) >> 8;
  *(ushort *)((int)param_3 + 0x18) =
       *(short *)((int)pvVar1 + 0x10) << 8 | *(ushort *)((int)pvVar1 + 0x10) >> 8;
  *(ushort *)((int)param_3 + 0x1a) =
       *(short *)((int)pvVar1 + 0xe) << 8 | *(ushort *)((int)pvVar1 + 0xe) >> 8;
  *(ushort *)((int)param_3 + 0x1c) =
       *(short *)((int)pvVar1 + 0x12) << 8 | *(ushort *)((int)pvVar1 + 0x12) >> 8;
  *(uint8_t *)((int)param_3 + 0x1e) = *(uint8_t *)((int)pvVar1 + 0xd);
  *(uint8_t *)((int)param_3 + 0x1f) = *(uint8_t *)((int)pvVar1 + 0xb);
  if (*(int *)((int)param_3 + 0x20) == 0xff) {
    if ((*(byte *)((int)pvVar1 + 0xc) & 0x18) == 0) {
      if (param_2 < 2) {
        *(uint32_t *)((int)param_3 + 0x20) = 0;
      }
      else {
        *(uint32_t *)((int)param_3 + 0x20) = 0x10;
      }
    }
    else {
      *(uint32_t *)((int)param_3 + 0x20) = 0;
      if ((*(byte *)((int)pvVar1 + 0xc) & 8) != 0) {
        *(uint32_t *)((int)param_3 + 0x20) = 1;
      }
      if ((*(byte *)((int)pvVar1 + 0xc) & 0x10) != 0) {
        *(uint *)((int)param_3 + 0x20) = *(uint *)((int)param_3 + 0x20) | 2;
      }
    }
  }
  copy_lens_fw_field((int)pvVar1,(char *)((int)param_3 + 0x28));
  copy_three_char_field((int)pvVar1,(int)param_3 + 0x24);
  return;
}
