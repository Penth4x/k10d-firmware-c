/* @k10d process_two_stage_event_104d905a @ 0x104d905a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Processes a two-stage event by querying state, checking conditions, and dispatching to
 *   handlers.
 * summary:
 *   The function initializes two objects of class cls_105bb0b8 on the stack. It first calls
 *   retry_operation_until_success_104de540 with param_2 and the first object. If
 *   successful, it attempts to match the object against two string constants (0x105ba3dc
 *   and 0x105ba3e4) using validate_and_copy_string. If the first match fails, it sets a
 *   flag. It then calls read_two_config_values and dispatch_event_to_handler_104d9160 with
 *   the original parameters. If these succeed, it initializes the second object, calls
 *   extract_substring_from_buffer, and matches it against one of two other string constants
 *   (0x105ba3ec or 0x105ba3f4) depending on the earlier flag. Finally, it calls virtual
 *   slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) on the objects to clean them up and
 *   returns 1 if the second stage succeeded, or 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_stage_event_104d905a(uint32_t param_1,int *param_2,uint32_t param_3)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar2 = retry_operation_until_success_104de540(param_2,&cStack_48);
  if (iVar2 != 0) {
    iVar2 = validate_and_copy_string((uint32_t *)(&cStack_48),(char *)(0x105ba3dc/*ROM*/));
    if (iVar2 == 0) {
      iVar2 = validate_and_copy_string((uint32_t *)(&cStack_48),(char *)(0x105ba3e4/*ROM*/));
      if (iVar2 == 0) goto LAB_104d9130;
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) || (iVar2 = read_two_config_values(param_1,param_2,param_3), iVar2 != 0)) &&
       (iVar2 = dispatch_event_to_handler_104d9160(param_1,param_2,param_3), iVar2 != 0)) {
      cls_105bb0b8_new(&cStack_28);
      iVar2 = extract_substring_from_buffer(param_2,&cStack_28);
      if (iVar2 != 0) {
        if (bVar1) {
          iVar2 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba3ec/*ROM*/));
        }
        else {
          iVar2 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba3f4/*ROM*/));
        }
        if (iVar2 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
          return 1;
        }
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    }
  }
LAB_104d9130:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
  return 0;
}
