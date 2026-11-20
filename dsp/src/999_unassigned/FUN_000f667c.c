/* @k10d FUN_000f667c @ 0x000f667c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f667c(void)

{
  if (DAT_0003c392 == '\x01') {
    DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  }
  or_bytes_into_four_globals_000f6ad6(0x10,0x10,0x20,0x30);
  or_bytes_into_four_globals_000f6ad6(0x40,0xc0,0,0);
  return;
}
