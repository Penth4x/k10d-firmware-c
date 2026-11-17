/* @k10d convert_bytes_to_uint_array @ 0x1051b4ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer into an array of 32-bit integers, handling endianness based on a
 *   flag.
 * summary:
 *   The function calculates a source pointer using offsets from param_1 and calls
 *   allocate_buffer_segment to validate or retrieve the buffer. It then iterates through
 *   param_3 elements, reading 4 bytes at a time and assembling them into 32-bit integers in
 *   param_2. The byte order (endianness) is determined by the value at param_1 + 0x20: if
 *   zero, it uses little-endian assembly (LSB first); otherwise, it uses big-endian
 *   assembly (MSB first). It returns 1 on success (if allocate_buffer_segment returns non-
 *   zero) and 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t convert_bytes_to_uint_array(int param_1,uint *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar8 = *(int *)(param_1 + 0x1c) + param_4 + *(int *)(param_1 + 0x24);
  iVar7 = allocate_buffer_segment(param_1,iVar8,param_3 << 2);
  if (iVar7 != 0) {
    pbVar5 = (byte *)(*(int *)(param_1 + 4) + (iVar8 - *(int *)(param_1 + 0xc)));
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (param_3 != 0) {
        param_3 = param_3 + -3;
        if (2 < param_3) {
          do {
            *param_2 = (uint)pbVar5[3] << 0x18 | (uint)pbVar5[2] << 0x10 | (uint)pbVar5[1] << 8 |
                       (uint)*pbVar5;
            param_2[1] = (uint)pbVar5[7] << 0x18 | (uint)pbVar5[6] << 0x10 | (uint)pbVar5[5] << 8 |
                         (uint)pbVar5[4];
            pbVar6 = pbVar5 + 8;
            pbVar2 = pbVar5 + 0xb;
            pbVar3 = pbVar5 + 10;
            pbVar4 = pbVar5 + 9;
            pbVar5 = pbVar5 + 0xc;
            param_2[2] = (uint)*pbVar2 << 0x18 | (uint)*pbVar3 << 0x10 | (uint)*pbVar4 << 8 |
                         (uint)*pbVar6;
            param_3 = param_3 + -3;
            param_2 = param_2 + 3;
          } while (-1 < param_3);
        }
        for (param_3 = param_3 + 2; -1 < param_3; param_3 = param_3 + -1) {
          pbVar2 = pbVar5 + 3;
          pbVar3 = pbVar5 + 2;
          pbVar4 = pbVar5 + 1;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 4;
          *param_2 = (uint)*pbVar2 << 0x18 | (uint)*pbVar3 << 0x10 | (uint)*pbVar4 << 8 |
                     (uint)bVar1;
          param_2 = param_2 + 1;
        }
      }
    }
    else if (param_3 != 0) {
      param_3 = param_3 + -3;
      if (2 < param_3) {
        do {
          *param_2 = (uint)*pbVar5 << 0x18 | (uint)pbVar5[1] << 0x10 | (uint)pbVar5[2] << 8 |
                     (uint)pbVar5[3];
          param_2[1] = (uint)pbVar5[4] << 0x18 | (uint)pbVar5[5] << 0x10 | (uint)pbVar5[6] << 8 |
                       (uint)pbVar5[7];
          pbVar6 = pbVar5 + 8;
          pbVar2 = pbVar5 + 9;
          pbVar3 = pbVar5 + 10;
          pbVar4 = pbVar5 + 0xb;
          pbVar5 = pbVar5 + 0xc;
          param_2[2] = (uint)*pbVar6 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 |
                       (uint)*pbVar4;
          param_3 = param_3 + -3;
          param_2 = param_2 + 3;
        } while (-1 < param_3);
      }
      for (param_3 = param_3 + 2; -1 < param_3; param_3 = param_3 + -1) {
        bVar1 = *pbVar5;
        pbVar2 = pbVar5 + 1;
        pbVar3 = pbVar5 + 2;
        pbVar4 = pbVar5 + 3;
        pbVar5 = pbVar5 + 4;
        *param_2 = (uint)bVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4;
        param_2 = param_2 + 1;
      }
    }
    uStack_c = 1;
  }
  return uStack_c;
}
