/* @k10d init_object_and_dispatch_state_10392166 @ 0x10392166
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes object fields and a 4-entry array, then branches on a status check to
 *   either call a virtual method or invoke a sequence of setup helpers.
 * summary:
 *   The function clears a byte at offset 0x89 and copies four 32-bit values from a global
 *   address into the object at offset 0x78. It sets the third field to point to the fourth
 *   field. It calls process_object_state_transition_1040a96a; if the result is zero, it
 *   invokes virtual slot 6 (offset 0x34) and calls create_and_configure_object_10393b48.
 *   Otherwise, it calls call_three_unnamed_helpers_103923fa,
 *   init_object_with_two_ids_103923aa, and request_ui_sync_code_4 with the third field as
 *   an argument, followed by two more helper calls. The object pointer is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * init_object_and_dispatch_state_10392166(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint8_t *)((int)param_1 + 0x89) = 0;
  init_two_sram_objects();
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)param_1 + iVar1 + 0x78) = *(uint32_t *)(iVar1 + -0x7ffe5b5c);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  param_1[2] = (int)(param_1 + 3);
  get_or_create_sram_object_1040a240();
  iVar1 = process_object_state_transition_1040a96a((void *)__frv_reg_unset(4));
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
    param_1 = (int *)create_and_configure_object_10393b48(5,1,param_1);
  }
  else {
    call_three_unnamed_helpers_103923fa(param_1,0);
    init_object_with_two_ids_103923aa(param_1);
    request_ui_sync_code_4((void *)param_1[2]);
    get_or_create_sram_object_1040a240();
    init_object_flag_and_subobj(__frv_reg_unset(4));
  }
  return param_1;
}
