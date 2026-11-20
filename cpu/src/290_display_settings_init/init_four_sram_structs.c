/* @k10d init_four_sram_structs @ 0x1052fc84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes four consecutive 12-byte structures in SDRAM with pointers and calls a
 *   helper for each.
 * summary:
 *   The function writes a repeating pattern of four SDRAM pointers (0x80013a0c, 0x80013d0c,
 *   0x80013cdc, 0x80013eac) and two zero fields into four distinct memory locations
 *   starting at 0x8005ace4. After each 12-byte block initialization, it calls
 *   prepend_to_singly_linked_list with a unique SDRAM address (0x80013f30, 0x80013f40,
 *   0x80013f50, 0x80013f60). The first pointer in each block varies slightly (0x80013a0c,
 *   0x80013ab4, 0x800139d8), suggesting different configuration or state objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_four_sram_structs(void)

{
  _DAT_8005ace4/*SDRAM*/ = 0x80013a0c/*SDRAM*/;
  _DAT_8005ace8/*SDRAM*/ = 0x80013d0c/*SDRAM*/;
  _DAT_8005acec/*SDRAM*/ = 0x80013cdc/*SDRAM*/;
  _DAT_8005acf0/*SDRAM*/ = 0x80013eac/*SDRAM*/;
  DAT_8005acf4/*SDRAM*/ = 0;
  _DAT_8005acf6/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013f30/*SDRAM*/));
  _DAT_8005acf8/*SDRAM*/ = 0x80013a0c/*SDRAM*/;
  _DAT_8005acfc/*SDRAM*/ = 0x80013d0c/*SDRAM*/;
  _DAT_8005ad00/*SDRAM*/ = 0x80013cdc/*SDRAM*/;
  _DAT_8005ad04/*SDRAM*/ = 0x80013eac/*SDRAM*/;
  DAT_8005ad08/*SDRAM*/ = 0;
  _DAT_8005ad0a/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013f40/*SDRAM*/));
  _DAT_8005ad0c/*SDRAM*/ = 0x80013ab4/*SDRAM*/;
  _DAT_8005ad10/*SDRAM*/ = 0x80013d0c/*SDRAM*/;
  _DAT_8005ad14/*SDRAM*/ = 0x80013cdc/*SDRAM*/;
  _DAT_8005ad18/*SDRAM*/ = 0x80013eac/*SDRAM*/;
  DAT_8005ad1c/*SDRAM*/ = 0;
  _DAT_8005ad1e/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013f50/*SDRAM*/));
  _DAT_8005ad20/*SDRAM*/ = 0x800139d8/*SDRAM*/;
  _DAT_8005ad24/*SDRAM*/ = 0x80013d0c/*SDRAM*/;
  _DAT_8005ad28/*SDRAM*/ = 0x80013cdc/*SDRAM*/;
  _DAT_8005ad2c/*SDRAM*/ = 0x80013eac/*SDRAM*/;
  DAT_8005ad30/*SDRAM*/ = 0;
  _DAT_8005ad32/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x80013f60/*SDRAM*/));
  return;
}
