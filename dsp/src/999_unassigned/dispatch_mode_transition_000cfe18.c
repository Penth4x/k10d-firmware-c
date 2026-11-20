/* @k10d dispatch_mode_transition_000cfe18 @ 0x000cfe18
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Performs a state transition based on a mode index, calling different helper functions
 *   and updating a status flag.
 * summary:
 *   The function branches on param_1 (likely a mode or state ID). It sets bit 0 of
 *   DAT_0003ce7e for modes 4-6. It checks a bitmask at DAT_000fb020 to decide between two
 *   paths: one calling zero_fill_two_byte_array and clear_two_flag_bits_on_small_param, and
 *   another calling FUN_000cffd2, accumulate_four_sample_values, and
 *   generate_tone_ramp_values. It clears bit 0 of DAT_0003ce7e at the end of both paths.
 *   The specific hardware or subsystem context is not clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_000cfe18(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x3f288);
  uVar1 = param_2 - (uint)*(byte *)(param_1 + 0x3f292);
  uVar5 = uVar1 - (*(byte *)(param_1 + 0x3f29c) + uVar3);
  if (param_1 < 3) {
    uVar4 = 0x1b2;
    uVar2 = uVar5;
  }
  else {
    uVar4 = param_3 + 0x108;
    uVar2 = param_3 + 0x80;
    if (param_1 != 9) {
      param_3 = param_3 + 7;
    }
  }
  if ((3 < param_1) && (param_1 < 7)) {
    DAT_0003ce7e = DAT_0003ce7e | 1;
  }
  if ((*(uint *)(&DAT_000fb020 + param_1 * 4) & _DAT_0003cfa4) == 0) {
    zero_fill_two_byte_array(uVar3,(void *)param_4);
    zero_fill_two_byte_array(uVar3,(void *)param_5);
    if (2 < param_1) {
      clear_two_flag_bits_on_small_param(0,uVar2);
      do {
      } while ((short)param_3 < (short)_DAT_0000004a);
    }
    DAT_0003ce7e = DAT_0003ce7e & 0xfe;
  }
  else {
    FUN_000cffd2(param_1, __frv_reg_unset(5));
    do {
    } while (uVar4 <= _DAT_0000004a);
    accumulate_four_sample_values((void *)param_4);
    do {
    } while (uVar1 <= _DAT_0000004a);
    generate_tone_ramp_values(uVar3,(void *)param_4);
    clear_two_flag_bits_on_small_param(0,uVar2);
    DAT_0003ce7e = DAT_0003ce7e & 0xfe;
    if (2 < param_1) {
      do {
      } while (uVar2 <= _DAT_0000004a);
      accumulate_four_sample_values((void *)param_5);
    }
    do {
    } while (uVar5 <= _DAT_0000004a);
    _DAT_0003cfcc = _DAT_0003cfcc + uVar3;
    generate_tone_ramp_values(uVar3,(void *)param_5);
    clear_two_flag_bits_on_small_param(8,param_3);
    do {
    } while ((short)param_3 < (short)_DAT_0000004a);
  }
  return;
}
