/* @k10d dispatch_on_property_lookup @ 0x104dba7e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, probes it against a chain of five constant addresses, and
 *   dispatches to one of six handlers based on the first match.
 * summary:
 *   Instantiates a cls_105bb0b8 object on the stack and calls call_helper_with_saved_field
 *   with param_2. If that returns non-zero, it sequentially calls validate_and_copy_string
 *   with five distinct constant addresses (0x105bab14 through 0x105bab3c). The first call
 *   that returns non-zero determines which of the six handler functions
 *   (process_two_config_entries_104dbb78 through try_two_step_operation) is invoked with
 *   param_1, param_2, and param_3. If all lookups fail, try_two_step_operation is called.
 *   The temporary object is destroyed via reset_vtable_and_free_if_flagged_104ddfe6 before
 *   returning the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_property_lookup(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_28);
  iVar1 = call_helper_with_saved_field(param_2,&cStack_28);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    uVar2 = 0;
  }
  else {
    iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bab14/*ROM*/));
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bab1c/*ROM*/));
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bab28/*ROM*/));
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bab30/*ROM*/));
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bab3c/*ROM*/));
            if (iVar1 == 0) {
              uVar2 = try_two_step_operation(param_1,param_2);
            }
            else {
              uVar2 = process_two_stage_event_104dbffa(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = run_sequential_object_pipeline(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = process_two_stage_event_104dbd6a(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = init_three_objects_and_dispatch_104dbc5e(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = process_two_config_entries_104dbb78(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  }
  return uVar2;
}
