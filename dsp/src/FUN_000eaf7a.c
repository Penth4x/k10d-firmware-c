/* @k10d FUN_000eaf7a @ 0x000eaf7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eaf7a(void)

{
  uint16_t uVar1;
  uint uVar2;
  
  copy_global_and_call_helper();
  write_nibble_to_ram_region(0x13);
  if ((DAT_0003c003 & 0x80) != 0) {
    DAT_0003c1eb = DAT_0003c1eb | 4;
    wait_for_status_flag();
    DAT_0003c1eb = DAT_0003c1eb & 0xfb;
  }
  DAT_0003c588 = DAT_0003c588 & 0xfb | 2;
  DAT_0003c1e7 = DAT_0003c1e7 & 0xef;
  DAT_00000002 = DAT_00000002 | 3;
  FUN_000ea136();
  _DAT_0003c276 = _DAT_0003f3ec;
  uVar2 = _DAT_0003f3ec + 1;
  _DAT_0003c21a = 0x3f6;
  _DAT_0003f3ec = (short)(uVar2 >> 0x10);
  uVar1 = _DAT_0003f3ec;
  _DAT_0003c21c = _DAT_0003f3ec;
  _DAT_0003f3ec = uVar2;
  compare_and_adjust_value_000ea04e(0x3f6,uVar1);
  if (_DAT_0003f3ec != _DAT_0003c276) {
    FUN_000d5642(10);
  }
  _DAT_0003c21a = 0x3f7;
  _DAT_0003c21c = _DAT_0003f3ee;
  compare_and_adjust_value_000ea04e(0x3f7,_DAT_0003f3ec & 0xffff);
  if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    if ((((DAT_0003c440 != '\b') && (DAT_0003c440 != '\x11')) && ((DAT_0003c4d1 & 8) == 0)) &&
       (((DAT_0003c4d0 & 0x40) == 0 && ((DAT_0003c1ec & 1) == 0)))) {
      call_four_initialization_routines_000e25b8();
    }
    _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x13);
    _DAT_0003c264 = _DAT_000000d8 << 2;
    set_two_byte_state_pair_000ecd6c();
    set_three_byte_flags_000ecde4();
    initialize_state_block(_DAT_0003c264);
  }
  else {
    call_four_initialization_routines_000e25aa();
  }
  FUN_000ea14a();
  if (((DAT_0003c036 & 1) == 0) && ((DAT_0003c493 == '\t' || (DAT_0003c493 == '\x15')))) {
    DAT_00000006 = DAT_00000006 & 0xbf;
  }
  if ((DAT_0003c066 & 0x40) == 0) {
    FUN_000d9e2c();
    if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
       (((DAT_0003c193 & 1) != 0 || ((DAT_0003c004 & 2) != 0)))) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
      _DAT_0003c268 = _DAT_000000d4 << 2;
      set_two_byte_state_pair_000ecd6c();
      initialize_state_block(_DAT_0003c268);
    }
    DAT_0003c1eb = DAT_0003c1eb | 2;
    process_camera_state_flags_000c4a56();
    process_camera_state_flags_000da058();
  }
  DAT_00000057 = DAT_00000057 & 0xfe;
  DAT_00000006 = DAT_00000006 | 0x40;
  if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    DAT_0003c1ea = DAT_0003c1ea | 8;
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c268 = _DAT_000000d4 << 2;
    initialize_state_block(__frv_reg_unset(4));
    set_two_byte_state_pair_000ecd6c();
  }
  return;
}
