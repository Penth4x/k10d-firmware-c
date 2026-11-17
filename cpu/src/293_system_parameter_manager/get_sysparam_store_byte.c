/* @k10d get_sysparam_store_byte @ 0x10534fa0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Returns a byte from the SYSPARAM store config struct at an index, gated by a validity
 *   check.
 * summary:
 *   Calls read_sysparam_byte(param_1) to check if the store is valid/initialized. If non-
 *   zero, it maps the 32-bit param_2 (0-30) to an index (1-31) and returns the byte at
 *   param_1[index]. If invalid or index out of range, returns 0. Part of the
 *   system_parameter_store module which manages SYSPARAM.TXT configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_sysparam_store_byte(uint8_t *param_1,uint32_t param_2)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  cVar1 = read_sysparam_byte(param_1);
  if (cVar1 != '\0') {
    switch(param_2) {
    case 0:
      iVar3 = 1;
      break;
    case 1:
      iVar3 = 2;
      break;
    case 2:
      iVar3 = 3;
      break;
    case 3:
      iVar3 = 4;
      break;
    case 4:
      iVar3 = 5;
      break;
    case 5:
      iVar3 = 6;
      break;
    case 6:
      iVar3 = 7;
      break;
    case 7:
      iVar3 = 8;
      break;
    case 8:
      iVar3 = 9;
      break;
    case 9:
      iVar3 = 10;
      break;
    case 10:
      iVar3 = 0xb;
      break;
    case 0xb:
      iVar3 = 0xc;
      break;
    case 0xc:
      iVar3 = 0xd;
      break;
    case 0xd:
      iVar3 = 0xe;
      break;
    case 0xe:
      iVar3 = 0xf;
      break;
    case 0xf:
      iVar3 = 0x10;
      break;
    case 0x10:
      iVar3 = 0x11;
      break;
    case 0x11:
      iVar3 = 0x12;
      break;
    case 0x12:
      iVar3 = 0x13;
      break;
    case 0x13:
      iVar3 = 0x14;
      break;
    case 0x14:
      iVar3 = 0x15;
      break;
    case 0x15:
      iVar3 = 0x16;
      break;
    case 0x16:
      iVar3 = 0x17;
      break;
    case 0x17:
      iVar3 = 0x18;
      break;
    case 0x18:
      iVar3 = 0x19;
      break;
    case 0x19:
      iVar3 = 0x1a;
      break;
    case 0x1a:
      iVar3 = 0x1b;
      break;
    case 0x1b:
      iVar3 = 0x1c;
      break;
    case 0x1c:
      iVar3 = 0x1d;
      break;
    case 0x1d:
      iVar3 = 0x1e;
      break;
    case 0x1e:
      iVar3 = 0x1f;
      break;
    default:
      goto LAB_1053503e;
    }
    uVar2 = param_1[iVar3];
  }
LAB_1053503e:
  return uVar2;
}
