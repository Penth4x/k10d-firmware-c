/* @k10d set_field_and_call_handler @ 0x104bb59c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x2c of the object pointed to by param_1, then calls
 *   compute_exposure_adjustment with that object.
 * summary:
 *   The function stores the second argument into the 0x2c byte offset of the structure
 *   passed as the first argument. It then invokes the single callee
 *   compute_exposure_adjustment, passing the same object pointer. No other side effects or
 *   MMIO operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_handler(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x2c) = param_2;
  compute_exposure_adjustment((int)param_1);
  return;
}
