/* @k10d FUN_000ec14a @ 0x000ec14a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ec14a(void)

{
  uint32_t uVar1;
  
  uVar1 = uRam00000000;
  DAT_00000400 = DAT_00000400 | 0xf;
  update_ram_byte_bits(0xb);
  uRam00000000 = CONCAT13((char)uVar1,_DAT_00000001) & 0xb0ffffff | 0x14000000;
  busy_wait_on_mode_flag(DAT_0003f3ea);
  uRam00000000 = uRam00000000 & 0xfbffffff;
  uRam00000000 = uRam00000000 | 0x40000000;
  DAT_0003c1eb = DAT_0003c1eb | 8;
  if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    write_three_bytes_to_low_memory();
    DAT_000000db = 0x13;
    _DAT_0003c1e8 = 0;
    do {
      do {
      } while ((DAT_00000057 & 4) == 0);
      DAT_00000057 = DAT_00000057 & 0xfb;
      initialize_state_block(1000);
      _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    } while (_DAT_0003c1e8 < 10);
    if ((DAT_0003c1ed & 0x10) != 0) {
      _DAT_0003c1e8 = 0;
      do {
        do {
        } while ((DAT_00000057 & 4) == 0);
        DAT_00000057 = DAT_00000057 & 0xfb;
        initialize_state_block(1000);
        _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
      } while (_DAT_0003c1e8 < 0x82);
    }
    DAT_000000db = 3;
  }
  else {
    FUN_000d5642(10);
    if ((DAT_0003c1ed & 0x10) != 0) {
      FUN_000d5642(0x82);
    }
  }
  wait_for_exit_condition();
  return;
}
