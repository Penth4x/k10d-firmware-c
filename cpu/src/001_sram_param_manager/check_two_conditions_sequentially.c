/* @k10d check_two_conditions_sequentially @ 0x100f1098
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_conditions_sequentially(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = poll_status_until_bit5_set();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = poll_status_word_twice();
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
