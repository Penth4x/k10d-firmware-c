/* @k10d notify_settings_changed @ 0x10484836
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Sends change notifications for specific settings fields when the working copy is
 *   active.
 * summary:
 *   Checks if the object's field at offset 4 is 1. If so, it calls field_setter six times
 *   with specific IDs (0x54, 0x164, 0xb0) for both the working copy (offset 0x14) and the
 *   master copy (offset 0xc). The caller settings_refresh_working_copy suggests this is
 *   part of a settings update workflow.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void notify_settings_changed(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 4) == 1) {
    iVar1 = (int)param_1 + 0x14;
    field_setter(iVar1,0x54,1);
    field_setter(*(int *)((int)param_1 + 0xc),0x54,1);
    field_setter(iVar1,0x164,1);
    field_setter(*(int *)((int)param_1 + 0xc),0x164,1);
    field_setter(iVar1,0xb0,1);
    field_setter(*(int *)((int)param_1 + 0xc),0xb0,1);
  }
  return;
}
