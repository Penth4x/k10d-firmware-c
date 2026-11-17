/* @k10d set_status_code_and_flag @ 0x104cc3e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_code_and_flag(int param_1)

{
  int iVar1;
  
  iVar1 = process_buffered_data_entries_104bea6c(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0xa8));
  if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x214) = 0;
    iVar1 = read_struct_field_0x2c(*(uint32_t *)(param_1 + 0x48));
    if ((iVar1 == 0) && (iVar1 = (*(code *)0x104bcec2/*ROM*/)(*(uint32_t *)(param_1 + 0x48)), iVar1 != 0)
       ) {
      *(uint32_t *)(param_1 + 0x214) = 3;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x214) = 1;
  }
  *(uint32_t *)(param_1 + 0x210) = 0xc0011;
  return;
}
