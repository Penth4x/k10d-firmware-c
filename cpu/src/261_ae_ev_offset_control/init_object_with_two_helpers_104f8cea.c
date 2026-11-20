/* @k10d init_object_with_two_helpers_104f8cea @ 0x104f8cea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions on its member fields.
 * summary:
 *   The function takes an object pointer (param_1) and calls wait_flg_obj on the field at
 *   offset 0x2c with a zero argument. It then calls alloc_pool_and_init_task on the field
 *   at offset 8 with arguments 0xf, 0x1000, and 4. It returns 1. The specific roles of the
 *   callees and the object class are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_helpers_104f8cea(cls_105d4108 *param_1)

{
  wait_flg_obj(&param_1->field_0x2c,0);
  alloc_pool_and_init_task((int *)&param_1->field_0x8,0xf,0x1000,4);
  return 1;
}
