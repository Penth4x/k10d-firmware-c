/* @k10d pack_status_byte_fields @ 0x000c8e90
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Packs multiple 4-bit status fields from global variables into composite byte values.
 * summary:
 *   The function reads several global variables (DAT_0003c471, DAT_0003c46d, DAT_0003c46e,
 *   DAT_0003c493, DAT_0003c492) and combines their lower 4 bits into higher-order nibbles
 *   of target globals (DAT_0003c37c, DAT_0003c384, DAT_0003c372, DAT_0003c38d,
 *   DAT_0003c38e). It applies specific conditional overrides for certain values (e.g., -1,
 *   0x12, 0x15) and sets flag bits based on other global states (DAT_0003c589,
 *   DAT_0003c193, DAT_0003c004). It also sets DAT_0003c37b to specific constants (0xf3,
 *   0x9c, 0xfc) based on the value of DAT_0003c440.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void pack_status_byte_fields(void)

{
  char cVar1;
  byte bVar2;
  
  DAT_0003c37c = DAT_0003c471 & 0xf;
  bVar2 = DAT_0003c384 & 0xf;
  DAT_0003c384 = bVar2 | DAT_0003c471 << 4;
  if ((DAT_0003c471 == 0) &&
     ((((DAT_0003c127 & 2) != 0 || ((DAT_0003c127 & 1) != 0)) || (DAT_0003c440 == 0x11)))) {
    DAT_0003c37c = 1;
    DAT_0003c384 = bVar2 | 0x10;
  }
  switch(DAT_0003c46d) {
  case 0:
    cVar1 = '\0';
    break;
  case 1:
    cVar1 = '\x01';
    break;
  case 2:
    cVar1 = '\x02';
    break;
  case 3:
    cVar1 = '\x03';
    break;
  case 4:
    cVar1 = '\x04';
    break;
  case 5:
    cVar1 = '\x05';
    break;
  case 6:
    cVar1 = '\x06';
    break;
  case 7:
    cVar1 = '\a';
    break;
  case 8:
    cVar1 = '\b';
    break;
  case 9:
    cVar1 = '\t';
    break;
  case 10:
    cVar1 = '\n';
    if ((DAT_0003c129 & 1) != 0) {
      cVar1 = '\0';
    }
    break;
  default:
    cVar1 = '\0';
  }
  DAT_0003c37c = DAT_0003c37c | cVar1 << 4;
  switch(DAT_0003c46e) {
  case 0:
    bVar2 = 0;
    break;
  case 1:
    bVar2 = 1;
    break;
  case 2:
    bVar2 = 2;
    break;
  case 3:
    bVar2 = 3;
    break;
  case 4:
    bVar2 = 4;
    break;
  case 5:
    bVar2 = 5;
    break;
  case 6:
    bVar2 = 6;
    break;
  case 7:
    bVar2 = 7;
    break;
  case 8:
    bVar2 = 8;
    break;
  case 9:
    bVar2 = 9;
    break;
  case 10:
    bVar2 = 10;
    break;
  default:
    bVar2 = 0;
  }
  DAT_0003c372 = DAT_0003c471 & 0xf | bVar2 << 4;
  DAT_0003c38d = DAT_0003c493 << 4;
  if (DAT_0003c493 == -1) {
    DAT_0003c38d = 0xf0;
  }
  if (DAT_0003c493 == '\x12') {
    DAT_0003c38d = 0xb0;
  }
  if (DAT_0003c493 == '\x15') {
    DAT_0003c38d = 0xc0;
  }
  DAT_0003c38d = DAT_0003c38d | bVar2;
  DAT_0003c38e = DAT_0003c38e & 0xc0 | DAT_0003c492 & 0x3f;
  if (DAT_0003c492 == 0xff) {
    DAT_0003c38e = DAT_0003c38e | 0x3f;
  }
  if ((DAT_0003c589 & 1) == 0) {
    if ((DAT_0003c193 & 1) == 0) {
      if ((DAT_0003c004 & 2) == 0) {
        DAT_0003c38e = DAT_0003c38e & 0x3f;
      }
      else {
        DAT_0003c38e = DAT_0003c38e & 0x3f | 0x40;
      }
    }
    else {
      DAT_0003c38e = DAT_0003c38e & 0x3f | 0x80;
    }
  }
  else {
    DAT_0003c38e = DAT_0003c38e | 0xc0;
  }
  if (DAT_0003c440 == 1) {
    DAT_0003c37b = 0xf3;
  }
  else if ((DAT_0003c440 == 8) && ((DAT_0003c4df & 8) != 0)) {
    DAT_0003c37b = 0x9c;
  }
  else if ((DAT_0003c440 == 0) || ((DAT_0003c440 == 6 || (DAT_0003c440 == 2)))) {
    DAT_0003c37b = 0x9c;
  }
  else if (((DAT_0003c440 == 3) || (DAT_0003c440 == 7)) || (DAT_0003c440 == 8)) {
    DAT_0003c37b = 0x9c;
  }
  else if ((DAT_0003c440 < 9) || (0x10 < DAT_0003c440)) {
    if (DAT_0003c440 == 0x11) {
      DAT_0003c37b = 0xfc;
    }
    else {
      DAT_0003c37b = 0x9c;
    }
  }
  else {
    DAT_0003c37b = 0xfc;
  }
  return;
}
