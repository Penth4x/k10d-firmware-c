/* @k10d FUN_000db280 @ 0x000db280
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000db280(void)

{
  configure_seven_control_registers();
  busy_wait_on_mode_flag(500);
  load_and_copy_16_word_table();
  DAT_00000006 = DAT_00000006 | 0x40;
  quantize_four_sample_deltas((uint)&DAT_0003c640,0x3c660,0x3c670);
  transform_four_byte_blocks(0x3c660,0x3c6a0);
  return;
}
