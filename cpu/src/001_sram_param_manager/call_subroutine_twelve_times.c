/* @k10d call_subroutine_twelve_times @ 0x100f0f1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes get_sram_field_at_offset_0x20 twelve times in a loop.
 * summary:
 *   The function executes a do-while loop that runs three times, calling
 *   get_sram_field_at_offset_0x20 four times per iteration for a total of twelve calls. It
 *   returns 0 upon completion. The specific role of get_sram_field_at_offset_0x20 is
 *   unknown, so the overall purpose cannot be determined beyond the repetition pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_twelve_times(void)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    get_sram_field_at_offset_0x20();
    get_sram_field_at_offset_0x20();
    get_sram_field_at_offset_0x20();
    get_sram_field_at_offset_0x20();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}
