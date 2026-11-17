/* @k10d decrement_or_init_counter @ 0x104b6034
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 218_config_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_or_init_counter(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      *(uint8_t *)(param_1 + 0x18) = 0;
      *(uint32_t *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    uVar1 = divide_result_by_field_0x30(param_1,param_2);
    *(uint *)(param_1 + 0x34) = uVar1;
    *(uint8_t *)(param_1 + 0x18) = 1;
    *(uint32_t *)(param_1 + 0x1c) = 3;
  }
  return;
}
