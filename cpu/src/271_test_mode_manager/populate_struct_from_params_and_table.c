/* @k10d populate_struct_from_params_and_table @ 0x1050fc4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Fills a struct pointed to by param_1+0x7f0 with fields from param_1 and a lookup table.
 * summary:
 *   The function decrements a counter at param_1+0x84 and writes the value 8 to the head of
 *   a struct at param_1+0x7f0. It calls get_or_init_sram_buffer_1052c5b8 to get a base
 *   pointer and get_SVD to get an index, using them to conditionally load two 16-bit values
 *   into offsets 0x34 and 0x36 of the target struct. The remaining fields of the struct are
 *   populated with values copied from various offsets in param_1 and constants (0x10, 6,
 *   0x80).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_from_params_and_table(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x84);
  iVar5 = iVar2 + -0x20;
  *(int *)(param_1 + 0x84) = iVar5;
  **(uint32_t **)(param_1 + 0x7f0) = 8;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x34) = 0x10;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x36) = 6;
  iVar1 = get_or_init_sram_buffer_1052c5b8();
  iVar4 = *(int *)(iVar1 + 0xa4);
  iVar3 = *(int *)(iVar1 + 0xa8);
  iVar1 = get_SVD((int *)(param_1 + 0x164));
  if (iVar1 < 0x51) {
    *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x34) = *(uint16_t *)(iVar4 + iVar1 * 2);
    *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x36) = *(uint16_t *)(iVar3 + iVar1 * 2);
  }
  *(short *)(*(int *)(param_1 + 0x7f0) + 4) = *(short *)(param_1 + 0xfe) + -0x20;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 6) = *(uint16_t *)(param_1 + 0x100);
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 8) = *(uint16_t *)(param_1 + 0xfe);
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 10) = *(uint16_t *)(param_1 + 0xfe);
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0xc) = *(uint16_t *)(param_1 + 0xfe);
  *(int *)(*(int *)(param_1 + 0x7f0) + 0x10) = iVar2;
  *(uint32_t *)(*(int *)(param_1 + 0x7f0) + 0x14) = *(uint32_t *)(param_1 + 0x34);
  *(int *)(*(int *)(param_1 + 0x7f0) + 0x18) = iVar5;
  *(uint32_t *)(*(int *)(param_1 + 0x7f0) + 0x1c) = *(uint32_t *)(param_1 + 0xf4);
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x24) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x26) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x28) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x2a) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x2c) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x2e) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x30) = 0x80;
  *(uint16_t *)(*(int *)(param_1 + 0x7f0) + 0x32) = 0x80;
  return;
}
