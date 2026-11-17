/* @k10d sync_object_state_flags @ 0x103d90a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Reads and updates specific byte fields in an object based on a status query, then calls
 *   a final handler.
 * summary:
 *   The function queries the object state via get_setting_by_index with index 0xb. If the
 *   result differs from a global, it calls apply_setting_from_table with index 0x10. It
 *   then checks if the state is non-zero and byte 9 is 0xff, copying a value from index 5
 *   to byte 9 and calling apply_setting_from_table with index 5. If the state is zero and
 *   byte 9 is not 0xff, it writes byte 9 to apply_setting_from_table with index 5 and
 *   resets byte 9 to 0xff. Finally, it calls update_state_and_notify with the original
 *   parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sync_object_state_flags(uint32_t *param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar1 = get_setting_by_index((int)param_1,0xb);
  if (uVar1 != bRam1059655c) {
    apply_setting_from_table(param_1,0x10,0);
  }
  iVar2 = get_setting_by_index((int)param_1,0xb);
  if ((iVar2 != 0) && (*(char *)(param_1 + 9) == -1)) {
    uVar3 = get_setting_by_index((int)param_1,5);
    *(char *)(param_1 + 9) = (char)uVar3;
    apply_setting_from_table(param_1,5,0);
  }
  iVar2 = get_setting_by_index((int)param_1,0xb);
  if ((iVar2 == 0) && (*(byte *)(param_1 + 9) != 0xff)) {
    apply_setting_from_table(param_1,5,(uint)*(byte *)(param_1 + 9));
    *(uint8_t *)(param_1 + 9) = 0xff;
  }
  update_state_and_notify(param_1,param_2);
  return;
}
