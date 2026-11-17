/* @k10d extract_shifted_field_if_flag_set @ 0x000f7210
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns param_1, or a right-shifted value from DAT_0003c13c if bit 6 of DAT_0003c128 is
 *   set.
 * summary:
 *   Checks bit 6 (0x40) of the global DAT_0003c128. If set, it calls
 *   poll_input_and_fill_buffer with arguments 0x82, 0x13, a pointer to DAT_0003c13c, and 2,
 *   then returns the value at DAT_0003c13c shifted right by 5 bits. Otherwise, it returns
 *   the input parameter unchanged. The role of DAT_0003c128 and DAT_0003c13c is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int extract_shifted_field_if_flag_set(int param_1)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_input_and_fill_buffer(0x82,0x13,(void *)&DAT_0003c13c,2);
    param_1 = (int)(uint)_DAT_0003c13c >> 5;
  }
  return param_1;
}
