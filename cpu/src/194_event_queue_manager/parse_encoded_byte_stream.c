/* @k10d parse_encoded_byte_stream @ 0x1049078e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Parses a null-terminated byte stream, resolving codes via lookup tables and writing
 *   data blocks via a helper.
 * summary:
 *   The function iterates through a null-terminated byte stream (param_2), interpreting
 *   bytes as either direct indices or multi-byte escape sequences. It uses lookup tables at
 *   0x10363130 and 0x10363134 to map character codes to memory offsets, then calls
 *   func_0x1049099e to write 0x18 or 0x30 byte blocks to a destination buffer (param_1).
 *   The param_10 argument selects between different character sets or modes (e.g., 8,
 *   9-13). The function returns early if an invalid byte (0xd) is encountered in certain
 *   contexts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104907ba) overlaps instruction at (ram,0x104907b8)
    */

void parse_encoded_byte_stream(uint32_t param_1,byte *param_2,short param_3,short param_4,uint32_t param_5,
                 uint16_t param_6,uint16_t param_7,uint16_t param_8,uint16_t param_9,
                 byte param_10,uint8_t param_11,uint8_t param_12,uint8_t param_13)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_4c [40];
  int iStack_10;
  
  puVar9 = auStack_4c;
  iStack_10 = 0;
  iVar6 = count_string_bytes((char *)param_2);
  if (iVar6 != 0) {
    psVar8 = (short *)0x0;
    uVar4 = (uint)param_10;
    if ((((uVar4 == 9) || (uVar4 == 10)) || (uVar4 == 0xb)) || ((uVar4 == 0xc || (uVar4 == 0xd)))) {
      iVar6 = (uVar4 - 9) * 0xc;
      iStack_10 = *(int *)(iVar6 + 0x1036313c/*ROM*/);
      psVar8 = *(short **)(iVar6 + 0x10363140/*ROM*/);
    }
    bVar2 = *param_2;
    sVar7 = param_3;
    while (bVar2 != 0) {
      bVar2 = *param_2;
      uVar4 = (uint)bVar2;
      if (((uVar4 < 0x80) || (0x9e < uVar4)) && (uVar4 < 0xe0)) {
        if (((uVar4 < 0x20) || (0x7e < uVar4)) && (uVar4 < 0xa0)) {
          if (uVar4 != 0xd) {
            return;
          }
          param_4 = param_4 + 0x30;
          param_2 = param_2 + 1;
          sVar7 = param_3;
        }
        else {
          if (uVar4 < 0xa0) {
            iVar6 = iRam10363130 + (uVar4 - 0x20) * 0x120;
          }
          else if (param_10 == 8) {
            iVar6 = iRam10363134 + (uVar4 - 0xa0) * 0x120;
          }
          else {
            iVar6 = iRam10363130 + (uVar4 - 0x40) * 0x120;
          }
          *(short *)(puVar9 + 2) = sVar7;
          *(short *)(puVar9 + 6) = param_4;
          *(uint32_t *)(puVar9 + 8) = param_5;
          *(uint16_t *)(puVar9 + 0xe) = param_6;
          *(uint16_t *)(puVar9 + 0x12) = param_7;
          *(uint16_t *)(puVar9 + 0x16) = param_8;
          *(uint16_t *)(puVar9 + 0x1a) = param_9;
          puVar9[0x1f] = param_11;
          puVar9[0x23] = param_12;
          puVar9[0x27] = param_13;
          expand_2bit_pixel_data((void *)(param_1),(void *)(iVar6),(int)(0x18),(int)(0x30));
          param_2 = param_2 + 1;
          sVar7 = sVar7 + 0x18;
        }
code_r0x10490954:
        bVar2 = *param_2;
      }
      else {
        pbVar3 = param_2 + 1;
        if (*psVar8 == 0) {
          param_2 = param_2 + 2;
          goto code_r0x10490954;
        }
        param_2 = param_2 + 2;
        psVar5 = psVar8;
        do {
          if (*psVar5 == CONCAT11(bVar2,*pbVar3)) {
            uVar1 = psVar5[1];
            *(short *)(puVar9 + 2) = sVar7;
            *(short *)(puVar9 + 6) = param_4;
            *(uint32_t *)(puVar9 + 8) = param_5;
            *(uint16_t *)(puVar9 + 0xe) = param_6;
            *(uint16_t *)(puVar9 + 0x12) = param_7;
            *(uint16_t *)(puVar9 + 0x16) = param_8;
            *(uint16_t *)(puVar9 + 0x1a) = param_9;
            puVar9[0x1f] = param_11;
            puVar9[0x23] = param_12;
            puVar9[0x27] = param_13;
            expand_2bit_pixel_data((void *)(param_1),(void *)((uint)uVar1 * 0x240 + iStack_10),(int)(0x30),(int)(0x30));
            sVar7 = sVar7 + 0x30;
            goto code_r0x10490954;
          }
          psVar5 = psVar5 + 2;
        } while (*psVar5 != 0);
        bVar2 = *param_2;
      }
    }
  }
  return;
}
