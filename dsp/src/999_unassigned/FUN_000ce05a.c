/* @k10d FUN_000ce05a @ 0x000ce05a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ce05a(void)

{
  if ((((DAT_0003f2d9 & 0x40) != 0) && ((DAT_0003ce00 & 0xe0) != 0)) && ((DAT_000000ed & 0x20) == 0)
     ) {
    process_state_transition_flags();
    update_status_flags_and_dispatch_000cd4ac();
    if ((DAT_0003ce07 & 0x80) != 0) {
      reset_state_flags_and_call_initializers_000cd9de();
    }
  }
  return;
}
