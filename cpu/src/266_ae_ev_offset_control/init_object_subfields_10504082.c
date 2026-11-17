/* @k10d init_object_subfields_10504082 @ 0x10504082
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes two sub-fields of an object by calling two helper functions with fixed
 *   parameters.
 * summary:
 *   The function takes an object pointer (param_1) and calls wait_flg_obj on the field at
 *   offset 0x2c with a zero argument. It then calls alloc_pool_and_init_task on the field
 *   at offset 8 with arguments 0xf, 0x1000, and 4. It returns 1. The specific roles of the
 *   callees and the object fields are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_subfields_10504082(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x2c),0);
  alloc_pool_and_init_task((int *)(param_1 + 8),0xf,0x1000,4);
  return 1;
}
