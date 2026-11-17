/* @k10d copy_three_words_from_rom @ 0x104ac7e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 212_settings_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_three_words_from_rom(void)

{
  _DAT_800491a8/*SDRAM*/ = _DAT_105b8d08/*ROM*/;
  _DAT_800491ac/*SDRAM*/ = _DAT_105b8d0c/*ROM*/;
  _DAT_800491b0/*SDRAM*/ = _DAT_105b8d10/*ROM*/;
  return;
}
