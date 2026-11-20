/* @k10d build_lens_fw_update_packet @ 0x1053a6e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Constructs a 0x20-byte command packet for lens firmware update and dispatches it via a
 *   communication helper.
 * summary:
 *   Initializes a 32-byte stack buffer (fill_byte_array), copies 11 bytes from param_3
 *   (memcpy_bytes), and sets a length field to 8. It calls call_single_helper_1047f97e to
 *   populate four integer fields, then packs these values into 16-bit big-endian fields
 *   within the buffer. Finally, it passes the constructed buffer and the first two
 *   parameters to write_data_block_to_buffer, likely for transmission to the lens.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_lens_fw_update_packet(void *param_1,int *param_2,void *param_3)

{
  uintptr_t sp;
  uint8_t auStack_4c [11];
  uint8_t uStack_41;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint16_t uStack_3a;
  uint16_t uStack_36;
  uint16_t uStack_34;
  int iStack_2c;
  int iStack_28;
  uint uStack_20;
  int iStack_1c;
  
  fill_byte_array(auStack_4c,0,0x20);
  memcpy_bytes(auStack_4c,param_3,0xb);
  uStack_41 = 8;
  call_single_helper_1047f97e((uint32_t)(&iStack_2c));
  uStack_3c = (uint16_t)(((uStack_20 | (iStack_1c + 1) * 0x20) & 0xff) << 8);
  uStack_3e = (uint16_t)(((iStack_2c / 2 | iStack_28 << 5) & 0xffU) << 8);
  uStack_3a = uStack_3c;
  uStack_36 = uStack_3e;
  uStack_34 = uStack_3c;
  write_data_block_to_buffer(param_1,param_2,auStack_4c);
  return;
}
