/* @k10d deactivate_dual_object_pair @ 0x104f9392
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Performs a symmetric teardown sequence on two sub-objects stored at offsets 0x110 and
 *   0x114 of the parent object.
 * summary:
 *   The function calls two unknown setup/flag functions (write_field_at_offset_0x10c,
 *   issue_sequential_channel_commands) on the parent object. It then iterates over two sub-
 *   objects (at +0x110 and +0x114), invoking virtual slots 2 and 3 on each, calling
 *   clear_flag_if_active on each, invoking virtual slot 0 with specific integer arguments
 *   (0x10 and 0x11), and finally invoking virtual slot 1 on each. The symmetric structure
 *   and the use of distinct integer identifiers suggest a cleanup or deactivation routine
 *   for a pair of related components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t deactivate_dual_object_pair(cls_105d4190 *param_1)

{
  int iVar1;
  
  write_field_at_offset_0x10c(param_1,1);
  issue_sequential_channel_commands(param_1,0);
  iVar1 = *(int *)(param_1->field_0x110 + 4);
  (((vtbl_entry*)(iVar1))[12].fn)(param_1->field_0x110 + (int)((vtbl_entry*)(iVar1))[12].adj);
  iVar1 = *(int *)(param_1->field_0x110 + 4);
  (((vtbl_entry*)(iVar1))[16].fn)(param_1->field_0x110 + (int)((vtbl_entry*)(iVar1))[16].adj);
  clear_flag_if_active((char*)(param_1) ->field_0x110);
  iVar1 = *(int *)(param_1->field_0x114 + 4);
  (((vtbl_entry*)(iVar1))[12].fn)(param_1->field_0x114 + (int)((vtbl_entry*)(iVar1))[12].adj);
  iVar1 = *(int *)(param_1->field_0x114 + 4);
  (((vtbl_entry*)(iVar1))[16].fn)(param_1->field_0x114 + (int)((vtbl_entry*)(iVar1))[16].adj);
  clear_flag_if_active((char*)(param_1) ->field_0x114);
  iVar1 = *(int *)(param_1->field_0x110 + 8);
  (((vtbl_entry*)(iVar1))[3].fn)
            (param_1->field_0x110 + 8 + (int)((vtbl_entry*)(iVar1))[3].adj,&param_1->field_0x4,0x10);
  iVar1 = *(int *)(param_1->field_0x114 + 8);
  (((vtbl_entry*)(iVar1))[3].fn)
            (param_1->field_0x114 + 8 + (int)((vtbl_entry*)(iVar1))[3].adj,&param_1->field_0x4,0x11);
  iVar1 = *(int *)(param_1->field_0x110 + 4);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x110 + (int)((vtbl_entry*)(iVar1))[10].adj);
  iVar1 = *(int *)(param_1->field_0x114 + 4);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x114 + (int)((vtbl_entry*)(iVar1))[10].adj);
  return 1;
}
