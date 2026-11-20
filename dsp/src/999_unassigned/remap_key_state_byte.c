/* @k10d remap_key_state_byte @ 0x000d2ff2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Reads a key state byte and rewrites it based on several modifier flag bytes.
 * summary:
 *   The function reads DAT_0003c12b and, depending on its value and the contents of
 *   modifier bytes (DAT_0003c10a-c, DAT_0003c10d-e, DAT_0003c107, DAT_0003c101), overwrites
 *   DAT_0003c12b with a different byte value. It also sets DAT_0003cd62 to 0x14, points
 *   DAT_0003cd68 to DAT_000fb0ea, and calls lookup_next_byte_in_table before the remapping
 *   logic. Finally, it calls set_state_byte_from_flags with a masked value from
 *   DAT_0003c102.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remap_key_state_byte(void)

{
  DAT_0003cd63 = DAT_0003c102 & 0xf8;
  DAT_0003cd62 = 0x14;
  _DAT_0003cd68 = &DAT_000fb0ea;
  lookup_next_byte_in_table(&DAT_0003c12b);
  if (DAT_0003c12b == '\x16') {
    if (DAT_0003c10d == 'A') {
      DAT_0003c12b = '\x13';
    }
    else if (DAT_0003c10e == 'c') {
      DAT_0003c12b = '\x14';
    }
    else if (DAT_0003c10c == '\x02') {
      DAT_0003c12b = '2';
    }
  }
  else if (DAT_0003c12b == '\x1c') {
    if (DAT_0003c10c == '\x03') {
      DAT_0003c12b = '/';
    }
    else if (DAT_0003c101 == -0x6c) {
      DAT_0003c12b = -1;
    }
  }
  else if (DAT_0003c12b == '\x1e') {
    if (DAT_0003c10c == '\x01') {
      DAT_0003c12b = '\x1f';
    }
    else if ((DAT_0003c10a == 'h') || (DAT_0003c10a == 'q')) {
      DAT_0003c12b = '\x15';
    }
  }
  else if (DAT_0003c12b == '\x19') {
    if (DAT_0003c10a == 'x') {
      DAT_0003c12b = '\x17';
    }
    else if (DAT_0003c10c == '\x02') {
      DAT_0003c12b = '0';
    }
  }
  else if (DAT_0003c12b == '\x18') {
    if (DAT_0003c10a == 'x') {
      DAT_0003c12b = '-';
    }
    else if (DAT_0003c10c == '\x01') {
      DAT_0003c12b = -1;
    }
  }
  else if ((DAT_0003c12b == '\x1a') && (DAT_0003c107 == 'A')) {
    DAT_0003c12b = '1';
  }
  set_state_byte_from_flags(DAT_0003cd63);
  return;
}
