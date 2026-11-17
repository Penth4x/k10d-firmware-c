/* @k10d initialize_object_with_virtual_call_1036927e @ 0x1036927e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a sequence of setup functions and a virtual method, or
 *   allocates a new instance if initialization fails.
 * summary:
 *   The function first calls query_state_and_flag_range with the object pointer and a null
 *   pointer. If this returns 0, it executes a series of initialization steps: calling four
 *   unnamed functions, invoking a virtual method at offset 0x44 (slot 8), calling two more
 *   functions, and finally passing the result of check_setting_0x72_enabled(0x800158d4) to
 *   dispatch_state_update. If the initial check fails, it calls
 *   get_or_create_singleton_object_1036c796 and read_array_element_bounded to allocate or
 *   retrieve a new object pointer, which is then returned. The pattern suggests a
 *   constructor or initialization routine with a fallback allocation path.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * initialize_object_with_virtual_call_1036927e(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if (iVar1 == 0) {
    (*(code *)0x1036a736/*ROM*/)(param_1);
    store_mode_flag_at_offset_0x2ac(param_1);
    update_viewfinder_overlay_params(param_1);
    init_object_state_from_ram_flags(param_1);
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
    init_object_with_two_ids_1036a3ce(param_1);
    request_ui_sync_code_4(param_1 + 5);
    iVar1 = check_setting_0x72_enabled((void *)0x800158d4/*SDRAM*/);
    dispatch_state_update(param_1,iVar1);
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    param_1 = (int *)read_array_element_bounded(uVar2,1);
  }
  return param_1;
}
