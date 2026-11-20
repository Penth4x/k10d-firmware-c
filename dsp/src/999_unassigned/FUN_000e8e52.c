/* @k10d FUN_000e8e52 @ 0x000e8e52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e8e52(void)

{
  DAT_0003c00a = DAT_0003c00a & 2;
  write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  switch(DAT_0003c21f) {
  case 4:
    DAT_0003c00a = DAT_0003c00a | 0x14;
    break;
  case 5:
    DAT_0003c00a = DAT_0003c00a | 0x18;
    break;
  case 6:
    DAT_0003c00a = DAT_0003c00a | 0x11;
    break;
  case 7:
    DAT_0003c00a = DAT_0003c00a | 0x84;
    break;
  case 8:
    DAT_0003c00a = DAT_0003c00a | 0x24;
    break;
  case 9:
    DAT_0003c00a = DAT_0003c00a | 0x28;
    break;
  case 10:
    DAT_0003c00a = DAT_0003c00a | 0x21;
    break;
  case 0xb:
    DAT_0003c00a = DAT_0003c00a | 0x81;
    break;
  case 0xc:
    DAT_0003c00a = DAT_0003c00a | 0x44;
    break;
  case 0xd:
    DAT_0003c00a = DAT_0003c00a | 0x48;
    break;
  case 0xe:
    DAT_0003c00a = DAT_0003c00a | 0x41;
  }
  write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  return;
}
