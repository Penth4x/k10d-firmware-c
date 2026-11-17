/* @k10d apply_struct_fields_via_setters @ 0x10501fce
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Reads fields from a struct and passes them to a series of setter functions at
 *   0x10456xxx.
 * summary:
 *   The function extracts values from the struct pointed to by param_3, including specific
 *   mappings for fields at offsets 0xc and 8, and calls a sequence of functions in the
 *   0x10456xxx range. It passes 16-bit and 32-bit values from various struct offsets to
 *   these individual setter functions. The target of these setters is not identified in the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_struct_fields_via_setters(uint32_t param_1,uint32_t param_2,uint8_t *param_3)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = *(int *)(param_3 + 0xc);
  if (iVar2 == 0) {
    uVar3 = 0;
LAB_10501ffc:
    (*(code *)0x104568a6/*ROM*/)(param_2,uVar3);
  }
  else {
    if (iVar2 == 1) {
      uVar3 = 1;
      goto LAB_10501ffc;
    }
    if (iVar2 == 2) {
      uVar3 = 2;
      goto LAB_10501ffc;
    }
    if (iVar2 == 3) {
      uVar3 = 3;
      goto LAB_10501ffc;
    }
  }
  iVar2 = *(int *)(param_3 + 8);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (iVar2 == 4) {
    uVar3 = 4;
  }
  else if (iVar2 == 8) {
    uVar3 = 8;
  }
  else {
    if (iVar2 != 0xc) {
      uVar1 = *param_3;
      goto LAB_10502038;
    }
    uVar3 = 0xc;
  }
  (*(code *)0x104569e0/*ROM*/)(param_2,uVar3);
  uVar1 = *param_3;
LAB_10502038:
  (*(code *)0x10456860/*ROM*/)(param_2,uVar1);
  (*(code *)0x104568dc/*ROM*/)(param_2,param_3[1]);
  (*(code *)0x1045691c/*ROM*/)(param_2,param_3[2]);
  (*(code *)0x1045695c/*ROM*/)(param_2,param_3[3]);
  (*(code *)0x1045699e/*ROM*/)(param_2,param_3[4]);
  (*(code *)0x10456a10/*ROM*/)(param_2,param_3[0x2c]);
  (*(code *)0x10456a52/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x12));
  (*(code *)0x10456a70/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x10));
  (*(code *)0x10456a8e/*ROM*/)(param_2,*(uint32_t *)(param_3 + 0x20));
  (*(code *)0x10456aae/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x16));
  (*(code *)0x10456acc/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x14));
  (*(code *)0x10456aea/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x18));
  (*(code *)0x10456b08/*ROM*/)(param_2,*(uint32_t *)(param_3 + 0x1c));
  (*(code *)0x10456b24/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x2e),*(uint16_t *)(param_3 + 0x30));
  (*(code *)0x10456b64/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x32),*(uint16_t *)(param_3 + 0x34));
  (*(code *)0x10456b96/*ROM*/)(param_2,*(uint16_t *)(param_3 + 0x36),*(uint16_t *)(param_3 + 0x38));
  (*(code *)0x10456bd6/*ROM*/)(param_2,param_3 + 0x3c,*(uint32_t *)(param_3 + 0x44));
  (*(code *)0x10456c10/*ROM*/)(param_2,*(uint32_t *)(param_3 + 0x24));
  (*(code *)0x10456c30/*ROM*/)(param_2,*(uint32_t *)(param_3 + 0x28));
  return;
}
