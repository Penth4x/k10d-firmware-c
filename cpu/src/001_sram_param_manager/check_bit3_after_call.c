/* @k10d check_bit3_after_call @ 0x100f08c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper with argument 0x14, then returns whether bit 3 of DAT_50000106
 *   is set.
 * summary:
 *   The function invokes set_error_flag_and_halt with the constant 0x14 as its sole
 *   argument. It then reads the global DAT_50000106 and tests bit 3 (mask 0x8). The result
 *   of that bit test is returned as a boolean. The role of DAT_50000106 and the helper is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_bit3_after_call(void)

{
  set_error_flag_and_halt(0x14);
  return (DAT_50000106 & 8) != 0;
}
