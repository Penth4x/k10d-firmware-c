/* @k10d init_three_sram_structs @ 0x105308b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes three consecutive SDRAM structures with identical ROM pointers and distinct
 *   data addresses.
 * summary:
 *   The function writes a fixed set of pointers to ROM data (0x1061e05c, 0x1060e053,
 *   0x1060e04c) and SDRAM addresses into three blocks of globals starting at 0x8005b0b8,
 *   0x8005b0d0, and 0x8005b0e8. It calls prepend_to_singly_linked_list with increasing
 *   SDRAM arguments (0x8001480c, 0x8001481c, 0x8001482c) after each block initialization.
 *   The pattern suggests setting up three similar objects or channels in SDRAM.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_three_sram_structs(void)

{
  _DAT_8005b0cc/*SDRAM*/ = (uintptr_t)(&DAT_1061e05c);
  _DAT_8005b0b8/*SDRAM*/ = (uintptr_t)(&DAT_1060e053);
  _DAT_8005b0bc/*SDRAM*/ = (uintptr_t)(&DAT_1060e04c);
  _DAT_8005b0c0/*SDRAM*/ = 0x8001477c/*SDRAM*/;
  _DAT_8005b0c4/*SDRAM*/ = 0x80014798/*SDRAM*/;
  _DAT_8005b0c8/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x8001480c/*SDRAM*/));
  _DAT_8005b0e4/*SDRAM*/ = (uintptr_t)(&DAT_1061e05c);
  _DAT_8005b0d0/*SDRAM*/ = (uintptr_t)(&DAT_1060e053);
  _DAT_8005b0d4/*SDRAM*/ = (uintptr_t)(&DAT_1060e04c);
  _DAT_8005b0d8/*SDRAM*/ = 0x80014744/*SDRAM*/;
  _DAT_8005b0dc/*SDRAM*/ = 0x80014798/*SDRAM*/;
  _DAT_8005b0e0/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x8001481c/*SDRAM*/));
  _DAT_8005b0fc/*SDRAM*/ = (uintptr_t)(&DAT_1061e05c);
  _DAT_8005b0e8/*SDRAM*/ = (uintptr_t)(&DAT_1060e053);
  _DAT_8005b0ec/*SDRAM*/ = (uintptr_t)(&DAT_1060e04c);
  _DAT_8005b0f0/*SDRAM*/ = 0x80014760/*SDRAM*/;
  _DAT_8005b0f4/*SDRAM*/ = 0x80014798/*SDRAM*/;
  _DAT_8005b0f8/*SDRAM*/ = 0;
  prepend_to_singly_linked_list((uint32_t *)(0x8001482c/*SDRAM*/));
  return;
}
