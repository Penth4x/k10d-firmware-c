/* @k10d FUN_000e3e90 @ 0x000e3e90
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e3e90(void)

{
  DAT_0003c020 = DAT_0003c020 | 4;
  DAT_000000f6 = DAT_000000f6 | 0x80;
  check_state_and_dispatch();
  check_and_set_flag_if_idle();
  read_bytes_if_enabled(0x61,(void *)&DAT_0003c12c,1);
  dispatch_key_event(0x71,(int)&DAT_0003c12d);
  DAT_0003c804 = DAT_0003c804 & 0xf7;
  DAT_0003c07e = DAT_0003c07e & 0xbf;
  DAT_0003f55e = DAT_0003f55e & 0xf7;
  DAT_0003c022 = DAT_0003c022 & 0xbf;
  if ((DAT_0003c021 & 0x10) == 0) {
    DAT_00000002 = DAT_00000002 & 0xf7;
    DAT_00000422 = 0;
    DAT_00000072 = 0xb2;
    infinite_loop_000e7a46();
    write_masked_field_and_call_two_routines(0x1d,0x280);
    write_masked_field_and_call_two_routines(0x1d,0);
    write_masked_field_and_call_two_routines(0xd,0);
    DAT_0000000b = DAT_0000000b & 0xf7;
    handle_flag_0x40_event();
    DAT_00000004 = DAT_00000004 & 0x7f;
    DAT_000000ac = 0;
    DAT_00000002 = DAT_00000002 & 0x8f;
    DAT_00000402 = DAT_00000402 | 0x10;
    DAT_00000005 = DAT_00000005 & 0x7f;
    DAT_00000405 = DAT_00000405 | 0x80;
    DAT_0000042c = 0xe1;
    if ((DAT_0003c00f & 0x40) == 0) {
      DAT_0000000d = 0;
    }
    if ((DAT_0003c021 & 0x80) == 0) {
      DAT_0000040d = 2;
    }
    else {
      DAT_0000040d = 3;
    }
  }
  configure_gpio_port_bits();
  DAT_00000079 = DAT_00000079 | 0x82;
  DAT_00000078 = 0;
  DAT_00000085 = DAT_00000085 | 0x82;
  DAT_00000084 = 0;
  if (((DAT_0003c003 & 0x10) == 0) && ((DAT_0003c030 & 4) == 0)) {
    DAT_0003c00b = DAT_0003c00b | 8;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  }
  DAT_0003c020 = DAT_0003c020 & 0xfb;
  return;
}
