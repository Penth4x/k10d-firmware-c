/* @k10d copy_eight_bytes_to_struct @ 0x1047f7ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_bytes_to_struct(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar1 = get_or_init_global_buffer();
  iVar2 = get_ram_value_by_index(uVar1,param_2);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    *(uint8_t *)(iVar4 + iVar3 + 0x36) = *(uint8_t *)(iVar4 + iVar2);
  } while (iVar4 != 0);
  return;
}
