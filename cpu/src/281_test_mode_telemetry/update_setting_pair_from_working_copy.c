/* @k10d update_setting_pair_from_working_copy @ 0x10524832
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy and writes two related setting values to a target
 *   object.
 * summary:
 *   The function first clears a byte at offset 5 of the input parameter. It retrieves a
 *   settings object via get_or_create_singleton_object_10485138 and calls
 *   settings_refresh_working_copy to synchronize the working copy. It then uses
 *   get_or_create_singleton_object_104fb12e and check_object_property_43 to determine a
 *   mode flag (uVar2), which selects between two pairs of setting IDs (0x51/0x54 or
 *   0x161/0x164). It reads these two settings using setting_get. Finally, it calls
 *   dispatch_event_with_timeout_104b8bd0 with a value derived from the first setting (or a
 *   constant 2 if a flag at param_1+4 is zero) and the second setting value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_setting_pair_from_working_copy(int param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  uint32_t uVar6;
  
  *(uint8_t *)(param_1 + 5) = 0;
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = check_object_property_43(*(int *)(iVar1 + 0x74));
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar5 = *(void **)(iVar1 + 8);
  settings_refresh_working_copy(pvVar5);
  if (uVar2 == 0) {
    iVar1 = 0x51;
  }
  else {
    iVar1 = 0x161;
  }
  uVar3 = setting_get((int)pvVar5,iVar1);
  if (uVar2 == 0) {
    iVar1 = 0x54;
  }
  else {
    iVar1 = 0x164;
  }
  uVar4 = setting_get((int)pvVar5,iVar1);
  uVar6 = 2;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar6 = uVar3;
  }
  iVar1 = get_or_create_singleton_object_104bb22a();
  dispatch_event_with_timeout_104b8bd0(*(uint32_t *)(iVar1 + 4),uVar6,uVar4,0);
  return;
}
