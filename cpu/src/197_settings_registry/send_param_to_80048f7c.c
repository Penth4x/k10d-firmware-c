/* @k10d send_param_to_80048f7c @ 0x10493142
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 197_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_param_to_80048f7c(uint32_t param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = param_1;
  forward_struct_and_second_field((int *)&DAT_80048f7c/*SDRAM*/,&uStack_c);
  return 1;
}
