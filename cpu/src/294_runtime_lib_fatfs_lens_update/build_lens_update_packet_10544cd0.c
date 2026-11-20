/* @k10d build_lens_update_packet_10544cd0 @ 0x10544cd0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Constructs a firmware update command packet for the lens CPU based on the requested
 *   operation type.
 * summary:
 *   The function takes an operation code in the upper 16 bits of param_1 and a data pointer
 *   in param_2. It branches on the code to either set a simple status (0x1d or 0x21) in
 *   DAT_80014a70 for small values, or for larger values, it calls
 *   compute_lens_fw_block_offset_10544502 and abs_uint32 to prepare data, then uses
 *   compare_64_bit_integers, add_two_64_bit_integers, and multiply_two_floats to assemble a
 *   multi-word packet structure in memory. The module context 'lens_firmware_update'
 *   confirms this is part of the lens communication protocol.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint build_lens_update_packet_10544cd0(uint param_1,void *param_2)

{
  uint uVar1;
  uint extraout_r4;
  uint32_t extraout_r4_00;
  uint uVar2;
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
  uint extraout_r5;
  uint32_t extraout_r5_00;
  uint uVar3;
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
  int iVar4;
  uint *puVar5;
  char cVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t uStack_8;
  uint uStack_4;
  
  uStack_8 = (uStack_8 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)((short)(param_1 >> 0x10))) & ((uint64_t)0xffff)) << 0);
  uVar1 = (uint)((uint16_t)((uint64_t)(uStack_8) >> 0));
  uStack_8 = (uStack_8 & ~(((uint64_t)0xffff) << 16)) | ((((uint64_t)((uint16_t)param_1)) & ((uint64_t)0xffff)) << 16);
  if ((uVar1 & 0x7ff0) == 0x7ff0) {
    uStack_8 = param_1;
    if ((int)uVar1 < 1) {
      _DAT_80014a70/*SDRAM*/ = 0x1d;
      uStack_8 = param_1 | 0x80000;
    }
  }
  else if ((int)uVar1 < 0x10) {
    if ((uVar1 & 0x7ff0) == 0) {
      _DAT_80014a70/*SDRAM*/ = 0x21;
      uStack_8 = 0xfff00000;
    }
    else {
      _DAT_80014a70/*SDRAM*/ = 0x1d;
      uStack_8 = CONCAT22(0x7ff8,((uint16_t)((uint64_t)(uStack_8) >> 16)));
    }
  }
  else {
    iVar4 = ((int)uVar1 >> 4) + -0x3ff;
    uStack_8 = param_1 & 0xfffff | 0x3fe00000;
    cVar6 = '\0';
    compute_lens_fw_block_offset_10544502(uStack_8,param_2,DAT_106221f4);
    if (cVar6 == '\x01') {
      uStack_8 = (uStack_8 & ~(((uint64_t)0xffff) << 16)) | ((((uint64_t)((uint16_t)(param_1 & 0xfffff))) & ((uint64_t)0xffff)) << 16);
      uStack_8 = CONCAT22(((uint16_t)((uint64_t)(uStack_8) >> 0)) + 0x10,((uint16_t)((uint64_t)(uStack_8) >> 16)));
    }
    else {
      iVar4 = ((int)uVar1 >> 4) + -0x3fe;
    }
    uVar7 = abs_uint32(iVar4);
    uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
    compare_64_bit_integers(uStack_8,param_2,0x3ff00000,0);
    add_two_64_bit_integers(uStack_8,param_2,0x3ff00000,0);
    uVar8 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    multiply_two_floats(uVar2,uVar3,uVar2,uVar3);
    uStack_8 = DAT_1062222c;
    uStack_4 = DAT_10622230;
    for (puVar5 = &DAT_10622224; (uint *)((int)&DAT_106221f8 + 3) < puVar5; puVar5 = puVar5 + -2) {
      multiply_two_floats(uStack_8,uStack_4,extraout_r4_01,extraout_r5_01);
      add_two_64_bit_integers(extraout_r4_02,extraout_r5_02,*puVar5,puVar5[1]);
      uStack_8 = extraout_r4_03;
      uStack_4 = extraout_r5_03;
    }
    multiply_two_floats(uStack_8,uStack_4,extraout_r4_01,extraout_r5_01);
    multiply_two_floats(extraout_r4_04,extraout_r5_04,uVar2,uVar3);
    multiply_two_floats(extraout_r4,extraout_r5,uVar2,uVar3);
    compare_64_bit_integers(extraout_r4_05,extraout_r5_05,extraout_r4_06,extraout_r5_06);
    multiply_two_floats(uVar1,(uint)uVar7,0x3d53de6a,0xf278ece6);
    add_two_64_bit_integers(extraout_r4_07,extraout_r5_07,extraout_r4_08,extraout_r5_08);
    add_two_64_bit_integers(extraout_r4_09,extraout_r5_09,extraout_r4,extraout_r5);
    multiply_two_floats(uVar1,(uint)uVar7,0x3fe62e42,0xfefa3000);
    add_two_64_bit_integers(extraout_r4_11,extraout_r5_11,extraout_r4_10,extraout_r5_10);
    uStack_8 = extraout_r4_12;
  }
  return uStack_8;
}
