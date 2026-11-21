/* @k10d init_object_with_vtable_and_dispatch @ 0x10396642
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object struct by copying four words from a global, setting a self-
 *   referential pointer, and dispatching based on a status check.
 * summary:
 *   The function clears a byte at offset 0x81 of the object, calls an unknown initializer,
 *   and copies four 32-bit values from a global address into the object at offsets
 *   0x70-0x7f. It sets the object's third field to point to the fourth field (self-
 *   referential). It then calls two unknown functions and checks the return value of the
 *   second. If zero, it performs a virtual call via slot 5 (offset 0x34) and calls another
 *   function with arguments (5, 1, obj). Otherwise, it calls three other functions, one of
 *   which takes the self-referential pointer as an argument. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562eec * init_object_with_vtable_and_dispatch(cls_10562eec *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1->field_0x81 = 0;
  init_two_sram_objects();
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)&param_1->field_0x70 + iVar1) = *(uint32_t *)(iVar1 + -0x7ffe5b5c);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  param_1->field_0x8 = (uintptr_t)(&param_1->field_0xc);
  get_or_create_sram_object_1040a240();
  iVar1 = process_object_state_transition_1040a96a((void *)__frv_reg_unset(4));
  if (iVar1 == 0) {
    (((vtbl_entry*)(param_1->field_0x0))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj);
    param_1 = (cls_10562eec *)create_and_configure_object_10393b48(5,1,param_1);
  }
  else {
    call_three_helpers_in_sequence_103968d6(param_1,0);
    init_object_with_two_ids_10396886(param_1);
    request_ui_sync_code_4((char*)(param_1) ->field_0x8);
    get_or_create_sram_object_1040a240();
    init_object_flag_and_subobj(__frv_reg_unset(4));
  }
  return param_1;
}
