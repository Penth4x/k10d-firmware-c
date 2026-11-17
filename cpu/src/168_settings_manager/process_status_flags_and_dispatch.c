/* @k10d process_status_flags_and_dispatch @ 0x1047bc94
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates a sequence of status checks on an object, sets corresponding flag bytes, and
 *   conditionally calls a handler.
 * summary:
 *   The function takes an object pointer and reads fields at offsets 0x58 and 0x64 to call
 *   a series of status-checking functions (call_helper_with_lock_104812d0,
 *   call_handler_with_lock_10481308, sd_file_lookup_locked, call_vtable_slot_two). Based on
 *   the return values, it sets specific flag bytes at offsets 0x49 through 0x4d and 0x80.
 *   If a specific error path is taken (call_with_offset_0x1c returns non-zero), it calls
 *   create_and_configure_object_1047c406. Finally, it sets a completion flag at offset 0x48
 *   and returns the result of the last check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_status_flags_and_dispatch(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = call_helper_with_lock_104812d0(*(void **)((int)param_1 + 0x58),*(void **)((int)param_1 + 100));
  iVar2 = 0;
  if (iVar1 != 0) {
    *(uint8_t *)((int)param_1 + 0x49) = 1;
    iVar1 = call_handler_with_lock_10481308(*(void **)((int)param_1 + 0x58),*(uint32_t *)((int)param_1 + 100));
    if (iVar1 == 0) {
      *(uint8_t *)((int)param_1 + 0x4c) = 1;
    }
    iVar1 = sd_file_lookup_locked(*(void **)((int)param_1 + 0x58),*(void **)((int)param_1 + 100));
    if (iVar1 == 0) {
      iVar1 = call_vtable_slot_two(*(void **)((int)param_1 + 0x58));
      if (iVar1 == 1) {
        *(uint8_t *)((int)param_1 + 0x4a) = 0;
      }
      else {
        iVar1 = call_vtable_slot_two(*(void **)((int)param_1 + 0x58));
        if (iVar1 == 0x13) {
          *(uint8_t *)((int)param_1 + 0x4d) = 1;
          *(uint8_t *)((int)param_1 + 0x4a) = 0;
        }
        else {
          iVar1 = initialize_singleton_object_1045d6a0();
          write_object_field_byte((void *)(iVar1 + 8),0x10,1);
          *(uint8_t *)((int)param_1 + 0x4a) = 1;
        }
      }
    }
    else {
      *(uint8_t *)((int)param_1 + 0x4b) = 1;
      iVar1 = call_with_offset_0x1c(*(int *)((int)param_1 + 0x50));
      if (iVar1 != 0) {
        *(uint8_t *)((int)param_1 + 0x4a) = 0;
        iVar2 = call_helper_with_offset_c_10477f82(*(int *)((int)param_1 + 0x50));
        iVar1 = call_helper_with_offset_0x1c(*(int *)((int)param_1 + 0x50));
        if (iVar1 == 0) {
          *(uint8_t *)((int)param_1 + 0x80) = 0;
        }
        else {
          *(uint8_t *)((int)param_1 + 0x80) = 1;
        }
      }
    }
  }
  if (iVar2 != 0) {
    create_and_configure_object_1047c406(param_1);
  }
  *(uint8_t *)((int)param_1 + 0x48) = 1;
  return iVar2;
}
