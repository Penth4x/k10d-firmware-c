/* @k10d initialize_parameter_table @ 0x104a7102
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x26-byte buffer and populates it with a sequence of 16-bit values via a
 *   helper function.
 * summary:
 *   The function allocates a 0x26-byte heap block and stores the pointer in the object at
 *   offset 0x6c. It then calls write_two_byte_value_104a7246 repeatedly to write specific
 *   16-bit constants (5, 1, 2, 3, 0x80, 0x81, 2) and a loop-generated sequence of values
 *   from a stack array into the allocated buffer. The caller is a virtual method of class
 *   cls_105b6554.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_parameter_table(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iStack_1c;
  uint8_t *puStack_18;
  int iStack_14;
  
  puStack_18 = &stack0xfffffff8;
  uVar1 = heap_alloc_2(0x26);
  *(uint32_t *)(param_1 + 0x6c) = uVar1;
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(uVar1),(int)(5),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 2),(int)(1),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 4),(int)(2),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 6),(int)(3),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 8),(int)(0x80),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 10),(int)(0x81),(int)(1));
  write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + 0xc),(int)(2),(int)(1));
  iVar3 = 0xe;
  iStack_14 = 0;
  do {
    iStack_1c = 1;
    iVar4 = *(int *)(puStack_18 + -8);
    iVar2 = 0;
    do {
      write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + iVar3),(int)(*(uint16_t *)(iVar4 + iVar2)),(int)(1));
      write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + iVar3 + 2),(int)(*(uint16_t *)(iVar4 + iVar2 + 2)),(int)(1));
      write_two_byte_value_104a7246((uint32_t)(param_1),(uint8_t *)(*(int *)(param_1 + 0x6c) + iVar3 + 4),(int)(*(uint16_t *)(iVar4 + iVar2 + 4)),(int)(1));
      iVar2 = iVar2 + 6;
      iStack_1c = iStack_1c + -1;
      iVar3 = iVar3 + 6;
    } while (-1 < iStack_1c);
    iStack_14 = iStack_14 + 4;
    puStack_18 = puStack_18 + 4;
  } while (iStack_14 < 8);
  return;
}
