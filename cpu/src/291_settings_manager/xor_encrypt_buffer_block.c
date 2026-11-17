/* @k10d xor_encrypt_buffer_block @ 0x10531378
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer and XORs it with a 4-byte key and an incrementing counter.
 * summary:
 *   The function first copies param_2 bytes from param_2 to param_3. It then derives a
 *   4-byte key from four single-byte callees (read_byte_at_offset_three,
 *   read_byte_at_offset_5, read_byte_at_offset_six, read_byte_at_offset_seven) applied to
 *   param_4. It XORs the destination buffer in 4-byte chunks with the key and a counter
 *   that increments by 0x15e6b7 per chunk, handling the tail bytes individually. The
 *   arithmetic on param_1[1]*param_1[2] suggests param_1 holds width/height or similar
 *   dimensions for the buffer size.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void xor_encrypt_buffer_block(uint *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  iVar1 = (int)(((uint)((int)(param_1[1] * param_1[2]) >> 4) >> 0x1b) + param_1[1] * param_1[2]) >>
          5;
  bVar4 = read_byte_at_offset_three(param_4);
  bVar5 = read_byte_at_offset_5(param_4);
  bVar6 = read_byte_at_offset_six(param_4);
  bVar7 = read_byte_at_offset_seven(param_4);
  *param_1 = (uint)bVar4 << 0x18 | (uint)bVar5 << 0x10 | (uint)bVar6 << 8 | (uint)bVar7;
  uVar2 = param_1[1];
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *(uint8_t *)(uVar2 + param_3) = *(uint8_t *)(uVar2 + param_2);
  }
  if (0 < iVar1) {
    iVar3 = 0;
    iVar1 = iVar1 + -3;
    uVar2 = 0;
    if (2 < iVar1) {
      do {
        *(uint *)(iVar3 + param_3) = *(uint *)(iVar3 + param_3) ^ *param_1 ^ uVar2 ^ 0xffffffff;
        *(uint *)(iVar3 + 4 + param_3) =
             *(uint *)(iVar3 + 4 + param_3) ^ *param_1 ^ uVar2 + 0x15e6b7 ^ 0xffffffff;
        *(uint *)(iVar3 + 8 + param_3) =
             *(uint *)(iVar3 + 8 + param_3) ^ *param_1 ^ uVar2 + 0x2bcd6e ^ 0xffffffff;
        uVar2 = uVar2 + 0x41b425;
        iVar1 = iVar1 + -3;
        iVar3 = iVar3 + 0xc;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint *)(iVar3 + param_3) = *(uint *)(iVar3 + param_3) ^ *param_1 ^ uVar2 ^ 0xffffffff;
      uVar2 = uVar2 + 0x15e6b7;
      iVar3 = iVar3 + 4;
    }
  }
  return;
}
