/* @k10d clamp_accumulated_values @ 0x000dc2da
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Adds deltas to two accumulators, clamps them within min/max bounds, and sets flags on
 *   adjustment.
 * summary:
 *   The function performs 32-bit additions on _DAT_0003c894 and _DAT_0003c898 using deltas
 *   from _DAT_0003c820 and _DAT_0003c824. It processes these values through a series of
 *   arithmetic helper functions (abs_uint_via_helper, multiply_two_floats_000f7a44,
 *   normalize_double_precision, multiply_two_floats_000f76e4, compute_scaled_offset) to
 *   compute clamped results stored in _DAT_0003c828 and _DAT_0003c82c. If the results
 *   exceed bounds defined by _DAT_0003f380-0x0003f386 (scaled by 0x100), it sets bits in
 *   DAT_0003c805 and recalculates the accumulator.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_accumulated_values(void)

{
  byte bVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  
  bVar1 = CARRY4(_DAT_0003c894,_DAT_0003c820);
  _DAT_0003c894 = _DAT_0003c894 + _DAT_0003c820;
  bVar2 = _DAT_0003c894 == 0;
  uVar3 = abs_uint_via_helper(_DAT_0003c894);
  uVar4 = abs_uint_via_helper(_DAT_0003c860);
  uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                       (int)uVar4);
  uVar3 = normalize_double_precision((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40e00000,0);
  uVar3 = multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
  compute_scaled_offset((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x41dfffff,0xffc00000);
  if ((bVar1 | bVar2) != 1) {
    uVar3 = 0x41dfffffffc00000;
  }
  uStack_20 = (uint32_t)((ulonglong)uVar3 >> 0x20);
  uStack_1c = (uint32_t)uVar3;
  compute_scaled_offset(uStack_20,uStack_1c,0xc1dfffff,0xffc00000);
  if (bVar1 != 0) {
    uVar3 = 0xc1dfffffffc00000;
  }
  uStack_20 = (uint32_t)((ulonglong)uVar3 >> 0x20);
  uStack_1c = (uint32_t)uVar3;
  _DAT_0003c828 = normalize_fixed_point_value(uStack_20,uStack_1c);
  bVar1 = CARRY4(_DAT_0003c898,_DAT_0003c824);
  _DAT_0003c898 = _DAT_0003c898 + _DAT_0003c824;
  bVar2 = _DAT_0003c898 == 0;
  uVar3 = abs_uint_via_helper(_DAT_0003c898);
  uVar4 = abs_uint_via_helper(_DAT_0003c864);
  uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                       (int)uVar4);
  uVar3 = normalize_double_precision((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40e00000,0);
  uVar3 = multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
  compute_scaled_offset((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x41dfffff,0xffc00000);
  if ((bVar1 | bVar2) != 1) {
    uVar3 = 0x41dfffffffc00000;
  }
  uStack_20 = (uint32_t)((ulonglong)uVar3 >> 0x20);
  uStack_1c = (uint32_t)uVar3;
  compute_scaled_offset(uStack_20,uStack_1c,0xc1dfffff,0xffc00000);
  if (bVar1 != 0) {
    uVar3 = 0xc1dfffffffc00000;
  }
  uStack_20 = (uint32_t)((ulonglong)uVar3 >> 0x20);
  uStack_1c = (uint32_t)uVar3;
  _DAT_0003c82c = normalize_fixed_point_value(uStack_20,uStack_1c);
  if (_DAT_0003f382 * 0x100 < _DAT_0003c828) {
    DAT_0003c805 = DAT_0003c805 | 2;
    _DAT_0003c828 = _DAT_0003f382 * 0x100;
    uVar3 = abs_uint_via_helper(__frv_reg_unset(4));
    uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
    uVar4 = abs_uint_via_helper(_DAT_0003c860);
    multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                 (int)uVar4);
    _DAT_0003c894 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  if (_DAT_0003c828 < _DAT_0003f380 * 0x100) {
    DAT_0003c805 = DAT_0003c805 | 1;
    _DAT_0003c828 = _DAT_0003f380 * 0x100;
    uVar3 = abs_uint_via_helper(__frv_reg_unset(4));
    uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
    uVar4 = abs_uint_via_helper(_DAT_0003c860);
    multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                 (int)uVar4);
    _DAT_0003c894 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  if (_DAT_0003f386 * 0x100 < _DAT_0003c82c) {
    DAT_0003c805 = DAT_0003c805 | 8;
    _DAT_0003c82c = _DAT_0003f386 * 0x100;
    uVar3 = abs_uint_via_helper(__frv_reg_unset(4));
    uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
    uVar4 = abs_uint_via_helper(_DAT_0003c864);
    multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                 (int)uVar4);
    _DAT_0003c898 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  if (_DAT_0003c82c < _DAT_0003f384 * 0x100) {
    DAT_0003c805 = DAT_0003c805 | 4;
    _DAT_0003c82c = _DAT_0003f384 * 0x100;
    uVar3 = abs_uint_via_helper(__frv_reg_unset(4));
    uVar3 = multiply_two_floats_000f7a44((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,0x40f00000,0);
    uVar4 = abs_uint_via_helper(_DAT_0003c864);
    multiply_two_floats_000f76e4((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                 (int)uVar4);
    _DAT_0003c898 = normalize_fixed_point_value(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  return;
}
