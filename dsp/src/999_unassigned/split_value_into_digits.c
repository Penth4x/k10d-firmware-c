/* @k10d split_value_into_digits @ 0x000f6522
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Decomposes a clamped integer into four digit components stored in an output array.
 * summary:
 *   The function takes an input value (param_1) and an output array (param_2). If the input
 *   is 0xffff, it fills the array with 10s. Otherwise, it clamps the input to 9999 and uses
 *   helper functions divide_two_integers and compute_modulo_000f79a8 to extract the
 *   thousands, hundreds, tens, and ones digits, storing them in param_2[3] through
 *   param_2[0]. It applies specific logic to replace zero digits with 10 under certain
 *   conditions and checks a global flag DAT_0003c028 to potentially reset all digits to 10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void split_value_into_digits(int param_1,uint32_t *param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_1 == 0xffff) {
    *param_2 = 10;
    param_2[1] = 10;
    param_2[2] = 10;
    param_2[3] = 10;
  }
  else {
    if (9999 < param_1) {
      param_1 = 9999;
    }
    uVar1 = divide_two_integers(param_1,1000);
    param_2[3] = uVar1;
    uVar1 = divide_two_integers(param_1 + param_2[3] * -1000,100);
    param_2[2] = uVar1;
    uVar1 = divide_two_integers(param_1 + param_2[3] * -1000 + param_2[2] * -100,10);
    param_2[1] = uVar1;
    uVar1 = compute_modulo_000f79a8(param_1,10);
    *param_2 = uVar1;
    if (param_2[3] == 0) {
      param_2[3] = 10;
    }
    if ((param_1 < 1000) && (param_2[2] == 0)) {
      param_2[2] = 10;
    }
    if ((param_1 < 100) && (param_2[1] == 0)) {
      param_2[1] = 10;
    }
    if (((DAT_0003c028 & 2) == 0) && (param_3 == 1)) {
      *param_2 = 10;
      param_2[1] = 10;
      param_2[2] = 10;
      param_2[3] = 10;
    }
  }
  return;
}
