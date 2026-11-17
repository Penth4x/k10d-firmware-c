/* @k10d initialize_exposure_params @ 0x104dfe04
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a block of exposure-related parameters in a structure, reading initial
 *   values from a source object.
 * summary:
 *   The function writes default values (0, 0x3002, 0xffff) to various fields in the
 *   structure pointed to by param_2. It calls copy_buffer_if_enabled to read data from an
 *   object at param_1+0x38 into local variables, which are then stored in param_2. It also
 *   calls invoke_virtual_method_and_return_flag to read a string into a buffer, processes
 *   it with count_string_bytes, and copies the result into param_2. The function returns 1
 *   if the string length is less than 0x80, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_exposure_params(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  char acStack_90 [128];
  uint32_t uStack_10;
  byte bStack_9;
  
  *(uint32_t *)(param_2 + 0x2b8) = 0;
  *(uint16_t *)(param_2 + 700) = 0x3002;
  *(uint16_t *)(param_2 + 0x2be) = 0;
  uStack_10 = 0;
  copy_buffer_if_enabled(*(int *)(param_1 + 0x38),&uStack_10,4,0x14);
  *(uint32_t *)(param_2 + 0x2c0) = uStack_10;
  *(uint16_t *)(param_2 + 0x2c4) = 0;
  *(uint32_t *)(param_2 + 0x2c8) = 0;
  *(uint32_t *)(param_2 + 0x2cc) = 0;
  *(uint32_t *)(param_2 + 0x2d0) = 0;
  *(uint32_t *)(param_2 + 0x2d4) = 0;
  *(uint32_t *)(param_2 + 0x2d8) = 0;
  *(uint32_t *)(param_2 + 0x2dc) = 0;
  *(uint32_t *)(param_2 + 0x2e0) = 0;
  *(uint16_t *)(param_2 + 0x2e4) = 0;
  *(uint32_t *)(param_2 + 0x2e8) = 0;
  *(uint32_t *)(param_2 + 0x2ec) = 0;
  bStack_9 = 0;
  copy_buffer_if_enabled(*(int *)(param_1 + 0x38),&bStack_9,1,0x40);
  uVar3 = 1;
  if (bStack_9 < 0x80) {
    invoke_virtual_method_and_return_flag(*(int *)(param_1 + 0x38),acStack_90,0x41,(uint)bStack_9);
    iVar2 = count_string_bytes(acStack_90);
    iVar1 = *(int *)(param_2 + 0x224);
    iVar2 = iVar2 + 1;
    while (iVar2 != 0) {
      *(char *)(iVar2 + -1 + iVar1) = acStack_90[iVar2 + -1];
      iVar2 = iVar2 + -1;
    }
  }
  else {
    uVar3 = 0;
  }
  *(uint16_t *)(param_2 + 0x2aa) = 0xffff;
  *(uint16_t *)(param_2 + 0x2ac) = 0xffff;
  *(uint16_t *)(param_2 + 0x2ae) = 0xffff;
  *(uint16_t *)(param_2 + 0x2b0) = 0xffff;
  *(uint16_t *)(param_2 + 0x2b2) = 0xffff;
  *(uint16_t *)(param_2 + 0x2b4) = 0xffff;
  *(uint16_t *)(param_2 + 0x2b6) = 0xffff;
  return uVar3;
}
