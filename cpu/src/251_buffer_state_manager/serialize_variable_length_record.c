/* @k10d serialize_variable_length_record @ 0x104e1c20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Serializes a structured record from SDRAM into a stream using length-prefixed fields.
 * summary:
 *   The function reads a series of fixed and variable-length fields from SDRAM (starting at
 *   0x80010a00) and writes them sequentially to a destination object via
 *   copy_bytes_if_flag_set and bounded_byte_copy. It handles variable-length arrays by
 *   reading a count from SDRAM and then iterating to write each element. The final return
 *   value appears to be the total number of bytes or units written to the stream.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int serialize_variable_length_record(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint16_t uStack_a;
  
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a00/*SDRAM*/,2,0xc);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a04/*SDRAM*/,4,0xe);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a08/*SDRAM*/,2,0x12);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a0c/*SDRAM*/,1,0x14);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a14/*SDRAM*/,2,0x15);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a18/*SDRAM*/,4,0x17);
  uVar3 = 0;
  iVar1 = 0x1b;
  if (uRam80010a18 != 0) {
    iVar2 = 0;
    do {
      uStack_a = *(uint16_t *)(iVar2 + -0x7ffef62c);
      copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),&uStack_a,2,iVar1);
      iVar2 = iVar2 + 2;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar3 < uRam80010a18);
  }
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a20/*SDRAM*/,4,iVar1);
  uVar3 = 0;
  iVar1 = iVar1 + 4;
  if (uRam80010a20 != 0) {
    iVar2 = 0;
    do {
      copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)(iVar2 + -0x7ffef60e),2,iVar1);
      iVar2 = iVar2 + 2;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar3 < uRam80010a20);
  }
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a28/*SDRAM*/,4,iVar1);
  uVar3 = 0;
  iVar1 = iVar1 + 4;
  if (uRam80010a28 != 0) {
    iVar2 = 0;
    do {
      copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)(iVar2 + -0x7ffef60a),2,iVar1);
      iVar2 = iVar2 + 2;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar3 < uRam80010a28);
  }
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a30/*SDRAM*/,4,iVar1);
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)0x80010a38/*SDRAM*/,4,iVar1 + 4);
  uVar3 = 0;
  iVar1 = iVar1 + 8;
  if (uRam80010a38 != 0) {
    iVar2 = 0;
    do {
      copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),(void *)(iVar2 + -0x7ffef608),2,iVar1);
      iVar2 = iVar2 + 2;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar3 < uRam80010a38);
  }
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),pbRam80010a40,1,iVar1);
  bounded_byte_copy(*(uint **)((int)param_1 + 0xc),pbRam80010a40 + 1,(uint)*pbRam80010a40 << 1,iVar1 + 1)
  ;
  iVar1 = iVar1 + 1 + (uint)*pbRam80010a40 * 2;
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),pbRam80010a44,1,iVar1);
  iVar1 = iVar1 + 1;
  bounded_byte_copy(*(uint **)((int)param_1 + 0xc),pbRam80010a44 + 1,(uint)*pbRam80010a44 << 1,iVar1);
  iVar1 = iVar1 + (uint)*pbRam80010a44 * 2;
  copy_bytes_if_flag_set(*(int *)((int)param_1 + 0xc),pbRam80010a48,1,iVar1);
  iVar1 = iVar1 + 1;
  bounded_byte_copy(*(uint **)((int)param_1 + 0xc),pbRam80010a48 + 1,(uint)*pbRam80010a48 << 1,iVar1);
  iVar1 = iVar1 + (uint)*pbRam80010a48 * 2;
  copy_bytes_if_flag_set((int)(*(int *)((int)param_1 + 0xc)),(void *)(pvRam80010a4c),(int)(1),(int)(iVar1));
  return iVar1 + 1;
}
