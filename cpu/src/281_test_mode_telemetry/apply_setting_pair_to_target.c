/* @k10d apply_setting_pair_to_target @ 0x10524786
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Stores a flag in a struct, refreshes settings, and passes two setting values to a
 *   helper.
 * summary:
 *   Writes param_2 to offset 4 and 0 to offset 5 of the object pointed to by param_1. If
 *   param_3 is 0, it refreshes the settings working copy, reads two specific settings (IDs
 *   0x51/0x54 or 0x161/0x164 depending on a condition from check_object_property_43), and
 *   calls dispatch_event_with_timeout_104b8bd0 with the first setting value (or 2 if the
 *   flag is 0) and the second setting value. If param_3 is non-zero, it sets offset 5 to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_setting_pair_to_target(int param_1,uint8_t param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  uint32_t uVar6;
  
  *(uint8_t *)(param_1 + 4) = param_2;
  *(uint8_t *)(param_1 + 5) = 0;
  if (param_3 == 0) {
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
  }
  else {
    *(uint8_t *)(param_1 + 5) = 1;
  }
  return;
}
