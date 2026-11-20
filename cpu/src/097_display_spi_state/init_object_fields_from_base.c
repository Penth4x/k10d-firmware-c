/* @k10d init_object_fields_from_base @ 0x1041baf8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes object fields at offsets 0x90-0xf0 by calling helpers and storing derived
 *   pointers from offset 0x4c.
 * summary:
 *   This function acts as a virtual method (slot 2) for class cls_1059d1d8. It first calls
 *   the base class virtual method (initialize_object_state_1041ad18) and two other helper
 *   functions (create_kernel_object, wait_flg_obj) on specific object offsets. It then
 *   populates a series of integer fields (0xd4 through 0xf0) with values calculated by
 *   adding fixed offsets to the integer stored at offset 0x4c of the object. The function
 *   returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_from_base(cls_1059d1d8 *param_1)

{
  initialize_object_state_1041ad18((cls_1059cbf0 *)param_1);
  create_kernel_object(&param_1->field_0x90);
  wait_flg_obj(&param_1->field_0xc4,0);
  wait_flg_obj(&param_1->field_0xcc,0);
  param_1->field_0xd4 = param_1->field_0x4c + 0x68;
  param_1->field_0xd8 = param_1->field_0x4c + 0x6c;
  param_1->field_0xdc = param_1->field_0x4c + 0x70;
  param_1->field_0xe0 = param_1->field_0x4c + 0x74;
  param_1->field_0xe4 = param_1->field_0x4c + 0x7c;
  param_1->field_0xe8 = param_1->field_0x4c + 0x80;
  *(int *)&param_1->field_0xec = param_1->field_0x4c + 0x30;
  param_1->field_0xf0 = param_1->field_0x4c + 0x4c;
  return 1;
}
