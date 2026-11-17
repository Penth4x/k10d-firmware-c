/* @k10d FUN_000f6ffe @ 0x000f6ffe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f6ffe(void)

{
  int iVar1;
  
  if ((((DAT_0003c128 & 0x40) != 0) && ((DAT_0003ce06 & 2) == 0)) &&
     (((DAT_0003ce00 & 0x20) == 0 || ((DAT_0003cb80 & 1) != 0)))) {
    check_and_update_byte_flag();
    iVar1 = call_with_low_two_bits();
    if (iVar1 == 0) {
      FUN_000cc4cc();
      DAT_0003ce01 = DAT_0003ce01 & 0xfe;
      DAT_0003ce04 = DAT_0003ce04 | 0x80;
      process_state_flags_and_dispatch_000cc870();
    }
  }
  return;
}
