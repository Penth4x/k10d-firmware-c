/* @k10d release_pointer_at_offset_0xc @ 0x10466086
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that value to
 *   call_subroutine_on_object_field, then returns. The callee's role is not verified, so
 *   the operation is described mechanically as releasing or processing the pointer field.
 *   No camera-specific or CPUcom-specific behavior is evident from this function's own
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_pointer_at_offset_0xc(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = call_subroutine_on_object_field(*(uint32_t *)(param_1 + 0xc));
  return uVar1;
}
