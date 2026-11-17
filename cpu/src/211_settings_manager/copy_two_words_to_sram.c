/* @k10d copy_two_words_to_sram @ 0x104ac3bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 211_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_two_words_to_sram(void)

{
  _DAT_800491a0/*SDRAM*/ = _DAT_105b8d14/*ROM*/;
  _DAT_800491a4/*SDRAM*/ = _DAT_105b8d18/*ROM*/;
  return;
}
