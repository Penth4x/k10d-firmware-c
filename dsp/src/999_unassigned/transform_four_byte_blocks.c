/* @k10d transform_four_byte_blocks @ 0x000c134e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes 16 bytes from param_1 into param_2 by applying a per-byte arithmetic
 *   transformation using a lookup table and helper functions.
 * summary:
 *   The function iterates 4 times, processing 4 bytes per iteration (16 bytes total). For
 *   each byte, it reads a corresponding value from a global table at 0x3c540, calls
 *   read_shifted_status_field and compute_buffer_overflow_delta, and passes the result to
 *   clamp_value_to_range_000d9ac0 with a mask of 0xff. The output is written to param_2.
 *   The specific roles of the helper functions and the global table are not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transform_four_byte_blocks(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint8_t uVar5;
  int iVar6;
  uint32_t uStack_1c;
  
  iVar6 = 0;
  uStack_1c = 4;
  do {
    bVar1 = *(byte *)(iVar6 + param_1);
    cVar2 = *(char *)(iVar6 + 0x3c540);
    sVar3 = read_shifted_status_field();
    sVar4 = compute_buffer_overflow_delta();
    uVar5 = clamp_value_to_range_000d9ac0((int)(short)(((ushort)bVar1 + (short)cVar2 + sVar3) - sVar4),0,0xff);
    *(uint8_t *)(iVar6 + param_2) = uVar5;
    bVar1 = *(byte *)(param_1 + iVar6 + 1);
    cVar2 = *(char *)(iVar6 + 0x3c541);
    sVar3 = read_shifted_status_field();
    sVar4 = compute_buffer_overflow_delta();
    uVar5 = clamp_value_to_range_000d9ac0((int)(short)(((ushort)bVar1 + (short)cVar2 + sVar3) - sVar4),0,0xff);
    *(uint8_t *)(param_2 + iVar6 + 1) = uVar5;
    bVar1 = *(byte *)(param_1 + iVar6 + 2);
    cVar2 = *(char *)(iVar6 + 0x3c542);
    sVar3 = read_shifted_status_field();
    sVar4 = compute_buffer_overflow_delta();
    uVar5 = clamp_value_to_range_000d9ac0((int)(short)(((ushort)bVar1 + (short)cVar2 + sVar3) - sVar4),0,0xff);
    *(uint8_t *)(param_2 + iVar6 + 2) = uVar5;
    bVar1 = *(byte *)(param_1 + iVar6 + 3);
    cVar2 = *(char *)(iVar6 + 0x3c543);
    sVar3 = read_shifted_status_field();
    sVar4 = compute_buffer_overflow_delta();
    uVar5 = clamp_value_to_range_000d9ac0((int)(short)(((ushort)bVar1 + (short)cVar2 + sVar3) - sVar4),0,0xff);
    *(uint8_t *)(param_2 + iVar6 + 3) = uVar5;
    iVar6 = iVar6 + 4;
    uStack_1c = uStack_1c + -1;
  } while (0 < uStack_1c);
  return;
}
