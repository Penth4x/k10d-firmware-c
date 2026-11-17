/* @k10d dispatch_mode_command_10368336 @ 0x10368336
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * purpose:
 *   Dispatches a command code from param_2 to a handler or state setter on the object.
 * summary:
 *   Calls update_index_from_lookup on the object, then switches on param_2[1] to invoke
 *   dispatch_mode_change_event_10368890 with various integer arguments or set a flag at
 *   offset 0x15. If a handler returns 0, it calls get_or_create_singleton_object_1036c796
 *   and read_array_element_bounded. Finally, if the flag at offset 0x15 is set, it calls
 *   forward_param_to_global_offset with a global pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * dispatch_mode_command_10368336(void *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  update_index_from_lookup((int)param_1);
  iVar1 = *param_2;
  pvVar3 = param_1;
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 != 4)) goto LAB_103683ec;
  switch(param_2[1]) {
  case 0xc:
    *(uint8_t *)((int)param_1 + 0x15) = 1;
    goto LAB_103683ec;
  case 0xd:
    iVar1 = dispatch_mode_change_event_10368890(param_1,3);
    break;
  case 0xe:
    iVar1 = dispatch_mode_change_event_10368890(param_1,2);
    break;
  case 0xf:
    iVar1 = dispatch_mode_change_event_10368890(param_1,1);
    break;
  case 0x10:
    iVar1 = dispatch_mode_change_event_10368890(param_1,0);
    break;
  case 0x11:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar4 = 3;
    goto LAB_103683e2;
  default:
    goto LAB_103683ec;
  case 0x25:
    iVar1 = dispatch_mode_change_event_10368890(param_1,5);
    break;
  case 0x26:
    iVar1 = dispatch_mode_change_event_10368890(param_1,4);
    break;
  case 0x27:
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar4 = 3;
    goto LAB_103683e2;
  }
  if (iVar1 == 0) {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar4 = 1;
LAB_103683e2:
    pvVar3 = (void *)read_array_element_bounded(uVar2,uVar4);
  }
LAB_103683ec:
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
  }
  return pvVar3;
}
