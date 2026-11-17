/* @k10d write_nibble_to_gpio_port @ 0x10450fbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10450fce) overlaps instruction at (ram,0x10450fcc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_nibble_to_gpio_port(uint32_t param_1,uint32_t param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_3 & 0xffff;
  uVar1 = (ushort)param_3;
  switch(param_2) {
  case 0:
    _DAT_40060012/*KEYPAD*/ = _DAT_40060012/*KEYPAD*/ & 0xff | (ushort)(uVar2 << 0xc);
    break;
  case 1:
    _DAT_40060012/*KEYPAD*/ = _DAT_40060012/*KEYPAD*/ & 0xf00f | (ushort)(uVar2 << 4);
    break;
  case 2:
    _DAT_40060012/*KEYPAD*/ = _DAT_40060012/*KEYPAD*/ & 0xf0f0 | uVar1;
    break;
  case 3:
    _DAT_40060014/*KEYPAD*/ = _DAT_40060014/*KEYPAD*/ & 0xfff | (ushort)(uVar2 << 0xc);
    break;
  case 4:
    _DAT_40060014/*KEYPAD*/ = _DAT_40060014/*KEYPAD*/ & 0xf0ff | (ushort)(uVar2 << 8);
    break;
  case 5:
    _DAT_40060014/*KEYPAD*/ = _DAT_40060014/*KEYPAD*/ & 0xff0f | (ushort)(uVar2 << 4);
    break;
  case 6:
    _DAT_40060014/*KEYPAD*/ = _DAT_40060014/*KEYPAD*/ & 0xfff0 | uVar1;
    break;
  case 7:
    _DAT_40060016/*KEYPAD*/ = _DAT_40060016/*KEYPAD*/ & 0xff | (ushort)(uVar2 << 8);
    break;
  case 8:
    _DAT_40060016/*KEYPAD*/ = _DAT_40060016/*KEYPAD*/ & 0xf0f | (ushort)(uVar2 << 4);
    break;
  case 9:
    _DAT_40060016/*KEYPAD*/ = _DAT_40060016/*KEYPAD*/ & 0xff0 | uVar1;
    break;
  case 10:
    _DAT_40060018/*KEYPAD*/ = _DAT_40060018/*KEYPAD*/ & 0xf00 | (ushort)(uVar2 << 0xc);
    break;
  case 0xb:
    _DAT_40060018/*KEYPAD*/ = _DAT_40060018/*KEYPAD*/ & 0xf000 | (ushort)(uVar2 << 8);
    break;
  case 0xc:
    _DAT_4006001a/*KEYPAD*/ = _DAT_4006001a/*KEYPAD*/ & 0xfff | (ushort)(uVar2 << 0xc);
    break;
  case 0xd:
    _DAT_4006001a/*KEYPAD*/ = _DAT_4006001a/*KEYPAD*/ & 0xf0ff | (ushort)(uVar2 << 8);
    break;
  case 0xe:
    _DAT_4006001a/*KEYPAD*/ = _DAT_4006001a/*KEYPAD*/ & 0xff0f | (ushort)(uVar2 << 4);
    break;
  case 0xf:
    _DAT_4006001a/*KEYPAD*/ = _DAT_4006001a/*KEYPAD*/ & 0xfff0 | uVar1;
    break;
  case 0x10:
    _DAT_4006001c/*KEYPAD*/ = _DAT_4006001c/*KEYPAD*/ & 0xff0 | (ushort)(uVar2 << 0xc);
    break;
  case 0x11:
    _DAT_4006001c/*KEYPAD*/ = _DAT_4006001c/*KEYPAD*/ & 0xf0f0 | (ushort)(uVar2 << 8);
    break;
  case 0x12:
    _DAT_4006001c/*KEYPAD*/ = _DAT_4006001c/*KEYPAD*/ & 0xff00 | (ushort)(uVar2 << 4);
    break;
  case 0x13:
    _DAT_4006001e/*KEYPAD*/ = _DAT_4006001e/*KEYPAD*/ & 0xff0 | (ushort)(uVar2 << 0xc);
    break;
  case 0x14:
    _DAT_4006001e/*KEYPAD*/ = _DAT_4006001e/*KEYPAD*/ & 0xf0f0 | (ushort)(uVar2 << 8);
    break;
  case 0x15:
    _DAT_4006001e/*KEYPAD*/ = _DAT_4006001e/*KEYPAD*/ & 0xff0 | (ushort)(uVar2 << 4);
    break;
  case 0x16:
    _DAT_40060022/*KEYPAD*/ = _DAT_40060022/*KEYPAD*/ & 0xf00 | (ushort)(uVar2 << 0xc);
    break;
  case 0x17:
    _DAT_40060022/*KEYPAD*/ = _DAT_40060022/*KEYPAD*/ & 0xf000 | (ushort)(uVar2 << 8);
    break;
  case 0x18:
    _DAT_40060024/*KEYPAD*/ = _DAT_40060024/*KEYPAD*/ & 0xff | (ushort)(uVar2 << 0xc);
    break;
  case 0x19:
    _DAT_40060024/*KEYPAD*/ = _DAT_40060024/*KEYPAD*/ & 0xf00f | (ushort)(uVar2 << 4);
    break;
  case 0x1a:
    _DAT_40060024/*KEYPAD*/ = _DAT_40060024/*KEYPAD*/ & 0xf0f0 | uVar1;
    break;
  case 0x1b:
    _DAT_40060026/*KEYPAD*/ = _DAT_40060026/*KEYPAD*/ & 0xf00 | (ushort)(uVar2 << 0xc);
    break;
  case 0x1c:
    _DAT_40060026/*KEYPAD*/ = _DAT_40060026/*KEYPAD*/ & 0xf000 | (ushort)(uVar2 << 8);
    break;
  case 0x1d:
    _DAT_40060028/*KEYPAD*/ = _DAT_40060028/*KEYPAD*/ & 0xfff | (ushort)(uVar2 << 0xc);
    break;
  case 0x1e:
    _DAT_40060028/*KEYPAD*/ = _DAT_40060028/*KEYPAD*/ & 0xf0ff | (ushort)(uVar2 << 8);
    break;
  case 0x1f:
    _DAT_40060028/*KEYPAD*/ = _DAT_40060028/*KEYPAD*/ & 0xff0f | (ushort)(uVar2 << 4);
    break;
  case 0x20:
    _DAT_40060028/*KEYPAD*/ = _DAT_40060028/*KEYPAD*/ & 0xfff0 | uVar1;
    break;
  case 0x21:
    _DAT_4006002a/*KEYPAD*/ = _DAT_4006002a/*KEYPAD*/ & 0xf00 | (ushort)(uVar2 << 0xc);
    break;
  case 0x22:
    _DAT_4006002a/*KEYPAD*/ = _DAT_4006002a/*KEYPAD*/ & 0xf000 | (ushort)(uVar2 << 8);
    break;
  default:
  }
  return;
}
