/* @k10d set_four_boolean_flags @ 0x10435974
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Converts four boolean values from an array into individual flag-setting calls.
 * summary:
 *   The function takes an object pointer and an array of four integers. It checks each of
 *   the first four elements for non-zero values and passes the resulting boolean (0 or 1)
 *   to four distinct, unnamed callee functions along with the object pointer. The specific
 *   meaning of the flags and the object is unknown because the callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_four_boolean_flags(int param_1,int *param_2)

{
  debug_flag_writer_0x1c(param_1,(uint)(*param_2 != 0));
  debug_flag_writer_0x08(param_1,(uint)(param_2[1] != 0));
  debug_flag_writer_0x0c(param_1,(uint)(param_2[2] != 0));
  write_pattern_to_offset_0x10(param_1,(uint)(param_2[3] != 0));
  return;
}
