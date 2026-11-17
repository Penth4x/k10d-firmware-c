/* @k10d format_integer_as_four_digits_10477702 @ 0x10477702
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047771e) overlaps instruction at (ram,0x1047771c)
    */

uint32_t format_integer_as_four_digits_10477702(void *param_1,int param_2)

{
  char cVar1;
  
  get_or_init_sram_buffer_10478858();
  if ((0 < param_2) && (param_2 < 10000)) {
    *(char *)((int)param_1 + 0x15) = (char)(param_2 / 1000) + '0';
    *(char *)((int)param_1 + 0x16) =
         (char)(param_2 / 100) + (char)((param_2 / 100) / 10) * -10 + '0';
    cVar1 = (char)(param_2 / 10);
    *(char *)((int)param_1 + 0x17) = cVar1 + (char)((param_2 / 10) / 10) * -10 + '0';
    *(char *)((int)param_1 + 0x18) = (char)param_2 + '0' + cVar1 * -10;
    return 1;
  }
  return 0;
}
