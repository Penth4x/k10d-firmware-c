/* @k10d get_or_init_sram_buffer_104ae40c @ 0x104ae40c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a fixed SDRAM buffer, initializing it once on first call.
 * summary:
 *   Checks the global flag iRam800491e0; if zero, sets it to 1 and calls two initialization
 *   routines (alloc_and_zero_struct_104ae8ea and prepend_to_singly_linked_list) with
 *   specific SDRAM addresses. Always returns the constant address 0x800491cc, which lies
 *   within the SDRAM region. The pattern indicates a lazy-initialization singleton accessor
 *   for a data structure located at 0x800491cc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_buffer_104ae40c(void)

{
  if (iRam800491e0 == 0) {
    iRam800491e0 = 1;
    alloc_and_zero_struct_104ae8ea((void*)0x800491cc/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x80010688/*SDRAM*/);
  }
  return 0x800491cc/*SDRAM*/;
}
