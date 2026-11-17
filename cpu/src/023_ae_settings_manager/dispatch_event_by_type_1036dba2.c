/* @k10d dispatch_event_by_type_1036dba2 @ 0x1036dba2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on the type code in param_2, handling state transitions and
 *   resource allocation.
 * summary:
 *   Checks a state flag at offset 0xad in param_1. If set, it handles a specific event type
 *   (0x11) by clearing the flag, calling virtual slot 8, and invoking helper functions. If
 *   the flag is clear, it branches on the event type in param_2[1] to call various handlers
 *   or allocate resources via read_array_element_bounded with different sizes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * dispatch_event_by_type_1036dba2(int *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uint32_t uVar4;
  
  if (*(char *)(param_1 + 0xad) != '\0') {
    if (*param_2 != 4) {
      return param_1;
    }
    if (param_2[1] != 0x11) {
      return param_1;
    }
    *(uint8_t *)(param_1 + 0xad) = 0;
    set_object_field_from_flag(param_1);
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
    release_object_at_offset_0x14_1036dfd0(param_1);
    iVar1 = check_setting_0x72_enabled((void *)0x800158d4/*SDRAM*/);
    dispatch_object_state_update_1036e02a(param_1,iVar1);
    return param_1;
  }
  if (*param_2 != 4) {
    return param_1;
  }
  iVar1 = param_2[1];
  if (iVar1 == 0xf) {
    iVar1 = cycle_state_and_dispatch(param_1);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  else if (iVar1 == 0xe) {
    read_field_at_offset_eight_1036ba06(param_1,0xffffffff);
  }
  else if (iVar1 == 0xd) {
    dispatch_event_and_return_field(param_1,0xffffffff);
  }
  else {
    if (iVar1 != 0x11) {
      if (iVar1 == 9) {
        uVar2 = get_or_create_singleton_object_1036c796();
        piVar3 = (int *)read_array_element_bounded(uVar2,2);
        normalize_mode_index_and_notify((int)piVar3);
        return piVar3;
      }
      if (iVar1 == 0x27) {
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar4 = 4;
      }
      else if (iVar1 == 0x28) {
        uVar2 = get_or_create_singleton_object_1036c796();
        uVar4 = 3;
      }
      else {
        if (iVar1 == 0x25) {
          return param_1;
        }
        if (iVar1 == 0x26) {
          return param_1;
        }
        if (iVar1 == 5) {
          uVar2 = get_or_create_singleton_object_1036c796();
          uVar4 = 5;
        }
        else if (iVar1 == 0x19) {
          uVar2 = get_or_create_singleton_object_1036c796();
          uVar4 = 6;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 != 0xc) {
              return param_1;
            }
            forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
            return param_1;
          }
          uVar2 = get_or_create_singleton_object_1036c796();
          uVar4 = 0xd;
        }
      }
      goto LAB_1036dcf0;
    }
    iVar1 = handle_startup_status_check(param_1);
    if (iVar1 == 0) {
      return param_1;
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  uVar4 = 2;
LAB_1036dcf0:
  piVar3 = (int *)read_array_element_bounded(uVar2,uVar4);
  return piVar3;
}
