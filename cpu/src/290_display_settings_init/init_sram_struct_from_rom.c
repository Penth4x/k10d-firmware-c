/* @k10d init_sram_struct_from_rom @ 0x10530344
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Copies five pointer/offset fields from a ROM table into an SDRAM structure and calls an
 *   initialization routine.
 * summary:
 *   Writes five values from the ROM region (0x10602e84-0x10602ebc) into consecutive SDRAM
 *   addresses (0x8005af50-0x8005af60). The values include pointers and calculated offsets
 *   (u__10602e92 + 7). Finally calls prepend_to_singly_linked_list with a fixed SDRAM
 *   address 0x80014538. The specific subsystem is not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_sram_struct_from_rom(void)

{
  _DAT_8005af50/*SDRAM*/ = (uint32_t)&DAT_10602e84;
  _DAT_8005af54/*SDRAM*/ = (uint32_t)u__10602e92;
  _DAT_8005af58/*SDRAM*/ = (uint32_t)(u__10602e92 + 7);
  _DAT_8005af5c/*SDRAM*/ = (uint32_t)&DAT_10602eae;
  _DAT_8005af60/*SDRAM*/ = (uint32_t)&DAT_10602ebc;
  prepend_to_singly_linked_list((void *)0x80014538/*SDRAM*/);
  return;
}
