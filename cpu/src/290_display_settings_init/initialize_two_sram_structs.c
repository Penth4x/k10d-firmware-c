/* @k10d initialize_two_sram_structs @ 0x1052fc0e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Sets up two SDRAM data structures with ROM pointers and calls an initialization routine
 *   for each.
 * summary:
 *   The function writes pointers to ROM data (0x105fb31c, 0x105fb32a, 0x105fb323) and a
 *   SDRAM address (0x80013944) into two distinct SDRAM locations (0x8005accc and
 *   0x8005acd8). It calls prepend_to_singly_linked_list with two different SDRAM arguments
 *   (0x800139b8 and 0x800139c8), likely initializing or linking these structures. The
 *   specific role of the data structures is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_two_sram_structs(void)

{
  _DAT_8005accc/*SDRAM*/ = (uint32_t)&DAT_105fb31c/*ROM*/;
  _DAT_8005acd0/*SDRAM*/ = (uint32_t)&DAT_105fb32a/*ROM*/;
  _DAT_8005acd4/*SDRAM*/ = 0x80013944/*SDRAM*/;
  prepend_to_singly_linked_list((void *)0x800139b8/*SDRAM*/);
  _DAT_8005acd8/*SDRAM*/ = (uint32_t)&DAT_105fb323/*ROM*/;
  _DAT_8005acdc/*SDRAM*/ = (uint32_t)&DAT_105fb32a/*ROM*/;
  _DAT_8005ace0/*SDRAM*/ = 0x80013944/*SDRAM*/;
  prepend_to_singly_linked_list((void *)0x800139c8/*SDRAM*/);
  return;
}
