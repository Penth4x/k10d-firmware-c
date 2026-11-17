/* @k10d invoke_object_method_with_three_words @ 0x104b2732
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_object_method_with_three_words(int *param_1)

{
  short sVar1;
  bool bVar7;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint32_t uVar6;
  byte *pbVar8;
  code *pcVar9;
  uintptr_t sp;
  int *piVar10;
  uint8_t auStack_28 [4];
  
  piVar10 = (int *)auStack_28;
  pbVar8 = *(byte **)param_1[2];
  bVar7 = test_high_bit_of_byte(param_1,pbVar8);
  uVar2 = read_little_endian_word_104acb5e(pbVar8 + 2,2);
  uVar3 = read_little_endian_word_104acb5e(pbVar8 + 4,2);
  uVar4 = read_little_endian_word_104acb5e(pbVar8 + 6,2);
  piVar5 = (int *)lookup_value_by_byte_key(param_1,pbVar8[1],bVar7);
  param_1[5] = (int)piVar5;
  sVar1 = *(short *)(*piVar5 + 0x18);
  pcVar9 = *(code **)(*piVar5 + 0x1c);
  *piVar10 = param_1[3];
  uVar6 = (*pcVar9)((int)piVar5 + (int)sVar1,uVar2 & 0xffff,uVar3 & 0xffff,uVar4 & 0xffff);
  return uVar6;
}
