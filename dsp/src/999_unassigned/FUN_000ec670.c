/* @k10d FUN_000ec670 @ 0x000ec670
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ec670(void)

{
  FUN_000da752();
  call_e31d6_with_0x1b_and_low_nibble();
  DAT_00000002 = DAT_00000002 & 0xfd;
  FUN_000d5642(4);
  DAT_00000002 = DAT_00000002 & 0xfe;
  return;
}
