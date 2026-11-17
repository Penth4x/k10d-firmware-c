/* @k10d set_field_and_call_helper_104bb58a @ 0x104bb58a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to offset 0x32 of a struct and calls a helper on that struct.
 * summary:
 *   Stores param_2 into the 16-bit field at param_1+0x32, then invokes
 *   compute_exposure_adjustment with the same struct pointer. The role of the field and the
 *   helper is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_104bb58a(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 0x32) = param_2;
  compute_exposure_adjustment(param_1);
  return;
}
