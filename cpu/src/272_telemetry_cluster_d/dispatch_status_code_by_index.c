/* @k10d dispatch_status_code_by_index @ 0x105124f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Selects a status code based on a byte at an indexed offset and writes it via a helper
 *   function.
 * summary:
 *   Reads a 16-bit index from param_1+0x678 and uses it to access a table of 16-bit values
 *   starting at param_1+0x67c. Depending on the low byte of the first table entry, it calls
 *   settings_getter with specific arguments (0x50 or 0xd) to determine a secondary value.
 *   It then selects a specific integer constant (ranging from 0x11 to 0x5a) based on the
 *   secondary value or the high byte of the second table entry. Finally, it calls
 *   field_setter with param_1+0x2ac, the selected constant, and the low byte of the second
 *   table entry, and increments a counter at param_1+0x64c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105125c4) overlaps instruction at (ram,0x105125c2)
    */

void dispatch_status_code_by_index(int param_1)

{
  uint8_t uVar1;
  int iVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  uint8_t uVar7;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x678) * 2;
  iVar6 = param_1 + 0x686;
  cVar3 = (char)*(uint16_t *)(iVar2 + param_1 + 0x67c);
  uVar7 = (uint8_t)*(uint16_t *)(iVar2 + iVar6);
  if (cVar3 == '\x02') {
    cVar3 = settings_getter(param_1 + 0x2ac,0x50);
    iVar2 = 0x59;
    if (cVar3 != '\0') {
      iVar2 = 0x56;
    }
  }
  else if (cVar3 == '\x04') {
    cVar3 = settings_getter(param_1 + 0x2ac,0x50);
    if (cVar3 == '\0') {
      iVar2 = 0x5a;
    }
    else {
      iVar2 = 0x57;
    }
  }
  else if (cVar3 == '\x03') {
    cVar3 = settings_getter(param_1 + 0x2ac,0x50);
    if (cVar3 == '\0') {
      iVar2 = 0x58;
    }
    else {
      iVar2 = 0x55;
    }
  }
  else {
    iVar5 = param_1 + 0x2ac;
    uVar4 = settings_getter(iVar5,0xd);
    iVar2 = (uint)*(ushort *)(param_1 + 0x678) * 2;
    uVar1 = (uint8_t)((ushort)*(uint16_t *)(iVar2 + iVar6) >> 8);
    uVar7 = (uint8_t)*(uint16_t *)(iVar2 + iVar6);
    switch(uVar4) {
    case 0:
      field_setter(iVar5,0x11,uVar1);
      iVar2 = 0x12;
      break;
    case 1:
      field_setter(iVar5,0x13,uVar1);
      iVar2 = 0x14;
      break;
    case 2:
      field_setter(iVar5,0x15,uVar1);
      iVar2 = 0x16;
      break;
    case 3:
      field_setter(iVar5,0x17,uVar1);
      iVar2 = 0x18;
      break;
    case 4:
      field_setter(iVar5,0x19,uVar1);
      iVar2 = 0x1a;
      break;
    case 5:
      field_setter(iVar5,0x1b,uVar1);
      iVar2 = 0x1c;
      break;
    case 6:
      field_setter(iVar5,0x1d,uVar1);
      iVar2 = 0x1e;
      break;
    case 7:
      field_setter(iVar5,0x1f,uVar1);
      iVar2 = 0x20;
      break;
    case 8:
      field_setter(iVar5,0x21,uVar1);
      iVar2 = 0x22;
      break;
    case 9:
      field_setter(iVar5,0x23,uVar1);
      iVar2 = 0x24;
      break;
    case 10:
      field_setter(iVar5,0x25,uVar1);
      iVar2 = 0x26;
      break;
    case 0xb:
      field_setter(iVar5,0x27,uVar1);
      iVar2 = 0x28;
      break;
    case 0xc:
      field_setter(iVar5,0x29,uVar1);
      iVar2 = 0x2a;
      break;
    case 0xd:
      field_setter(iVar5,0x2c,uVar1);
      iVar2 = 0x2d;
      break;
    case 0xe:
      field_setter(iVar5,0x2f,uVar1);
      iVar2 = 0x30;
      break;
    default:
      goto code_r0x105126ce;
    }
  }
  field_setter(param_1 + 0x2ac,iVar2,uVar7);
code_r0x105126ce:
  *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
  return;
}
