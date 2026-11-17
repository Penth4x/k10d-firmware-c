/* @k10d copy_structured_record_104df5f2 @ 0x104df5f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 6-byte record from a table indexed by a pointer and offset into two output
 *   buffers.
 * summary:
 *   The function reads a base pointer from param_1[0] and an index from param_1[2]. It
 *   calculates an offset (index * 0x3c) and copies 4 bytes into param_2 and 2 bytes into
 *   param_3. The 0x3c (60) byte stride suggests it is iterating through a fixed-size
 *   structure or table entry. No specific camera subsystem is identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_record_104df5f2(int *param_1,uint16_t *param_2,uint16_t *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = *(uint16_t *)(param_1[2] * 0x3c + iVar1);
  param_2[1] = *(uint16_t *)(param_1[2] * 0x3c + iVar1 + 2);
  *param_3 = *(uint16_t *)(param_1[2] * 0x3c + iVar1 + 4);
  *(uint8_t *)((int)param_3 + 3) = *(uint8_t *)(iVar1 + param_1[2] * 0x3c + 6);
  return;
}
