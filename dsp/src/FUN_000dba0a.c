/* @k10d FUN_000dba0a @ 0x000dba0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dba0a(void)

{
  if ((DAT_0003c036 & 1) == 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
    DAT_00000401 = DAT_00000401 | 0x40;
    DAT_00000006 = DAT_00000006 & 0xbf;
    FUN_000d5642(500);
    poll_and_average_status_bytes();
    quantize_four_sample_deltas(0x3c500,&DAT_0003c520,0x3c530);
    transform_four_byte_blocks(&DAT_0003c520,0x3c550);
    poll_until_flag_or_timeout();
    FUN_000d5642(3000);
    configure_seven_control_registers();
    quantize_four_sample_deltas(&DAT_0003c640,0x3c660,0x3c670);
    transform_four_byte_blocks(0x3c660,0x3c6a0);
    DAT_00000006 = DAT_00000006 | 0x40;
  }
  return;
}
