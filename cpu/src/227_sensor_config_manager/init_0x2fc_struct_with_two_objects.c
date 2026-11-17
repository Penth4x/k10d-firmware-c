/* @k10d init_0x2fc_struct_with_two_objects @ 0x104c221e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x2fc-byte block, zeroes fields, and constructs two embedded
 *   objects at offsets 0x18 and 0x138.
 * summary:
 *   The function accepts a pointer; if NULL, it calls heap_alloc for 0x2fc bytes. It
 *   initializes the first byte to 0, sets several 16/32-bit fields to 0 or 0xffffffff, and
 *   calls cls_105aae7c_new and cls_105b572c_new on sub-objects. It returns the pointer to
 *   the initialized structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t * init_0x2fc_struct_with_two_objects(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x2fc), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    *(uint32_t *)(param_1 + 4) = 0xffffffff;
    *(uint16_t *)(param_1 + 8) = 0;
    *(uint16_t *)(param_1 + 10) = 0;
    *(uint32_t *)(param_1 + 0xc) = 0xffffffff;
    *(uint32_t *)(param_1 + 0x10) = 0xffffffff;
    *(uint16_t *)(param_1 + 0x14) = 0;
    *(uint16_t *)(param_1 + 0x16) = 0;
    cls_105aae7c_new(param_1 + 0x18);
    cls_105b572c_new((void *)(param_1 + 0x138));
    *(uint32_t *)(param_1 + 0x2f0) = 0;
    *(uint32_t *)(param_1 + 0x2f4) = 0;
    *(uint32_t *)(param_1 + 0x2f8) = 0;
  }
  return param_1;
}
