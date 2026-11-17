/* @k10d FUN_000e0528 @ 0x000e0528
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e0528(void)

{
  if ((DAT_0003c127 & 0x80) != 0) {
    DAT_0003c130 = DAT_0003c130 | 8;
    update_status_byte_and_send_000e1b62();
    check_key_enabled_and_dispatch(0xd2);
  }
  return;
}
