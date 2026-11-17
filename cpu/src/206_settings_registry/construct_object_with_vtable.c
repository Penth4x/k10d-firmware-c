/* @k10d construct_object_with_vtable @ 0x104a8b50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x14-byte object, sets its vtable and fields, and conditionally
 *   initializes it via two helper calls.
 * summary:
 *   The function acts as a constructor for class cls_105b6a30. It either uses the provided
 *   pointer or allocates a new 0x14-byte block via get_pool2_block. It sets the vtable
 *   pointer to &DAT_105b6a30 and stores the input parameters into the object's fields. If
 *   check_product_exceeds_threshold returns true, it calls compute_weighted_value and
 *   allocate_and_init_buffer_104a906e to perform further initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t
construct_object_with_vtable(uint16_t *param_1,uint16_t param_2,uint16_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  bool bVar2;
  int iVar1;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)get_pool2_block((void *)0x14), param_1 != (uint16_t *)0x0)) {
    *(void **)(param_1 + 8) = &DAT_105b6a30/*ROM*/;
    *param_1 = param_2;
    param_1[1] = param_3;
    *(uint32_t *)(param_1 + 2) = param_4;
    *(uint32_t *)(param_1 + 6) = 0;
    *(uint32_t *)(param_1 + 4) = param_5;
    bVar2 = check_product_exceeds_threshold(param_1);
    if (bVar2) {
      iVar1 = compute_weighted_value((int)param_1);
      allocate_and_init_buffer_104a906e(param_1,(void *)iVar1);
    }
  }
  return (short)param_1;
}
