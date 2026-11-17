/* @k10d query_setting_status_code @ 0x104c9d20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Queries a setting value via query_object_state_and_flag and maps the result to a status
 *   code (0, 1, 4, or 5).
 * summary:
 *   If param_5 is zero, it refreshes the settings working copy and reads setting ID 0xc2.
 *   It then calls query_object_state_and_flag with a computed offset
 *   (param_2+param_3+param_4) and two output variables. Based on the return value and
 *   output variables, it sets a status field at param_1+0x214 to 0, 4, or 5, and returns 0
 *   or 1. If param_5 is non-zero, it calls read_struct_field_at_index_104c2890 with a
 *   pointer from param_1+0xd8 and argument 6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_setting_status_code(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t *puVar4;
  uint8_t auStack_24 [4];
  int iStack_10;
  char cStack_9;
  
  puVar4 = auStack_24;
  puVar3 = (uint32_t *)auStack_24;
  if (param_5 == 0) {
    iVar1 = get_or_create_singleton_object_10485138();
    settings_refresh_working_copy(*(void **)(iVar1 + 0x14));
    iVar1 = get_or_create_singleton_object_10485138();
    setting_get(*(int *)(iVar1 + 0x14),0xc2);
    puVar3 = (uint32_t *)puVar4;
  }
  else {
    read_struct_field_at_index_104c2890(*(void **)(param_1 + 0xd8),6);
  }
  iVar1 = invoke_virtual_slot_5_104bee64(*(int *)(param_1 + 0x48));
  iStack_10 = 0;
  cStack_9 = '\0';
  uVar2 = *(uint32_t *)(param_1 + 0x48);
  *puVar3 = 0;
  iVar1 = query_object_state_and_flag(uVar2,&iStack_10,&cStack_9,iVar1 + param_4 + param_3 + param_2);
  if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x214) = 0;
    uVar2 = 0;
  }
  else if (iStack_10 == 0) {
    uVar2 = 5;
    if (cStack_9 == '\0') {
      uVar2 = 4;
    }
    *(uint32_t *)(param_1 + 0x214) = uVar2;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
