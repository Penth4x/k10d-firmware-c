/* @k10d decrement_byte_and_notify @ 0x103697c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t decrement_byte_and_notify(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint32_t uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x2b0);
  if (bVar1 == 1) {
    uVar3 = 0;
  }
  else {
    if (param_2 < (int)(uint)bVar1) {
      cVar2 = bVar1 - (char)param_2;
    }
    else {
      cVar2 = '\x01';
    }
    *(char *)(param_1 + 0x2b0) = cVar2;
    set_field_and_call_helper_104bb58a(param_1 + 0x3c,*(uint16_t *)((uint)*(byte *)(param_1 + 0x2b0) * 2 + 0x10557b14/*ROM*/));
    uVar3 = 1;
  }
  return uVar3;
}
