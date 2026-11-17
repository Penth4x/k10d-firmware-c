/* @k10d write_validated_params_to_rom_block @ 0x10502750
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes validated fields from a parameter structure to a sequence of addresses in the
 *   ROM region.
 * summary:
 *   The function takes a parameter structure (param_3) and writes its fields to a sequence
 *   of addresses starting at 0x104560d0. It validates specific fields against known sets of
 *   values (e.g., 0x000-0xd00, 0-3, 0x0000-0x3000) before writing them. The base address
 *   0x104560d0 is within the ROM region (0x10000000..0x105fffff), which is unusual for a
 *   control register block, and no camera-specific subsystem is identifiable from the code
 *   or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_validated_params_to_rom_block(uint32_t param_1,int param_2,uint16_t *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  param_2 = param_2 + 0x10;
  (*(code *)0x104560d0/*ROM*/)(param_2,param_3[1]);
  (*(code *)0x104560ee/*ROM*/)(param_2,*param_3);
  (*(code *)0x1045610c/*ROM*/)(param_2,param_3[3]);
  (*(code *)0x1045612a/*ROM*/)(param_2,param_3[2]);
  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 == 0x600) {
    uVar2 = 0x600;
LAB_1050286c:
    (*(code *)0x10456148/*ROM*/)(param_2,uVar2);
  }
  else {
    if (0x600 < iVar1) {
      if (iVar1 == 0xa00) {
        uVar2 = 0xa00;
      }
      else if (iVar1 < 0xa01) {
        if (iVar1 == 0x700) {
          uVar2 = 0x700;
        }
        else if (iVar1 == 0x800) {
          uVar2 = 0x800;
        }
        else {
          if (iVar1 != 0x900) goto LAB_10502878;
          uVar2 = 0x900;
        }
      }
      else if (iVar1 == 0xb00) {
        uVar2 = 0xb00;
      }
      else if (iVar1 == 0xc00) {
        uVar2 = 0xc00;
      }
      else {
        if (iVar1 != 0xd00) goto LAB_10502878;
        uVar2 = 0xd00;
      }
      goto LAB_1050286c;
    }
    if (iVar1 == 0x200) {
      uVar2 = 0x200;
      goto LAB_1050286c;
    }
    if (0x200 < iVar1) {
      if (iVar1 == 0x300) {
        uVar2 = 0x300;
      }
      else if (iVar1 == 0x400) {
        uVar2 = 0x400;
      }
      else {
        if (iVar1 != 0x500) goto LAB_10502878;
        uVar2 = 0x500;
      }
      goto LAB_1050286c;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_1050286c;
    }
    if (iVar1 == 0x100) {
      uVar2 = 0x100;
      goto LAB_1050286c;
    }
  }
LAB_10502878:
  (*(code *)0x1045616c/*ROM*/)(param_2,*(uint8_t *)(param_3 + 0xc));
  iVar1 = *(int *)(param_3 + 0xe);
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_105028aa:
    (*(code *)0x104561a8/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 1;
      goto LAB_105028aa;
    }
    if (iVar1 == 2) {
      uVar2 = 2;
      goto LAB_105028aa;
    }
    if (iVar1 == 3) {
      uVar2 = 3;
      goto LAB_105028aa;
    }
  }
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_105028da:
    (*(code *)0x104561bc/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 1;
      goto LAB_105028da;
    }
    if (iVar1 == 2) {
      uVar2 = 2;
      goto LAB_105028da;
    }
    if (iVar1 == 3) {
      uVar2 = 3;
      goto LAB_105028da;
    }
  }
  iVar1 = *(int *)(param_3 + 0x12);
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_1050290a:
    (*(code *)0x104561d0/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 1;
      goto LAB_1050290a;
    }
    if (iVar1 == 2) {
      uVar2 = 2;
      goto LAB_1050290a;
    }
    if (iVar1 == 3) {
      uVar2 = 3;
      goto LAB_1050290a;
    }
  }
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_1050293a:
    (*(code *)0x104561e4/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = 1;
      goto LAB_1050293a;
    }
    if (iVar1 == 2) {
      uVar2 = 2;
      goto LAB_1050293a;
    }
    if (iVar1 == 3) {
      uVar2 = 3;
      goto LAB_1050293a;
    }
  }
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == 0) {
    uVar2 = 0;
LAB_1050297c:
    (*(code *)0x10456226/*ROM*/)(param_2,uVar2);
  }
  else {
    if (iVar1 == 0x1000) {
      uVar2 = 0x1000;
      goto LAB_1050297c;
    }
    if (iVar1 == 0x2000) {
      uVar2 = 0x2000;
      goto LAB_1050297c;
    }
    if (iVar1 == 0x3000) {
      uVar2 = 0x3000;
      goto LAB_1050297c;
    }
  }
  iVar1 = *(int *)(param_3 + 6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 0x1000) {
    uVar2 = 0x1000;
  }
  else if (iVar1 == 0x2000) {
    uVar2 = 0x2000;
  }
  else {
    if (iVar1 != 0x3000) goto LAB_105029ca;
    uVar2 = 0x3000;
  }
  (*(code *)0x1045624c/*ROM*/)(param_2,uVar2);
LAB_105029ca:
  (*(code *)0x10456272/*ROM*/)(param_2,param_3[0xb]);
  (*(code *)0x10456298/*ROM*/)(param_2,param_3[10]);
  return;
}
