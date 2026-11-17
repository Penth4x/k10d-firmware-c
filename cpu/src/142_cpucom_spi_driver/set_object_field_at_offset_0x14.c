/* @k10d set_object_field_at_offset_0x14 @ 0x104655bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the field at offset 0x14 of the object pointed to by param_1.
 * summary:
 *   A trivial setter that writes the second argument into a fixed offset (0x14) of the
 *   first argument's structure. It has no callees and no other side effects. The specific
 *   meaning of the field at 0x14 cannot be determined from this function alone, though it
 *   resides in the cpucom_spi_driver module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_at_offset_0x14(void *param_1,void *param_2)

{
  *(void **)((int)param_1 + 0x14) = param_2;
  return;
}
