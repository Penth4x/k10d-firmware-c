/* @k10d FUN_000d73f2 @ 0x000d73f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d73f2(void)

{
  DAT_0003c48a = 0x40;
  DAT_0003c483 = 0x18;
  DAT_0003f324 = 3;
  process_camera_state_flags_000c4a56();
  call_e31d6_with_0x1b_and_low_nibble();
  _DAT_0003c010 = _DAT_0003c56c & 0x3ff;
  call_e30ec_with_e_and_dat_3c010();
  FUN_000d5642(10);
  if (DAT_0003c40e == '\x01') {
    DAT_0003c00d = 0x23;
  }
  else {
    DAT_0003c00d = 3;
  }
  write_byte_to_ram_and_call_two_routines(0xc,DAT_0003c00d);
  if ((DAT_0003f3e1 & 0x10) != 0) {
    write_masked_field_and_call_two_routines(0xf,4);
    FUN_000ed8b8();
  }
  _DAT_000000d4 = (uint3)((uint)_DAT_000000d4 >> 8) & 0xffff;
  DAT_000000ee = 1;
  DAT_000000e6 = 0xff;
  DAT_000000d7 = 9;
  write_byte_to_ram_and_call_two_routines(0xb,0xa7);
  DAT_00000057 = DAT_00000057 | 1;
  do {
    if ((DAT_00000005 & 0x40) != 0) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x19);
      _DAT_0003c2ca = (uint16_t)_DAT_000000d4;
      goto LAB_000d74de;
    }
  } while ((DAT_000000ef & 0x40) == 0);
  _DAT_0003c2ca = 0xffff;
LAB_000d74de:
  _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x19);
  if ((DAT_0003f3e1 & 0x10) != 0) {
    clear_bit_in_dat_0003c00b();
  }
  call_e31d6_with_0x1b_and_low_nibble();
  return;
}
