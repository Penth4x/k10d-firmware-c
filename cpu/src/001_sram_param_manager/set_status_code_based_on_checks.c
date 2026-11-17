/* @k10d set_status_code_based_on_checks @ 0x100f16d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Resets state, conditionally queries two status functions, and sets a status code (5, 6,
 *   or 7) based on their results.
 * summary:
 *   The function first calls two initialization/reset routines
 *   (set_bit_2_in_dat_800482d4_100f1d40 and set_bit_in_dat_800482d4_100f1d5e with 0). If
 *   the input parameter is 1, it calls a third routine, then evaluates two status-checking
 *   functions (test_bit_10_of_dat_800482d4 and test_bit_in_dat_800482d4). Depending on
 *   which checks return zero, it sets a local variable to 5, 6, or 7. This value is passed
 *   to set_bits_1_to_3_of_byte, and finally set_bit_in_dat_800482d4_100f1d5e is called with
 *   1. The specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_code_based_on_checks(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  set_bit_2_in_dat_800482d4_100f1d40(0);
  set_bit_in_dat_800482d4_100f1d5e(0);
  if (param_1 == 1) {
    set_bits_1_to_3_of_byte(0);
    iVar1 = test_bit_10_of_dat_800482d4();
    if (iVar1 == 0) {
      iVar1 = test_bit_in_dat_800482d4();
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 7;
      }
    }
    else {
      uVar2 = 5;
    }
    set_bits_1_to_3_of_byte(uVar2);
    set_bit_in_dat_800482d4_100f1d5e(1);
  }
  return;
}
