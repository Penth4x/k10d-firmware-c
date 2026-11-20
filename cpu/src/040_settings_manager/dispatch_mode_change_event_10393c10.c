/* @k10d dispatch_mode_change_event_10393c10 @ 0x10393c10
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes a mode change event by dispatching to specific handlers based on event type
 *   and updating the object's state pointer.
 * summary:
 *   The function takes an object pointer and an event structure. It checks the event type
 *   (param_2[0]) and dispatches to different handlers: type 3 with sub-type 0xc calls
 *   store_value_at_offset_0x6c, type 3 with sub-type 0x11 calls
 *   get_or_init_sram_object_103973c4, type 7 calls get_or_create_singleton_object_10396af8,
 *   and type 8 performs a virtual call via a vtable at offset 0x6c. The result is stored in
 *   the object at offset 0x6c (param_1[0x1b]). It then performs additional state checks and
 *   calls check_and_process_event_103947cc, get_or_create_singleton_object_103957d8, and
 *   other functions to finalize the state transition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_change_event_10393c10(cls_10562a24 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  param_1->field_0x6c = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0xc) {
      if (param_1->field_0x70 != '\0') {
        store_value_at_offset_0x6c(param_1);
      }
      goto LAB_10393c86;
    }
    if ((param_2[1] != 0x11) || (param_1->field_0x71 == '\0')) goto LAB_10393c86;
    uVar2 = get_or_init_sram_object_103973c4();
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
  }
  else {
    if (iVar1 != 8) goto LAB_10393c86;
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,
                       auStack_c,0);
  }
  param_1->field_0x6c = uVar2;
LAB_10393c86:
  if ((param_1->field_0x72 == '\0') || (*(char *)&param_1->field_0x7c == '\0')) {
    uVar2 = param_1->field_0x6c;
  }
  else {
    iVar1 = check_and_process_event_103947cc(param_1);
    if (iVar1 == 0) {
      iVar3 = param_1->field_0x74;
      iVar1 = get_or_create_singleton_object_103957d8(1);
      if (iVar3 == iVar1) {
        iVar1 = check_and_process_event_103947cc(param_1);
        if (iVar1 == 0) {
          uVar2 = get_or_init_singleton_object_103938e2();
          return uVar2;
        }
      }
      else {
        iVar3 = param_1->field_0x74;
        iVar1 = get_or_create_singleton_object_10391da4();
        if ((iVar3 == iVar1) && (iVar1 = check_and_process_event_103947cc(param_1), iVar1 == 0)) {
          iVar1 = get_or_init_sram_object_103973c4();
          uVar2 = dispatch_on_mode_value(iVar1);
          return uVar2;
        }
      }
      uVar2 = param_1->field_0x78;
    }
    else {
      uVar2 = get_or_create_singleton_object_103957d8(0);
    }
  }
  return uVar2;
}
