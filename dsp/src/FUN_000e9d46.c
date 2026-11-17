/* @k10d FUN_000e9d46 @ 0x000e9d46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e9d46(void)

{
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 2) != 0);
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 1) == 0);
  FUN_000e9db2();
  set_flag_and_call_helper_000e9e18();
  do {
    set_global_to_eight_and_call_helper();
  } while ((DAT_0003c218 & 2) == 0);
  set_flag_and_call_helper_000e9e08();
  return;
}
