/* @k10d get_or_init_sram_block_105342fe @ 0x105342fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_or_init_sram_block_105342fe(void)

{
  if (_DAT_8005b14c/*SDRAM*/ == 0) {
    _DAT_8005b14c/*SDRAM*/ = 1;
    init_two_word_pair_struct((void *)0x8005b13c/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x800148e0/*SDRAM*/);
  }
  return 0x8005b13c/*SDRAM*/;
}
