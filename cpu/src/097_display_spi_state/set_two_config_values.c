/* @k10d set_two_config_values @ 0x1041269c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Computes two values based on a boolean flag and passes them to a configuration helper.
 * summary:
 *   The function takes an object pointer (param_1) and a flag (param_2). If the flag is
 *   zero, it sets the third argument to 0 and the fourth to 0. Otherwise, it sets the third
 *   argument to 8 and the fourth to 10. It then calls send_two_byte_pairs_over_ch2 with the
 *   object, a constant 0x818, and the two computed values. The specific meaning of 0x818
 *   and the values 8/10/0 is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_config_values(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 10;
  }
  send_two_byte_pairs_over_ch2(param_1,0x818,uVar1,uVar2);
  return;
}
