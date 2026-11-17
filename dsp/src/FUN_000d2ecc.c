/* @k10d FUN_000d2ecc @ 0x000d2ecc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2ecc(void)

{
  DAT_0003cd63 = DAT_0003c108;
  DAT_0003cd62 = 0x12;
  _DAT_0003cd68 = (uint32_t)&DAT_000fb0fe;
  lookup_next_byte_in_table((void *)&DAT_0003c12b);
  if (DAT_0003c12b == '\b') {
    if (DAT_0003c109 == '8') {
      DAT_0003c12b = '\x03';
    }
    else if (DAT_0003c109 == '(') {
      DAT_0003c12b = '\x04';
    }
  }
  return;
}
