/* @k10d write_three_digit_decimal @ 0x10477508
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Formats a 3-digit integer (100-999) into ASCII digits at param_1+8..10 and returns 1.
 * summary:
 *   Calls get_or_init_sram_buffer_10478858 first, then checks if param_2 is in the range
 *   100..999. If so, it writes the hundreds, tens, and ones digits as ASCII characters to
 *   offsets 8, 9, and 10 of the buffer pointed to by param_1. Returns 1 on success, 0
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10477526) overlaps instruction at (ram,0x10477524)
    */

uint32_t write_three_digit_decimal(int param_1,int param_2)

{
  char cVar1;
  
  get_or_init_sram_buffer_10478858();
  if ((99 < param_2) && (param_2 < 1000)) {
    *(char *)(param_1 + 8) = (char)(param_2 / 100) + '0';
    cVar1 = (char)(param_2 / 10);
    *(char *)(param_1 + 9) = cVar1 + (char)((param_2 / 10) / 10) * -10 + '0';
    *(char *)(param_1 + 10) = (char)param_2 + '0' + cVar1 * -10;
    return 1;
  }
  return 0;
}
