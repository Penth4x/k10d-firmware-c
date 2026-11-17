/* @k10d initialize_heap_pointers @ 0x104a90a8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Stores the system heap descriptor and a value from get_or_init_sram_buffer_1049c57c
 *   into two adjacent globals.
 * summary:
 *   The function calls get_system_heap to obtain the heap descriptor and writes it to
 *   _DAT_8004907c. It also calls get_or_init_sram_buffer_1049c57c and stores the result in
 *   _DAT_80049078. The role of get_or_init_sram_buffer_1049c57c is unknown, so the specific
 *   subsystem context is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_heap_pointers(void)

{
  _DAT_80049078/*SDRAM*/ = get_or_init_sram_buffer_1049c57c();
  _DAT_8004907c/*SDRAM*/ = get_system_heap();
  return;
}
