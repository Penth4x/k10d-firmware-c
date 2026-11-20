/* @k10d init_object_subfields_104f36ca @ 0x104f36ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Initializes two sub-structures within a 0x40-byte object by calling two helper
 *   functions with fixed parameters.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls wait_flg_obj on the field
 *   at offset 0x38 with a zero argument. It then calls alloc_pool_and_init_task on the
 *   field at offset 8 with arguments 0xf, 0x1000, and 4. It returns 1. The specific roles
 *   of the callees are unknown, but the pattern suggests initialization or configuration of
 *   internal object state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_subfields_104f36ca(cls_105c39a4 *param_1)

{
  wait_flg_obj(&param_1->field_0x38,0);
  alloc_pool_and_init_task((int *)&param_1->field_0x8,0xf,0x1000,4);
  return 1;
}
