/* @k10d write_exposure_params_to_mmio @ 0x104ef4cc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a series of exposure and sensor parameters from a struct to an MMIO device via a
 *   sequence of setter calls.
 * summary:
 *   The function takes a pointer to a device context (param_1) and a parameter struct
 *   (param_2). It extracts the device handle from param_1+0x10 and calls a series of
 *   functions at addresses 0x1044cf6e through 0x1044d49c, passing individual fields from
 *   param_2. It specifically maps an integer field at param_2+4 to specific values (0,
 *   0x400, 0x600, 0x200) before writing it, and splits several 32-bit fields into high and
 *   low 16-bit parts. The specific subsystem (e.g., AE, sensor) is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_exposure_params_to_mmio(int param_1,uint8_t *param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_14 [4];
  
  puVar6 = auStack_14;
  (*(code *)0x1044cf6e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*param_2);
  (*(code *)0x1044cfb4/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[1]);
  (*(code *)0x1044d02a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[2]);
  (*(code *)0x1044d06a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[3]);
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else if (iVar5 == 1) {
    uVar4 = 0x400;
  }
  else if (iVar5 == 2) {
    uVar4 = 0x600;
  }
  else {
    if (iVar5 != 3) goto LAB_104ef552;
    uVar4 = 0x200;
  }
  (*(code *)0x1044cffa/*ROM*/)(*(uint32_t *)(param_1 + 0x10),uVar4);
LAB_104ef552:
  (*(code *)0x1044d0ec/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 8));
  (*(code *)0x1044d10a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 10));
  (*(code *)0x1044d128/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint32_t *)(param_2 + 0xc));
  (*(code *)0x1044d14c/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint32_t *)(param_2 + 0x10));
  (*(code *)0x1044d170/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x14));
  (*(code *)0x1044d192/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint32_t *)(param_2 + 0x18));
  (*(code *)0x1044d1b6/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint32_t *)(param_2 + 0x1c));
  (*(code *)0x1044d1da/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint32_t *)(param_2 + 0x20));
  (*(code *)0x1044d1fe/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x24));
  (*(code *)0x1044d20e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x26));
  (*(code *)0x1044d21e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x28));
  (*(code *)0x1044d22e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x2a));
  (*(code *)0x1044d286/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x2c));
  (*(code *)0x1044d296/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x2e));
  (*(code *)0x1044d2a6/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x30));
  (*(code *)0x1044d2b6/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint16_t *)(param_2 + 0x32));
  uVar4 = *(uint32_t *)(param_1 + 0x10);
  uVar1 = param_2[0x34];
  uVar2 = param_2[0x35];
  uVar3 = param_2[0x36];
  puVar6[3] = param_2[0x37];
  (*(code *)0x1044d3de/*ROM*/)(uVar4,uVar1,uVar2,uVar3);
  (*(code *)0x1044d316/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x38) >> 0x10);
  (*(code *)0x1044d320/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x38) & 0xffff);
  (*(code *)0x1044d33e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x3c) >> 0x10);
  (*(code *)0x1044d348/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x3c) & 0xffff);
  (*(code *)0x1044d352/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x40) >> 0x10);
  (*(code *)0x1044d35c/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x40) & 0xffff);
  (*(code *)0x1044d366/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x44) >> 0x10);
  (*(code *)0x1044d370/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x44) & 0xffff);
  (*(code *)0x1044d37a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x48) >> 0x10);
  (*(code *)0x1044d384/*ROM*/)(*(uint32_t *)(param_1 + 0x10),*(uint *)(param_2 + 0x48) & 0xffff);
  (*(code *)0x1044d456/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x4c]);
  (*(code *)0x1044d46a/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x4e]);
  (*(code *)0x1044d47e/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x50]);
  (*(code *)0x1044d492/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x52]);
  (*(code *)0x1044d460/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x4d]);
  (*(code *)0x1044d474/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x4f]);
  (*(code *)0x1044d488/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x51]);
  (*(code *)0x1044d49c/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_2[0x53]);
  return;
}
