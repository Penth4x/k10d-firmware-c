/* @k10d store_value_and_set_flag_104cf23a @ 0x104cf23a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 240_menu_event_system (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_value_and_set_flag_104cf23a(int param_1,void *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x20),param_2);
  if (bVar1) {
    *(uint32_t *)(param_1 + 0x2c) = *(uint32_t *)(param_3 * 8 + 0x105b975c/*ROM*/);
    set_flg_obj((uint32_t *)(param_1 + 0x18));
  }
  return bVar1;
}
