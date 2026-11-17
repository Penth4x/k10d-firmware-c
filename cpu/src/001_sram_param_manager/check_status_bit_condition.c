/* @k10d check_status_bit_condition @ 0x100f1942
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_bit_condition(uint param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = read_byte_at_offset_0x2f();
  if ((((uVar1 & 6) != 0) || (uVar1 = read_word_at_dat_offset_100f1f66(), (uVar1 & 0x8000) != 0)) ||
     (uVar2 = 0, (uVar1 & param_1) == 0)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
