/* @k10d allocate_and_init_object_1052ba8e @ 0x1052ba8e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Allocates a 12-byte object on the heap, initializes its first field to zero, and
 *   constructs a sub-object at offset 4.
 * summary:
 *   The function either uses the provided pointer or allocates 12 bytes via heap_alloc. It
 *   sets the first 4 bytes to 0, calls cls_105a2be0_new on the second field, and then
 *   copies a value from get_sensor_singleton into the first field. Finally, it calls
 *   forward_three_args_to_helper_10459d64 with arguments 1 and 0x1f on the second field.
 *   The role of the specific object being created is not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_object_1052ba8e(uint32_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    cls_105a2be0_new(param_1 + 1);
    iVar1 = get_sensor_singleton();
    *param_1 = *(uint32_t *)(iVar1 + 4);
    forward_three_args_to_helper_10459d64(param_1 + 1,1,0x1f);
  }
  return param_1;
}
