/* @k10d FUN_000e786a @ 0x000e786a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000e786a(void)

{
  handle_flag_0x40_event();
  DAT_00000002 = DAT_00000002 & 0xf7;
  DAT_00000422 = 0;
  DAT_00000072 = 0xb2;
  DAT_00000004 = DAT_00000004 & 0x8f;
  write_byte_to_ram_and_call_two_routines(0xc,0);
  infinite_loop_000e7a46();
  write_masked_field_and_call_two_routines(0x1d,0x280);
  write_masked_field_and_call_two_routines(0x1d,0);
  write_masked_field_and_call_two_routines(0xd,0);
  DAT_0000000b = DAT_0000000b & 0xf7;
  DAT_00000004 = DAT_00000004 & 0x7f;
  DAT_000000ac = 0;
  call_subroutine_with_ten();
  call_subroutine_with_ten();
  call_subroutine_with_ten();
  call_subroutine_with_ten();
  call_subroutine_with_ten();
  DAT_00000002 = DAT_00000002 & 0x8f;
  DAT_00000402 = DAT_00000402 | 0x10;
  DAT_00000005 = DAT_00000005 & 0x7f;
  DAT_00000405 = DAT_00000405 | 0x80;
  DAT_0000000a = DAT_0000000a & 0x7f;
  DAT_0000042c = 0;
  DAT_0000040c = DAT_0000040c & 0xe1;
  write_byte_to_ram_and_call_two_routines(9,0x7f);
  DAT_00000006 = DAT_00000006 & 0xf;
  bRam00000000 = bRam00000000 & 0xfe;
  return 3;
}
