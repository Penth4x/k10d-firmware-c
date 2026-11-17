/* @k10d init_16_byte_struct @ 0x10512dbe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Initializes a 16-byte structure with four 0x100 values and four zero values.
 * summary:
 *   The function accepts a pointer to a 16-byte structure. If the pointer is NULL, it
 *   allocates 16 bytes using heap_alloc. It then writes the constant 0x100 to the first
 *   four 16-bit fields and 0 to the last four 16-bit fields. It is called by the
 *   constructor of cls_1059e4d0 to initialize a member or sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_16_byte_struct(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x10), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0x100;
    param_1[1] = 0x100;
    param_1[2] = 0x100;
    param_1[3] = 0x100;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
