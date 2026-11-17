/* @k10d init_object_fields_and_buffer @ 0x104f4d30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a field at offset 0x38 and a buffer at offset 8 within the object.
 * summary:
 *   This function takes an object pointer (param_1) and performs two initialization steps.
 *   It calls wait_flg_obj on the field at offset 0x38 with a zero argument, likely clearing
 *   or resetting it. It then calls alloc_pool_and_init_task on the field at offset 8 with
 *   parameters 0xf, 0x1000, and 4, which appears to initialize a buffer or array of 15
 *   elements with a size of 4096 and a type/flag of 4. The function returns 1, indicating
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_and_buffer(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x38),0);
  alloc_pool_and_init_task((int *)(param_1 + 8),0xf,0x1000,4);
  return 1;
}
