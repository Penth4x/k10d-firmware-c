/* @k10d initialize_object_with_vtable_1036ccc6 @ 0x1036ccc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by zeroing fields, calling setup helpers, and invoking a virtual
 *   method if a specific condition is met.
 * summary:
 *   The function clears several fields in the object pointed to by param_1 (offsets 0x14,
 *   0x54, 0x244, 0x248). It calls query_state_and_flag_range and
 *   dispatch_event_and_return_offset for setup. If successful, it calls
 *   dispatch_event_with_buffer_lock, reads a value from 0x800158d4, and calls
 *   check_buffer_length_mismatch. If check_buffer_length_mismatch fails and
 *   process_object_state_transition_1036d23a returns 0, it allocates a new object via
 *   read_array_element_bounded, stores it in param_1[6], and invokes virtual slot 10
 *   (offset 0x54) on the original object. Otherwise, it returns the original object or a
 *   newly allocated one from the error path.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557d80 * initialize_object_with_vtable_1036ccc6(cls_10557d80 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557d80 *pcVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  param_1->field_0x14 = 0;
  param_1->field_0x15 = 0;
  param_1->field_0x244 = 0;
  param_1->field_0x248 = 0;
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if (iVar1 == 0) {
    uStack_c = 0;
    iVar1 = dispatch_event_and_return_offset(param_1,&uStack_c,0xffffffff);
    if (iVar1 == 1) {
      dispatch_event_with_buffer_lock(param_1,0,&param_1->field_0x1c);
      uVar2 = get_setting_0x71_with_refresh((int *)0x800158d4/*SDRAM*/);
      param_1->field_0x6c = (char)uVar2;
      iVar1 = check_buffer_length_mismatch(param_1);
      if (iVar1 == 0) {
        iterate_and_dispatch_object_items(param_1);
      }
      else {
        iVar1 = process_object_state_transition_1036d23a((void *)__frv_reg_unset(4));
        if (iVar1 == 0) {
          uVar2 = get_or_create_singleton_object_1036c796();
          uVar2 = read_array_element_bounded(uVar2,1);
          param_1->field_0x18 = uVar2;
          (((vtbl_entry*)(param_1->field_0x0))[10].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[10].adj);
          return (cls_10557d80 *)param_1->field_0x18;
        }
      }
      if (param_1->field_0x244 == 0) {
        if (param_1->field_0x15 == '\0') {
          return param_1;
        }
        forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
        return param_1;
      }
      param_1->field_0x14 = 0;
      param_1->field_0x15 = 0;
      return param_1;
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  pcVar3 = (cls_10557d80 *)read_array_element_bounded(uVar2,1);
  return pcVar3;
}
