/* @k10d retry_flash_program_on_error @ 0x10444604
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a flash operation and, if it returns status 3, performs cleanup and retries the
 *   operation up to two additional times.
 * summary:
 *   Calls compare_short_arrays with the provided parameters and a fixed pointer
 *   (0x8001ef80). If the result is 3, it executes two unknown helper functions, then
 *   attempts two recovery steps via SDRAM-resident code (SUB_8000046e and SUB_8000048e)
 *   before calling compare_short_arrays again. It finishes with two more helper calls and
 *   returns the final status code. The caller flash_program_block suggests this is a
 *   wrapper for flash memory operations with error recovery.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_flash_program_on_error(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = compare_short_arrays(param_1,param_2,0x8001ef80/*SDRAM*/,param_3);
  if (iVar1 == 3) {
    call_kernel_service_at_0x1000d3ce();
    (*(code *)&SUB_80000610)();
    iVar1 = (*(code *)&SUB_8000046e)(param_2);
    if ((iVar1 == 0) && (iVar1 = (*(code *)&SUB_8000048e)(param_2,0x8001ef80/*SDRAM*/,param_3), iVar1 == 0))
    {
      iVar1 = compare_short_arrays(param_1,param_2,0x8001ef80/*SDRAM*/,param_3);
    }
    (*(code *)&SUB_80000646)();
    call_kernel_service_at_0x1000d3e8();
  }
  return iVar1;
}
