/* @k10d write_parameter_block_to_mmio @ 0x10502484
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes a 16-word parameter block to a device via a series of MMIO register writes.
 * summary:
 *   The function takes a base address (param_2 + 4) and a pointer to a 16-word array
 *   (param_3). It iterates through the array, calling a sequence of 16 distinct functions
 *   (0x104550ca through 0x104554f0) to write each word to a specific register offset. One
 *   call (0x10455192) takes three words from the array as arguments. The specific device
 *   and register map are not identified in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_parameter_block_to_mmio(uint32_t param_1,int param_2,uint16_t *param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_10 [4];
  
  puVar4 = auStack_10;
  param_2 = param_2 + 4;
  (*(code *)0x104550ca/*ROM*/)(param_2,*param_3);
  (*(code *)0x104550e8/*ROM*/)(param_2,param_3[1]);
  (*(code *)0x10455106/*ROM*/)(param_2,param_3[2]);
  (*(code *)0x10455120/*ROM*/)(param_2,param_3[3]);
  (*(code *)0x1045513a/*ROM*/)(param_2,param_3[4]);
  (*(code *)0x10455164/*ROM*/)(param_2,param_3[5]);
  (*(code *)0x10455200/*ROM*/)(param_2,param_3[6]);
  (*(code *)0x1045522e/*ROM*/)(param_2,param_3[7]);
  (*(code *)0x10455260/*ROM*/)(param_2,param_3[8]);
  (*(code *)0x1045528e/*ROM*/)(param_2,param_3[9]);
  uVar1 = param_3[10];
  uVar2 = param_3[0xb];
  uVar3 = param_3[0xc];
  *(uint16_t *)(puVar4 + 2) = param_3[0xd];
  (*(code *)0x10455192/*ROM*/)(param_2,uVar1,uVar2,uVar3);
  (*(code *)0x104554c6/*ROM*/)(param_2,param_3[0xe]);
  (*(code *)0x104554d4/*ROM*/)(param_2,param_3[0xf]);
  (*(code *)0x104554e2/*ROM*/)(param_2,param_3[0x10]);
  (*(code *)0x104554f0/*ROM*/)(param_2,param_3[0x11]);
  return;
}
