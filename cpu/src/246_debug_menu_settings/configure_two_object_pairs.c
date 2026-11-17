/* @k10d configure_two_object_pairs @ 0x104d8d06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes two cls_105bb0b8 objects and configures them with specific parameters and
 *   pointers.
 * summary:
 *   Allocates two stack-based cls_105bb0b8 instances. Calls
 *   retry_operation_until_success_104de540 to initialize the first, then
 *   trim_buffer_by_byte_value twice with 0x3f and flags 0/1. Allocates a second instance,
 *   links it to the first via scan_buffer_for_matching_bytes, and sets pointers 0x105ba378
 *   and 0x105ba37c via validate_and_copy_string. Finally calls virtual slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) on both with argument 2, likely to activate
 *   or commit the configuration. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_two_object_pairs(uint32_t param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_48);
  iVar1 = retry_operation_until_success_104de540(param_2,(void *)auStack_48);
  if (((iVar1 != 0) && (iVar1 = trim_buffer_by_byte_value((void *)auStack_48,0x3f,0), iVar1 != 0)) &&
     (iVar1 = trim_buffer_by_byte_value((void *)auStack_48,0x3f,1), iVar1 != 0)) {
    cls_105bb0b8_new((void *)auStack_28);
    iVar1 = scan_buffer_for_matching_bytes((void *)auStack_48,(void *)auStack_28);
    if (((iVar1 != 0) && (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba378/*ROM*/), iVar1 != 0)) &&
       ((iVar1 = scan_buffer_for_matching_bytes((void *)auStack_48,(void *)auStack_28), iVar1 != 0 &&
        (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba37c/*ROM*/), iVar1 != 0)))) {
      reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_48,2);
      return 1;
    }
    reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_28,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_48,2);
  return 0;
}
