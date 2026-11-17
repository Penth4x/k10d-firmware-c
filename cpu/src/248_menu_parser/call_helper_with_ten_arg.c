/* @k10d call_helper_with_ten_arg @ 0x104de4f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Calls allocate_buffer_with_status with the result of copy_bytes_to_sram_buffer, a null
 *   pointer, and 10, returning its result.
 * summary:
 *   The function obtains a pointer from copy_bytes_to_sram_buffer and passes it as the
 *   first argument to allocate_buffer_with_status along with a null pointer and the
 *   constant 10. It returns the value returned by allocate_buffer_with_status. No camera-
 *   specific behavior is evident from the pseudocode or the unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_ten_arg(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)copy_bytes_to_sram_buffer((int *)__frv_reg_unset(4));
  iVar2 = allocate_buffer_with_status(pvVar1,(uint32_t *)0x0,10);
  return iVar2;
}
