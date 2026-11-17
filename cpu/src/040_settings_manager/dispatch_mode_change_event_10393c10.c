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

int dispatch_mode_change_event_10393c10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  param_1[0x1b] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0xc) {
      if (*(char *)(param_1 + 0x1c) != '\0') {
        store_value_at_offset_0x6c(param_1);
      }
      goto LAB_10393c86;
    }
    if ((param_2[1] != 0x11) || (*(char *)((int)param_1 + 0x71) == '\0')) goto LAB_10393c86;
    iVar1 = get_or_init_sram_object_103973c4();
  }
  else if (iVar1 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
  }
  else {
    if (iVar1 != 8) goto LAB_10393c86;
    iVar1 = (**(code **)(*param_1 + 0x6c))
                      ((int)*(short *)(*param_1 + 0x68) + (int)param_1,auStack_c,0);
  }
  param_1[0x1b] = iVar1;
LAB_10393c86:
  if ((*(char *)((int)param_1 + 0x72) == '\0') || (*(char *)(param_1 + 0x1f) == '\0')) {
    iVar1 = param_1[0x1b];
  }
  else {
    iVar1 = check_and_process_event_103947cc(param_1);
    if (iVar1 == 0) {
      iVar2 = param_1[0x1d];
      iVar1 = get_or_create_singleton_object_103957d8(1);
      if (iVar2 == iVar1) {
        iVar1 = check_and_process_event_103947cc(param_1);
        if (iVar1 == 0) {
          iVar1 = get_or_init_singleton_object_103938e2();
          return iVar1;
        }
      }
      else {
        iVar2 = param_1[0x1d];
        iVar1 = get_or_create_singleton_object_10391da4();
        if ((iVar2 == iVar1) && (iVar1 = check_and_process_event_103947cc(param_1), iVar1 == 0)) {
          iVar1 = get_or_init_sram_object_103973c4();
          iVar1 = dispatch_on_mode_value(iVar1);
          return iVar1;
        }
      }
      iVar1 = param_1[0x1e];
    }
    else {
      iVar1 = get_or_create_singleton_object_103957d8(0);
    }
  }
  return iVar1;
}
