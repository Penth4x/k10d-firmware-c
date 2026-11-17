/* @k10d store_value_at_offset_0x34 @ 0x103939f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_at_offset_0x34(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_init_sram_object_103973c4();
  uVar2 = dispatch_on_mode_value(iVar1);
  *(uint32_t *)((int)param_1 + 0x34) = uVar2;
  return;
}
