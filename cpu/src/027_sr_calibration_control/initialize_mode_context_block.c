/* @k10d initialize_mode_context_block @ 0x1036f200
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Populates a 16-byte field at offset 0xa4 of a context object based on a mode selector
 *   at offset 0xb0.
 * summary:
 *   The function branches on the value at param_1+0xb0. If it is 2, it calls 0x103891e4 to
 *   fill a stack buffer, copies it to param_1+0xa4, calls free_heap_if_flagged_1045c402,
 *   and sets param_1+0x2c to param_1+0x80. If it is 1 (and param_1+0xb4 is 1), it calls
 *   0x104089fe, copies the result to param_1+0xa4, calls free_heap_if_flagged_1045c402, and
 *   sets param_1+0x2c to param_1+0x58. Otherwise, it copies a constant 16-byte block from a
 *   fixed address to param_1+0xa4 and sets param_1+0x2c to param_1+0x30. The specific
 *   subsystem (e.g., exposure mode, AF mode) is not identifiable from the provided
 *   pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_mode_context_block(void *param_1)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_20 [12];
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  if (*(int *)((int)param_1 + 0xb0) == 2) {
    (*(code *)0x103891e4/*ROM*/)(auStack_20,(int)param_1 + 0x80);
    iVar2 = 8;
    do {
      iVar1 = iVar2 + -4;
      *(uint32_t *)((int)param_1 + iVar2 + 0xa4) = *(uint32_t *)(&stack0xffffffdc + iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    free_heap_if_flagged_1045c402(auStack_20,2);
    *(int *)((int)param_1 + 0x2c) = (int)param_1 + 0x80;
  }
  else if ((*(int *)((int)param_1 + 0xb0) == 1) && (*(int *)((int)param_1 + 0xb4) == 1)) {
    (*(code *)0x104089fe/*ROM*/)(auStack_10,(int)param_1 + 0x58);
    iVar2 = 8;
    do {
      iVar1 = iVar2 + -4;
      *(uint32_t *)((int)param_1 + iVar2 + 0xa4) = *(uint32_t *)((int)&uStack_14 + iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    free_heap_if_flagged_1045c402(auStack_10,2);
    *(int *)((int)param_1 + 0x2c) = (int)param_1 + 0x58;
  }
  else {
    iVar2 = 8;
    do {
      iVar1 = iVar2 + -4;
      *(uint32_t *)((int)param_1 + iVar2 + 0xa4) = *(uint32_t *)(iVar2 + -0x7ffe7fac);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    *(int *)((int)param_1 + 0x2c) = (int)param_1 + 0x30;
  }
  return;
}
