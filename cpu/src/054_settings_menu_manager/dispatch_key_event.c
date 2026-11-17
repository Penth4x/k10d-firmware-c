/* @k10d dispatch_key_event @ 0x103bce8c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Stores a state code in the object and dispatches it to a handler based on event type
 *   and state.
 * summary:
 *   The function writes param_3 to offset 0x18 of the object. It checks param_2 against
 *   specific event IDs (0x1010031-0x1010033, 0x101003f, 0x101004c, 0x101005a) and the
 *   current state (param_3 or the stored value). Depending on the combination, it calls
 *   apply_setting_from_table with varying arguments and may update offset 0x36 to 0x8c. It
 *   returns NULL if a specific state transition occurred, otherwise it returns the object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * dispatch_key_event(void *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  *(int *)((int)param_1 + 0x18) = param_3;
  pvVar4 = param_1;
  if (((param_2 == 0x1010033) || (param_2 == 0x1010031)) || (param_2 == 0x1010032)) {
    if ((param_3 != 0x11) && (param_3 != 0xe)) {
      if (((param_3 == 7) || (param_3 == 0)) || ((param_3 == 1 || (param_3 == 3)))) {
        uVar1 = get_or_init_heap_block();
        uVar1 = map_index_to_code_1045b55e(uVar1,*(uint8_t *)((int)param_1 + 0x34));
        apply_setting_from_table(param_1,0x48,uVar1);
        *(uint8_t *)((int)param_1 + 0x36) = 0x8c;
        pvVar4 = (void *)0x0;
      }
      goto LAB_103bcf66;
    }
    uVar1 = get_or_init_heap_block();
    uVar2 = map_index_to_code_1045b55e(uVar1,*(uint8_t *)((int)param_1 + 0x34));
    iVar3 = 0x48;
  }
  else {
    if (param_2 != 0x101003f) goto LAB_103bcf66;
    if ((param_3 != 0x11) && (param_3 != 0xe)) {
      if ((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) {
        apply_setting_from_table(param_1,6,(uint)*(byte *)((int)param_1 + 0x34));
        *(uint8_t *)((int)param_1 + 0x36) = 0x8c;
        pvVar4 = (void *)0x0;
      }
      goto LAB_103bcf66;
    }
    uVar2 = (uint)*(byte *)((int)param_1 + 0x34);
    iVar3 = 6;
  }
  apply_setting_from_table(param_1,iVar3,uVar2);
LAB_103bcf66:
  if (param_2 == 0x101004c) {
    iVar3 = *(int *)((int)param_1 + 0x18);
    if ((iVar3 == 0x11) || (iVar3 == 0xe)) {
      apply_setting_from_table(param_1,7,(uint)*(byte *)((int)param_1 + 0x34));
    }
    else if (((iVar3 == 7) || (iVar3 == 0)) || ((iVar3 == 1 || (iVar3 == 3)))) {
      apply_setting_from_table(param_1,7,(uint)*(byte *)((int)param_1 + 0x34));
      *(uint8_t *)((int)param_1 + 0x36) = 0x8c;
      pvVar4 = (void *)0x0;
    }
  }
  if (param_2 == 0x101005a) {
    iVar3 = *(int *)((int)param_1 + 0x18);
    if ((iVar3 == 0x11) || (iVar3 == 0xe)) {
      apply_setting_from_table(param_1,8,(uint)*(byte *)((int)param_1 + 0x34));
    }
    else if ((((iVar3 == 7) || (iVar3 == 0)) || (iVar3 == 1)) || (iVar3 == 3)) {
      apply_setting_from_table(param_1,8,(uint)*(byte *)((int)param_1 + 0x34));
      *(uint8_t *)((int)param_1 + 0x36) = 0x8c;
      pvVar4 = (void *)0x0;
    }
  }
  return pvVar4;
}
