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

uint32_t init_object_fields_from_base(void *param_1)

{
  initialize_object_state_1041ad18(param_1);
  create_kernel_object((void *)((int)param_1 + 0x90));
  wait_flg_obj((void *)((int)param_1 + 0xc4),0);
  wait_flg_obj((void *)((int)param_1 + 0xcc),0);
  *(int *)((int)param_1 + 0xd4) = *(int *)((int)param_1 + 0x4c) + 0x68;
  *(int *)((int)param_1 + 0xd8) = *(int *)((int)param_1 + 0x4c) + 0x6c;
  *(int *)((int)param_1 + 0xdc) = *(int *)((int)param_1 + 0x4c) + 0x70;
  *(int *)((int)param_1 + 0xe0) = *(int *)((int)param_1 + 0x4c) + 0x74;
  *(int *)((int)param_1 + 0xe4) = *(int *)((int)param_1 + 0x4c) + 0x7c;
  *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0x4c) + 0x80;
  *(int *)((int)param_1 + 0xec) = *(int *)((int)param_1 + 0x4c) + 0x30;
  *(int *)((int)param_1 + 0xf0) = *(int *)((int)param_1 + 0x4c) + 0x4c;
  return 1;
}
