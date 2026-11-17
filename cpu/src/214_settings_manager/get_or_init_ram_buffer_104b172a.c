/* @k10d get_or_init_ram_buffer_104b172a @ 0x104b172a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a RAM buffer, initializing it once via two helper calls if a flag
 *   is unset.
 * summary:
 *   Checks the global flag iRam80049280; if zero, sets it to 1 and calls
 *   alloc_and_zero_struct_104b247a and prepend_to_singly_linked_list with SDRAM addresses.
 *   Always returns the constant pointer 0x80049234. The callees' roles are unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_ram_buffer_104b172a(void)

{
  if (iRam80049280 == 0) {
    iRam80049280 = 1;
    alloc_and_zero_struct_104b247a((void *)0x80049234/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800106d8/*SDRAM*/);
  }
  return 0x80049234/*SDRAM*/;
}
