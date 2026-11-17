/* @k10d evaluate_comparison_expression @ 0x104b6e6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_comparison_expression(uint32_t *param_1,byte *param_2,uint32_t param_3,void *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  bVar1 = *param_2;
  while (bVar1 != 0x25) {
    param_2[iVar2] = 0x20;
    iVar2 = iVar2 + 1;
    bVar1 = param_2[iVar2];
  }
  param_2[iVar2] = 0x20;
  strip_whitespace_and_check_comment(param_1,(char *)param_2);
  uVar3 = parse_exposure_mode_char(param_1,param_2);
  iVar2 = 0;
  bVar1 = *param_2;
  while (bVar1 != 0x29) {
    iVar2 = iVar2 + 1;
    bVar1 = param_2[iVar2];
  }
  param_2[iVar2] = 0;
  bVar1 = *param_2;
  if ((bVar1 == 0x3d) && (param_2[1] == 0x3d)) {
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,2,(char *)param_2,param_4);
    if (uVar4 != uVar3) {
      return 0;
    }
  }
  else if ((bVar1 == 0x21) && (param_2[1] == 0x3d)) {
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,2,(char *)param_2,param_4);
    if (uVar4 == uVar3) {
      return 0;
    }
  }
  else if ((bVar1 == 0x3c) && (param_2[1] == 0x3d)) {
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,2,(char *)param_2,param_4);
    if (uVar3 < uVar4) {
      return 0;
    }
  }
  else if ((bVar1 == 0x3e) && (param_2[1] == 0x3d)) {
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,2,(char *)param_2,param_4);
    if (uVar4 < uVar3) {
      return 0;
    }
  }
  else if ((bVar1 == 0x3c) && (param_2[1] != 0x3d)) {
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,1,(char *)param_2,param_4);
    if (uVar3 <= uVar4) {
      return 0;
    }
  }
  else {
    if (bVar1 != 0x3e) {
      return 0;
    }
    if (param_2[1] == 0x3d) {
      return 0;
    }
    uVar4 = param_1[uVar3 + 0xe];
    uVar3 = parse_numeric_expression(param_1,1,(char *)param_2,param_4);
    if (uVar4 <= uVar3) {
      return 0;
    }
  }
  return 1;
}
