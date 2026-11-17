/* @k10d populate_sram_lookup_table @ 0x103fdd0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes a fixed sequence of 16-bit values into a contiguous SDRAM buffer, computing each
 *   entry as a constant minus one of two base offsets.
 * summary:
 *   The function stores 128 consecutive 16-bit words starting at 0x8001cc9c. Each value is
 *   derived by subtracting either _DAT_8000fad4 or _DAT_8000fad6 from a hardcoded constant,
 *   suggesting a table of relative offsets or deltas. No MMIO writes, function calls, or
 *   control flow are present; the operation is purely a static data initialization into
 *   SDRAM.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void populate_sram_lookup_table(void)

{
  _DAT_8001cc9c/*SDRAM*/ = 0x20;
  _DAT_8001cc9e/*SDRAM*/ = 0x48;
  _DAT_8001cca0/*SDRAM*/ = 0x78 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cca2/*SDRAM*/ = 0x10c - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cca4/*SDRAM*/ = 0x8c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cca6/*SDRAM*/ = 0x103 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cca8/*SDRAM*/ = 0xa8 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccaa/*SDRAM*/ = 0xba - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccac/*SDRAM*/ = 0xb6 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccae/*SDRAM*/ = 0xd0 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccb0/*SDRAM*/ = 0xc6 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccb2/*SDRAM*/ = 0xb4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccb4/*SDRAM*/ = 0xe0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccb6/*SDRAM*/ = 0xe4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccb8/*SDRAM*/ = 0xf2 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccba/*SDRAM*/ = 0xfa - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccbc/*SDRAM*/ = 0xf2 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccbe/*SDRAM*/ = 0xb2 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccc0/*SDRAM*/ = 0x10c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccc2/*SDRAM*/ = 0x7f - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccc4/*SDRAM*/ = 0x12a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccc6/*SDRAM*/ = 0x114 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccc8/*SDRAM*/ = 0x134 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccca/*SDRAM*/ = 0x76 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cccc/*SDRAM*/ = 0x17a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccce/*SDRAM*/ = 0xa3 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccd0/*SDRAM*/ = 0x88 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccd2/*SDRAM*/ = 0xa6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccd4/*SDRAM*/ = 0xd0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccd6/*SDRAM*/ = 0x62 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccd8/*SDRAM*/ = 0x130 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccda/*SDRAM*/ = 0x124 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccdc/*SDRAM*/ = 0x134 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccde/*SDRAM*/ = 0x50 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cce0/*SDRAM*/ = 0x13a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cce2/*SDRAM*/ = 0x78 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cce4/*SDRAM*/ = 0x14c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cce6/*SDRAM*/ = 0x6b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cce8/*SDRAM*/ = 0x14e - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccea/*SDRAM*/ = 0xd6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccec/*SDRAM*/ = 0x15c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccee/*SDRAM*/ = 0x8e - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccf0/*SDRAM*/ = 0x18a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccf2/*SDRAM*/ = 0x6b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccf4/*SDRAM*/ = 0x196 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccf6/*SDRAM*/ = 0x86 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccf8/*SDRAM*/ = 0x1c0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccfa/*SDRAM*/ = 0x83 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001ccfc/*SDRAM*/ = 0x1c8 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001ccfe/*SDRAM*/ = 0x6b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd00/*SDRAM*/ = 0x1d6 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd02/*SDRAM*/ = 0xcb - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd04/*SDRAM*/ = 0x1ea - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd06/*SDRAM*/ = 0x8b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd08/*SDRAM*/ = 0x1f0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd0a/*SDRAM*/ = 0xbb - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd0c/*SDRAM*/ = 0x206 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd0e/*SDRAM*/ = 0x7b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd10/*SDRAM*/ = 0x21a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd12/*SDRAM*/ = 0x8b - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd14/*SDRAM*/ = 0xa0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd16/*SDRAM*/ = 0xc6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd18/*SDRAM*/ = 0xb8 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd1a/*SDRAM*/ = 0xd4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd1c/*SDRAM*/ = 0xc0 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd1e/*SDRAM*/ = 0x100 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd20/*SDRAM*/ = 200 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd22/*SDRAM*/ = 0xc6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd24/*SDRAM*/ = 0xcc - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd26/*SDRAM*/ = 0x10a - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd28/*SDRAM*/ = 0xd2 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd2a/*SDRAM*/ = 0xde - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd2c/*SDRAM*/ = 0xde - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd2e/*SDRAM*/ = 0xe1 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd30/*SDRAM*/ = 0xdc - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd32/*SDRAM*/ = 0x128 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd34/*SDRAM*/ = 0x106 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd36/*SDRAM*/ = 0xb1 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd38/*SDRAM*/ = 0x10c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd3a/*SDRAM*/ = 0x61 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd3c/*SDRAM*/ = 0x12e - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd3e/*SDRAM*/ = 0x8c - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd40/*SDRAM*/ = 300 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd42/*SDRAM*/ = 0xd2 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd44/*SDRAM*/ = 300 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd46/*SDRAM*/ = 0xa8 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd48/*SDRAM*/ = 0x14e - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd4a/*SDRAM*/ = 0x6e - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd4c/*SDRAM*/ = 0x194 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd4e/*SDRAM*/ = 0x76 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd50/*SDRAM*/ = 0x1b8 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd52/*SDRAM*/ = 0xd1 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd54/*SDRAM*/ = 0xb2 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd56/*SDRAM*/ = 0xc9 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd58/*SDRAM*/ = 300 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd5a/*SDRAM*/ = 0xd9 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd5c/*SDRAM*/ = 0x16c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd5e/*SDRAM*/ = 0xd1 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd60/*SDRAM*/ = 0x1be - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd62/*SDRAM*/ = 0x97 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd64/*SDRAM*/ = 0x1ea - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd66/*SDRAM*/ = 0xfe - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd68/*SDRAM*/ = 0x1ea - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd6a/*SDRAM*/ = 0xe5 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd6c/*SDRAM*/ = 0x234 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd6e/*SDRAM*/ = 0x6f - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd70/*SDRAM*/ = 0x88 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd72/*SDRAM*/ = 0x109 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd74/*SDRAM*/ = 0xaa - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd76/*SDRAM*/ = 0x74 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd78/*SDRAM*/ = 0x104 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd7a/*SDRAM*/ = 0xa6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd7c/*SDRAM*/ = 0x108 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd7e/*SDRAM*/ = 0xd4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd80/*SDRAM*/ = 0x114 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd82/*SDRAM*/ = 0xdc - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd84/*SDRAM*/ = 300 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd86/*SDRAM*/ = 0x99 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd88/*SDRAM*/ = 0x13a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd8a/*SDRAM*/ = 0xc9 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd8c/*SDRAM*/ = 0x172 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd8e/*SDRAM*/ = 0xc1 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd90/*SDRAM*/ = 0x198 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd92/*SDRAM*/ = 0xf8 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd94/*SDRAM*/ = 0x19a - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd96/*SDRAM*/ = 0xb9 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd98/*SDRAM*/ = 0x1b4 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd9a/*SDRAM*/ = 0xc4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cd9c/*SDRAM*/ = 0x1d2 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cd9e/*SDRAM*/ = 0xba - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cda0/*SDRAM*/ = 200 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cda2/*SDRAM*/ = 0x58 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cda4/*SDRAM*/ = 0x116 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cda6/*SDRAM*/ = 0xb2 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cda8/*SDRAM*/ = 300 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cdaa/*SDRAM*/ = 0xf6 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cdac/*SDRAM*/ = 0x138 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cdae/*SDRAM*/ = 0x74 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cdb0/*SDRAM*/ = 0x158 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cdb2/*SDRAM*/ = 0xfc - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cdb4/*SDRAM*/ = 0x180 - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cdb6/*SDRAM*/ = 0xd4 - _DAT_8000fad6/*SDRAM*/;
  _DAT_8001cdb8/*SDRAM*/ = 0x18c - _DAT_8000fad4/*SDRAM*/;
  _DAT_8001cdba/*SDRAM*/ = 0xd2 - _DAT_8000fad6/*SDRAM*/;
  return;
}
