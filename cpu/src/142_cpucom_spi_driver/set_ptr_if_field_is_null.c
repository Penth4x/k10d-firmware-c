/* @k10d set_ptr_if_field_is_null @ 0x10465596
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the second pointer field of a structure if the fourth field is
 *   zero.
 * summary:
 *   Checks if the integer at offset 0xc of the structure pointed to by param_1 is zero. If
 *   it is, writes param_2 to offset 4 and returns true. Returns false if the field at
 *   offset 0xc was non-zero. The specific role of the structure fields is not determinable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_ptr_if_field_is_null(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)((int)param_1 + 0xc) == 0;
  if (bVar1) {
    *(void **)((int)param_1 + 4) = param_2;
  }
  return bVar1;
}
