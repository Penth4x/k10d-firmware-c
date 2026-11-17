/* @k10d write_three_mmio_registers_100f039a @ 0x100f039a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_mmio_registers_100f039a(void)

{
  _DAT_40040000 = 0x8000;
  _DAT_400403f2 = 0;
  _DAT_40060000/*KEYPAD*/ = 0;
  return;
}
