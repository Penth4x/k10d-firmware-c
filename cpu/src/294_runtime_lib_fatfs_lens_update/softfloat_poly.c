/* @k10d softfloat_poly @ 0x10544ece
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed evaluate_double_polynomial)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Evaluates a polynomial function using IEEE 754 double-precision floating-point
 *   arithmetic.
 * summary:
 *   The function takes a double-precision input (via stack) and branches based on its
 *   magnitude to select a specific polynomial evaluation path. It calls helper functions
 *   (multiply_two_floats, add_two_64_bit_integers, etc.) to perform floating-point
 *   multiplications and additions, using hardcoded double-precision constants (e.g.,
 *   0x3ccc654d, 0x56eaabeb) as coefficients. The result is returned as a double-precision
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint softfloat_poly(void)

{
  ushort uVar1;
  uint uVar2;
  uint extraout_r4;
  uint32_t extraout_r4_00;
  uint uVar3;
  uint extraout_r4_01;
  uint extraout_r4_02;
  uint extraout_r4_03;
  uint extraout_r4_04;
  uint extraout_r4_05;
  uint extraout_r4_06;
  uint extraout_r4_07;
  uint extraout_r4_08;
  uint extraout_r4_09;
  uint extraout_r4_10;
  uint extraout_r4_11;
  uint extraout_r4_12;
  uint extraout_r4_13;
  uint extraout_r4_14;
  uint extraout_r4_15;
  uint extraout_r5;
  uint32_t extraout_r5_00;
  uint uVar4;
  uint extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint extraout_r5_04;
  void *extraout_r5_05;
  uint extraout_r5_06;
  void *extraout_r5_07;
  uint extraout_r5_08;
  void *extraout_r5_09;
  uint extraout_r5_10;
  void *extraout_r5_11;
  uint extraout_r5_12;
  uint extraout_r5_13;
  void *extraout_r5_14;
  int iVar5;
  uint *puVar6;
  char cVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  ushort uStack00000008;
  uint16_t uStack0000000a;
  void *in_stack_0000000c;
  
  uVar2 = (uint)(short)uStack00000008;
  if ((uVar2 & 0x7ff0) == 0x7ff0) {
    if ((int)uVar2 < 1) {
      _DAT_80014a70/*SDRAM*/ = 0x1d;
      _uStack00000008 = _uStack00000008 | 0x80000;
    }
  }
  else if ((int)uVar2 < 0x10) {
    if ((uVar2 & 0x7ff0) == 0) {
      _DAT_80014a70/*SDRAM*/ = 0x21;
      _uStack00000008 = 0xfff00000;
    }
    else {
      _DAT_80014a70/*SDRAM*/ = 0x1d;
      _uStack00000008 = CONCAT22(0x7ff8,uStack0000000a);
    }
  }
  else {
    iVar5 = ((int)uVar2 >> 4) + -0x3ff;
    uVar1 = uStack00000008 & 0xf;
    _uStack00000008 = CONCAT22(uVar1 + 0x3fe0,uStack0000000a);
    cVar7 = '\0';
    compute_lens_fw_block_offset_10544502(_uStack00000008,in_stack_0000000c,DAT_106221f4);
    if (cVar7 == '\x01') {
      _uStack00000008 = CONCAT22(uVar1 + 0x3ff0,uStack0000000a);
    }
    else {
      iVar5 = ((int)uVar2 >> 4) + -0x3fe;
    }
    uVar8 = abs_uint32(iVar5);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    compare_64_bit_integers(_uStack00000008,in_stack_0000000c,0x3ff00000,0);
    add_two_64_bit_integers(_uStack00000008,in_stack_0000000c,0x3ff00000,0);
    uVar9 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar4 = (uint)uVar9;
    multiply_two_floats(uVar3,uVar4,uVar3,uVar4);
    _uStack00000008 = DAT_1062222c;
    in_stack_0000000c = (void *)DAT_10622230;
    for (puVar6 = &DAT_10622224; (uint *)((int)&DAT_106221f8 + 3) < puVar6; puVar6 = puVar6 + -2) {
      multiply_two_floats(_uStack00000008,(uint)in_stack_0000000c,extraout_r4_01,extraout_r5_01);
      add_two_64_bit_integers(extraout_r4_02,extraout_r5_02,*puVar6,puVar6[1]);
      _uStack00000008 = extraout_r4_03;
      in_stack_0000000c = (void *)extraout_r5_03;
    }
    multiply_two_floats(_uStack00000008,(uint)in_stack_0000000c,extraout_r4_01,extraout_r5_01);
    multiply_two_floats(extraout_r4_04,extraout_r5_04,uVar3,uVar4);
    multiply_two_floats(extraout_r4,extraout_r5,uVar3,uVar4);
    compare_64_bit_integers(extraout_r4_05,extraout_r5_05,extraout_r4_06,extraout_r5_06);
    add_two_64_bit_integers(extraout_r4_07,extraout_r5_07,extraout_r4,extraout_r5);
    multiply_two_floats(extraout_r4_08,extraout_r5_08,0x3ccc654d,0x56eaabeb);
    multiply_two_floats(uVar2,(uint)uVar8,0x3d0fde62,0x3e2566b0);
    add_two_64_bit_integers(extraout_r4_09,extraout_r5_09,extraout_r4_10,extraout_r5_10);
    multiply_two_floats(extraout_r4_08,extraout_r5_08,0x3fdbcb7b,0x1526e500);
    add_two_64_bit_integers(extraout_r4_11,extraout_r5_11,extraout_r4_12,extraout_r5_12);
    multiply_two_floats(uVar2,(uint)uVar8,0x3fd34413,0x509f7900);
    add_two_64_bit_integers(extraout_r4_14,extraout_r5_14,extraout_r4_13,extraout_r5_13);
    _uStack00000008 = extraout_r4_15;
  }
  return _uStack00000008;
}
