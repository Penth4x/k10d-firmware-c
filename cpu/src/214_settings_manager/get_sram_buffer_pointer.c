/* @k10d get_sram_buffer_pointer @ 0x104b0288
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a fixed SDRAM address, initializing it once via two unknown helper calls.
 * summary:
 *   Checks the global flag iRam80049208; if zero, sets it to 1 and calls
 *   alloc_and_zero_small_struct_104b046c and prepend_to_singly_linked_list with SDRAM
 *   arguments. Always returns the constant SDRAM address 0x800491fc. The specific role of
 *   the buffer or the initialization helpers is not determinable from the provided
 *   pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_sram_buffer_pointer(void)

{
  if (iRam80049208 == 0) {
    iRam80049208 = 1;
    alloc_and_zero_small_struct_104b046c((void *)0x800491fc/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800106b0/*SDRAM*/);
  }
  return 0x800491fc/*SDRAM*/;
}
