/* @k10d FUN_000d52b4 @ 0x000d52b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool FUN_000d52b4(void)

{
  DAT_0003cbb7 = DAT_0003cbb7 | 0x10;
  update_two_pointer_pairs();
  accumulate_flag_based_offset();
  update_status_bits_from_flags();
  return (DAT_0003cb9b & 0x20) != 0;
}
