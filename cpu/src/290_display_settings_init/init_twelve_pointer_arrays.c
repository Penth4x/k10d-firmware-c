/* @k10d init_twelve_pointer_arrays @ 0x105303a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes twelve consecutive 5-pointer arrays in SDRAM with ROM addresses and calls a
 *   helper for each.
 * summary:
 *   The function writes five pointer values into twelve consecutive 20-byte structures
 *   located at 0x8005af64 through 0x8005b03c. Each structure is populated with addresses
 *   from the ROM region (0x10602ecc-0x10602f90), with the second pointer varying per
 *   structure. After each set of five pointers is written, it calls
 *   prepend_to_singly_linked_list with a unique SDRAM address argument (0x800145c8 through
 *   0x80014668). The final structure uses the same ROM address (0x10602f66) for all five
 *   pointers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_twelve_pointer_arrays(void)

{
  _DAT_8005af64/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005af68/*SDRAM*/ = &DAT_10602eda;
  _DAT_8005af6c/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005af70/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005af74/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x800145c8/*SDRAM*/);
  _DAT_8005af78/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005af7c/*SDRAM*/ = &DAT_10602ee8;
  _DAT_8005af80/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005af84/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005af88/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x800145d8/*SDRAM*/);
  _DAT_8005af8c/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005af90/*SDRAM*/ = &DAT_10602ef6;
  _DAT_8005af94/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005af98/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005af9c/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x800145e8/*SDRAM*/);
  _DAT_8005afa0/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005afa4/*SDRAM*/ = &DAT_10602f04;
  _DAT_8005afa8/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005afac/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005afb0/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x800145f8/*SDRAM*/);
  _DAT_8005afb4/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005afb8/*SDRAM*/ = &DAT_10602f12;
  _DAT_8005afbc/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005afc0/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005afc4/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014608/*SDRAM*/);
  _DAT_8005afc8/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005afcc/*SDRAM*/ = &DAT_10602f20;
  _DAT_8005afd0/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005afd4/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005afd8/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014618/*SDRAM*/);
  _DAT_8005afdc/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005afe0/*SDRAM*/ = &DAT_10602f2e;
  _DAT_8005afe4/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005afe8/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005afec/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014628/*SDRAM*/);
  _DAT_8005aff0/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005aff4/*SDRAM*/ = &DAT_10602f3c;
  _DAT_8005aff8/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005affc/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005b000/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014638/*SDRAM*/);
  _DAT_8005b004/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005b008/*SDRAM*/ = &DAT_10602f4a;
  _DAT_8005b00c/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005b010/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005b014/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014648/*SDRAM*/);
  _DAT_8005b018/*SDRAM*/ = &DAT_10602ecc;
  _DAT_8005b01c/*SDRAM*/ = &DAT_10602f58;
  _DAT_8005b020/*SDRAM*/ = &DAT_10602f74;
  _DAT_8005b024/*SDRAM*/ = &DAT_10602f82;
  _DAT_8005b028/*SDRAM*/ = &DAT_10602f90;
  prepend_to_singly_linked_list(0x80014658/*SDRAM*/);
  _DAT_8005b02c/*SDRAM*/ = &DAT_10602f66;
  _DAT_8005b030/*SDRAM*/ = &DAT_10602f66;
  _DAT_8005b034/*SDRAM*/ = &DAT_10602f66;
  _DAT_8005b038/*SDRAM*/ = &DAT_10602f66;
  _DAT_8005b03c/*SDRAM*/ = &DAT_10602f66;
  prepend_to_singly_linked_list(0x80014668/*SDRAM*/);
  return;
}
