/* @k10d map_state_to_index @ 0x000c5c60
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Returns a small integer index derived from the value of global DAT_0003c444.
 * summary:
 *   Reads the byte at DAT_0003c444 and maps it to one of three values: 3 if zero, 1 if 0x01
 *   or 0x03, 2 if 0x02, otherwise returns the input argument unchanged. No memory writes or
 *   callees are involved. The role of DAT_0003c444 is not determinable from this code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_state_to_index(uint32_t param_1)

{
  if (DAT_0003c444 == '\0') {
    param_1 = 3;
  }
  else if ((DAT_0003c444 == '\x01') || (DAT_0003c444 == '\x03')) {
    param_1 = 1;
  }
  else if (DAT_0003c444 == '\x02') {
    param_1 = 2;
  }
  return param_1;
}
