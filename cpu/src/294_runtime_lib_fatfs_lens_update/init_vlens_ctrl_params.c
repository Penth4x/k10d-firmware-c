/* @k10d init_vlens_ctrl_params @ 0x10536492
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a control structure with fixed parameters and invokes setup routines on the
 *   object.
 * summary:
 *   This function is virtual method slot 3 of class cls_10621c8c. It calls three
 *   initialization helpers (set_two_fields_to_four, enable_display_output,
 *   lens_fw_update_slot3) on the object. It sets local stack variables to 7, 0xff, and 0,
 *   then passes these values along with a reference to s_VLENS_CTRL_10621cb4 to
 *   build_and_dispatch_draw_params. Finally, it invokes three additional setup functions
 *   (forward_event_to_subobject, reset_subobject_at_offset_0x2c_104706a0,
 *   set_flag_based_on_param_10470714) on the first member of the object before returning
 *   the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10621c8c * init_vlens_ctrl_params(cls_10621c8c *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_14 [12];
  
  puVar1 = auStack_14;
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  lens_fw_update_slot3((uint32_t)(param_1));
  *(uint16_t *)(puVar1 + 2) = 7;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  puVar1[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,7,s_VLENS_CTRL_10621cb4,*(uint16_t *)(puVar1 + 2),
               *(uint16_t *)(puVar1 + 6),puVar1[0xb]);
  forward_event_to_subobject(param_1->field_0x0,1);
  reset_subobject_at_offset_0x2c_104706a0(param_1->field_0x0);
  set_flag_based_on_param_10470714(param_1->field_0x0,1);
  return param_1;
}
