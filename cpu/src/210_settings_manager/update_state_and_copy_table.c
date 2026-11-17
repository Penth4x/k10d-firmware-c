/* @k10d update_state_and_copy_table @ 0x104ab92e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_and_copy_table(int param_1,int param_2)

{
  byte bVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  
  if (*(int *)(param_1 + 0x18) != param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if (param_2 != 0) {
      **(uint **)(param_1 + 0x24) = **(uint **)(param_1 + 0x24) | 0x10000;
      puVar2 = (uint32_t *)((uint)(param_2 != 1) * 0x14 + 0x105b71ac/*ROM*/);
      puVar3 = (uint32_t *)**(int **)(param_1 + 0x50);
      bVar1 = 0;
      do {
        *puVar3 = *puVar2;
        puVar3 = puVar3 + 1;
        bVar1 = bVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (bVar1 < 5);
      **(uint **)(param_1 + 0x24) = **(uint **)(param_1 + 0x24) & 0xfffeffff;
    }
    invoke_virtual_on_two_object_lists(param_1,param_2);
  }
  return;
}
