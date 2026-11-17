/* @k10d collect_fourteen_property_values @ 0x1050196c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_fourteen_property_values(int param_1,uint8_t *param_2)

{
  uint8_t uVar2;
  uint16_t uVar1;
  
  uVar2 = (*(code *)0x10453922/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  *param_2 = uVar2;
  uVar2 = (*(code *)0x10453936/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[1] = uVar2;
  uVar2 = (*(code *)0x10453946/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[2] = uVar2;
  uVar2 = (*(code *)0x1045395a/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[3] = uVar2;
  uVar2 = (*(code *)0x1045396a/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[4] = uVar2;
  uVar2 = (*(code *)0x1045397e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[5] = uVar2;
  uVar2 = (*(code *)0x1045398e/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[6] = uVar2;
  uVar2 = (*(code *)0x104539a2/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  param_2[7] = uVar2;
  uVar1 = (*(code *)0x104539b2/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  *(uint16_t *)(param_2 + 8) = uVar1;
  uVar1 = (*(code *)0x104539c4/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  *(uint16_t *)(param_2 + 10) = uVar1;
  uVar1 = (*(code *)0x104539d6/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  *(uint16_t *)(param_2 + 0xc) = uVar1;
  uVar1 = (*(code *)0x104539e8/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  *(uint16_t *)(param_2 + 0xe) = uVar1;
  return;
}
