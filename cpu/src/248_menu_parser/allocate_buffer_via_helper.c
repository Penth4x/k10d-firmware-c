/* @k10d allocate_buffer_via_helper @ 0x104de504
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Obtains a pointer from copy_bytes_to_sram_buffer and passes it to
 *   allocate_buffer_with_status with a null pointer and size 0x10, returning the result.
 * summary:
 *   The function calls copy_bytes_to_sram_buffer to get a void pointer, then calls
 *   allocate_buffer_with_status with that pointer, a null pointer, and the constant 0x10.
 *   It returns the integer result from allocate_buffer_with_status. The specific roles of
 *   the callees are unknown, but the pattern suggests a buffer allocation or initialization
 *   operation with a fixed size of 16 bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_buffer_via_helper(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)copy_bytes_to_sram_buffer((int *)__frv_reg_unset(4));
  iVar2 = allocate_buffer_with_status(pvVar1,(uint32_t *)0x0,0x10);
  return iVar2;
}
