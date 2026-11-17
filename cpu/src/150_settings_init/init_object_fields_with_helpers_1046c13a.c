/* @k10d init_object_fields_with_helpers_1046c13a @ 0x1046c13a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 150_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes three fields of a 0xc8-byte object by calling three helper functions with
 *   fixed parameters.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls three unnamed helpers on
 *   different offsets: alloc_pool_and_init_task on offset 4 with args (0x12, 0x2000, 4),
 *   forward_three_args_to_helper_10459edc on offset 0xb8 with args (8, 8), and wait_flg_obj
 *   on offset 0xc0 with arg 0. It returns 1. The object size matches the class size of 0xc8
 *   bytes, suggesting this is an initialization or setup routine for the object's internal
 *   state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_with_helpers_1046c13a(int param_1)

{
  alloc_pool_and_init_task((int *)(param_1 + 4),0x12,0x2000,4);
  forward_three_args_to_helper_10459edc((void *)(param_1 + 0xb8),8,8);
  wait_flg_obj((void *)(param_1 + 0xc0),0);
  return 1;
}
