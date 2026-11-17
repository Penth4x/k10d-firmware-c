/* @k10d handle_mode_change_event_103c07de @ 0x103c07de
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Processes a mode-change event by updating a state field and triggering subsystem
 *   initialization or reset based on the new mode value.
 * summary:
 *   The function stores param_3 into the object at offset 0x18. It checks param_2 against
 *   specific event IDs (0x1020020, 0x102001e, 0x102001f, 0x102002d). Depending on the
 *   stored mode value (param_3 or the value at 0x18), it calls apply_setting_from_table and
 *   get_setting_by_index with arguments 5 and 0xb, likely initializing or resetting a
 *   subsystem. For certain modes, it also calls setting_set with ID 0x54 and sets a flag at
 *   offset 0x33 to 0x8c. The specific subsystem is not identified by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * handle_mode_change_event_103c07de(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  
  *(int *)((int)param_1 + 0x18) = param_3;
  pvVar2 = param_1;
  if (((param_2 == 0x1020020) || (param_2 == 0x102001e)) || (param_2 == 0x102001f)) {
    if ((param_3 == 0x11) || (param_3 == 0xe)) {
      apply_setting_from_table(param_1,5,(uint)*(byte *)((int)param_1 + 0x30));
      iVar1 = get_setting_by_index((int)param_1,5);
      if (iVar1 != 0) {
        apply_setting_from_table(param_1,0xb,0);
      }
    }
    else if (((param_3 == 7) || (param_3 == 0)) || ((param_3 == 1 || (param_3 == 3)))) {
      apply_setting_from_table(param_1,5,(uint)*(byte *)((int)param_1 + 0x30));
      iVar1 = get_setting_by_index((int)param_1,5);
      if (iVar1 != 0) {
        apply_setting_from_table(param_1,0xb,0);
      }
      *(uint8_t *)((int)param_1 + 0x33) = 0x8c;
      pvVar2 = (void *)0x0;
    }
  }
  if (param_2 == 0x102002d) {
    iVar1 = *(int *)((int)param_1 + 0x18);
    if ((iVar1 == 0x11) || (iVar1 == 0xe)) {
      apply_setting_from_table(param_1,0x47,(uint)*(byte *)((int)param_1 + 0x30));
    }
    else if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
      setting_set(*(int *)((int)param_1 + 8),0x54,(uint)*(byte *)((int)param_1 + 0x30));
      *(uint8_t *)((int)param_1 + 0x33) = 0x8c;
      pvVar2 = (void *)0x0;
    }
  }
  return pvVar2;
}
