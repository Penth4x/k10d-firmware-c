/* @k10d set_two_values_from_mode_table @ 0x1051cbe4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_values_from_mode_table(uint32_t param_1,void *param_2,int param_3)

{
  uint16_t *puVar1;
  
  puVar1 = (uint16_t *)0x0;
  if (*(int *)(param_3 + 0x20) == 2) {
    puVar1 = (uint16_t *)0x105b5ace/*ROM*/;
  }
  else if (*(int *)(param_3 + 0x20) == 1) {
    puVar1 = (uint16_t *)0x105b5ad2/*ROM*/;
  }
  write_word_to_dynamic_array((int)param_2,0,*puVar1);
  write_word_to_dynamic_array((int)param_2,1,puVar1[1]);
  return;
}
