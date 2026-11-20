/* @k10d clamp_index_to_fifteen_104fff62 @ 0x104fff62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns param_2 if it is between 0 and 15, otherwise returns 16.
 * summary:
 *   The function takes two arguments but only uses the second (param_2). It performs a
 *   series of equality checks against values 0 through 15 (0x0f). If param_2 matches any of
 *   these, it returns that value. If param_2 is greater than 15 or negative (falling
 *   through to the else), it returns 16 (0x10). This acts as a saturation/clamp function
 *   for an index or count, capping the value at 16.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clamp_index_to_fifteen_104fff62(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  else if (param_2 == 2) {
    uVar1 = 2;
  }
  else if (param_2 == 3) {
    uVar1 = 3;
  }
  else if (param_2 == 4) {
    uVar1 = 4;
  }
  else if (param_2 == 5) {
    uVar1 = 5;
  }
  else if (param_2 == 6) {
    uVar1 = 6;
  }
  else if (param_2 == 7) {
    uVar1 = 7;
  }
  else if (param_2 == 8) {
    uVar1 = 8;
  }
  else if (param_2 == 9) {
    uVar1 = 9;
  }
  else if (param_2 == 10) {
    uVar1 = 10;
  }
  else if (param_2 == 0xb) {
    uVar1 = 0xb;
  }
  else if (param_2 == 0xc) {
    uVar1 = 0xc;
  }
  else if (param_2 == 0xd) {
    uVar1 = 0xd;
  }
  else if (param_2 == 0xe) {
    uVar1 = 0xe;
  }
  else if (param_2 == 0xf) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}
