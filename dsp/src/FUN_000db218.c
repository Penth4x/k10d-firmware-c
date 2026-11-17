/* @k10d FUN_000db218 @ 0x000db218
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000db218(void)

{
  DAT_00000400 = DAT_00000400 | 0xf;
  DAT_00000062 = 0;
  update_ram_byte_bits(0xb);
  uRam00000000 = CONCAT13((char)uRam00000000,_DAT_00000001) | 0x10000000/*ROM*/;
  set_ram_flag_bits();
  return;
}
