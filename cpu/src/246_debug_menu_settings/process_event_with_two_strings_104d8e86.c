/* @k10d process_event_with_two_strings_104d8e86 @ 0x104d8e86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs three temporary objects, validates inputs, and dispatches a virtual call
 *   with two parameters.
 * summary:
 *   The function allocates three stack-based objects of class cls_105bb0b8. It calls helper
 *   functions retry_operation_until_success_104de540, scan_buffer_for_matching_bytes, and
 *   extract_substring_from_buffer, passing the objects and param_2. It also calls
 *   validate_and_copy_string with the objects and two distinct ROM addresses (0x105ba39c
 *   and 0x105ba3a0). If all checks pass, it retrieves a pointer via
 *   get_or_create_singleton_object_104d9012 and invokes virtual slot 2 of the object at
 *   offset 0x1c, passing param_2 and param_3. Finally, it calls virtual slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) on all three objects with argument 2,
 *   likely for cleanup or finalization, and returns 1 on success or 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_two_strings_104d8e86(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105bb0b8 cStack_68;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_68);
  iVar1 = retry_operation_until_success_104de540(param_2,&cStack_68);
  if (iVar1 != 0) {
    cls_105bb0b8_new(&cStack_48);
    iVar1 = scan_buffer_for_matching_bytes((void*)(&cStack_68),(void*)(&cStack_48));
    if ((iVar1 != 0) && (iVar1 = validate_and_copy_string((void*)(&cStack_48),(void*)(0x105ba39c/*ROM*/)), iVar1 != 0)) {
      iVar1 = get_or_create_singleton_object_104d9012();
      iVar1 = (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].fn)
                        (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].adj,param_2,param_3);
      if (iVar1 != 0) {
        cls_105bb0b8_new(&cStack_28);
        iVar1 = extract_substring_from_buffer(param_2,(void*)(&cStack_28));
        if ((iVar1 != 0) && (iVar1 = validate_and_copy_string((void*)(&cStack_28),(void*)(0x105ba3a0/*ROM*/)), iVar1 != 0)) {
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_68,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      }
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_68,2);
  return 0;
}
