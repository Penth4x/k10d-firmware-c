/* @k10d apply_compound_assignment @ 0x104b612c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 218_config_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_compound_assignment(uint32_t *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *r7_in;
  
  uVar2 = parse_exposure_mode_char(param_1,(byte *)param_2);
  cVar1 = *param_2;
  if (cVar1 == '=') {
    uVar3 = parse_numeric_expression(param_1,1,param_2,r7_in);
    param_1[uVar2 + 0xe] = uVar3;
    goto LAB_104b642e;
  }
  if (cVar1 == '+') {
    if (param_2[1] == '=') {
      uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
      param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] + uVar3;
      goto LAB_104b642e;
    }
    if (param_2[1] == '+') {
      param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] + 1;
      goto LAB_104b642e;
    }
  }
  if (cVar1 == '-') {
    if (param_2[1] == '=') {
      uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
      param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] - uVar3;
      goto LAB_104b642e;
    }
    if (param_2[1] == '-') {
      param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] + -1;
      goto LAB_104b642e;
    }
  }
  if ((cVar1 == '*') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] * uVar3;
  }
  else if ((cVar1 == '/') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = (uint)param_1[uVar2 + 0xe] / uVar3;
  }
  else if ((cVar1 == '%') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = (uint)param_1[uVar2 + 0xe] % uVar3;
  }
  else if ((cVar1 == '|') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] | uVar3;
  }
  else if ((cVar1 == '&') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] & uVar3;
  }
  else if ((cVar1 == '^') && (param_2[1] == '=')) {
    uVar3 = parse_numeric_expression(param_1,2,param_2,r7_in);
    param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] ^ uVar3;
  }
  else if (((cVar1 == '<') && (param_2[1] == '<')) && (param_2[2] == '=')) {
    uVar3 = parse_numeric_expression(param_1,3,param_2,r7_in);
    param_1[uVar2 + 0xe] = param_1[uVar2 + 0xe] << ((byte)uVar3 & 0xf);
  }
  else if (((cVar1 == '>') && (param_2[1] == '>')) && (param_2[2] == '=')) {
    uVar3 = parse_numeric_expression(param_1,3,param_2,r7_in);
    param_1[uVar2 + 0xe] = (uint)param_1[uVar2 + 0xe] >> (uVar3 & 0x1f);
  }
LAB_104b642e:
  if (uVar2 == 0x12) {
    forward_shutter_trigger_args(param_1);
  }
  return;
}
