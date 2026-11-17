/* @k10d map_id_to_bitmask @ 0x1039f154
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_id_to_bitmask(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == *(int *)(param_1 + 0x60)) {
    uVar1 = 0x10000;
  }
  else if (param_2 == *(int *)(param_1 + 100)) {
    uVar1 = 0x20000;
  }
  else if (param_2 == *(int *)(param_1 + 0x68)) {
    uVar1 = 0x40000;
  }
  else if (param_2 == *(int *)(param_1 + 0x6c)) {
    uVar1 = 0x80000;
  }
  else if (param_2 == *(int *)(param_1 + 0x70)) {
    uVar1 = 0x100000;
  }
  else if (param_2 == *(int *)(param_1 + 0x74)) {
    uVar1 = 0x200000;
  }
  else if (param_2 == *(int *)(param_1 + 0x78)) {
    uVar1 = 0x400000;
  }
  else if (param_2 == *(int *)(param_1 + 0x90)) {
    uVar1 = 0x800000;
  }
  else if (param_2 == *(int *)(param_1 + 0x7c)) {
    uVar1 = 0x1000000;
  }
  else if (param_2 == *(int *)(param_1 + 0x80)) {
    uVar1 = 0x2000000;
  }
  else if (param_2 == *(int *)(param_1 + 0x84)) {
    uVar1 = 0x4000000;
  }
  else if (param_2 == *(int *)(param_1 + 0x8c)) {
    uVar1 = 0x8000000;
  }
  else if (param_2 == *(int *)(param_1 + 0x88)) {
    uVar1 = 0x10000000/*ROM*/;
  }
  return uVar1;
}
