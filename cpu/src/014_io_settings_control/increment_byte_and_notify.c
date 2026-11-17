/* @k10d increment_byte_and_notify @ 0x10369784
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t increment_byte_and_notify(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (*(byte *)(param_1 + 0x2b0) == 0x11) {
    uVar1 = 0;
  }
  else {
    param_2 = (uint)*(byte *)(param_1 + 0x2b0) + param_2;
    if (0x11 < param_2) {
      param_2 = 0x11;
    }
    *(char *)(param_1 + 0x2b0) = (char)param_2;
    set_field_and_call_helper_104bb58a(param_1 + 0x3c,*(uint16_t *)((uint)*(byte *)(param_1 + 0x2b0) * 2 + 0x10557b14/*ROM*/));
    uVar1 = 1;
  }
  return uVar1;
}
