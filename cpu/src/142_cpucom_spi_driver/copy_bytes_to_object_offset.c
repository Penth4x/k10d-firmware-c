/* @k10d copy_bytes_to_object_offset @ 0x10464eca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to the object's field at offset 0x10, bracketed by
 *   two helper calls.
 * summary:
 *   The function calls free_cpucom_context on the object pointer, then reads the pointer
 *   stored at offset 0x10. If that pointer is non-null, it performs a byte-wise copy of
 *   param_3 bytes from the source buffer (param_2) to the destination buffer (param_1 +
 *   0x10). Finally, it calls free_cpucom_context_ref on the object. The module context
 *   suggests this is part of a CPUcom SPI transaction context, likely copying transaction
 *   data into a buffer managed by the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_bytes_to_object_offset(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  free_cpucom_context(param_1);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      *(uint8_t *)(param_3 + iVar1) = *(uint8_t *)(param_3 + param_2);
    }
  }
  free_cpucom_context_ref(param_1);
  return;
}
