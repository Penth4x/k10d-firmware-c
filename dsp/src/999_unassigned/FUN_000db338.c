/* @k10d FUN_000db338 @ 0x000db338
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000db338(void)

{
  write_masked_field_and_call_two_routines(0x1b,0x40);
  FUN_000d5642(10);
  write_masked_field_and_call_two_routines(0x1b,0);
  return;
}
