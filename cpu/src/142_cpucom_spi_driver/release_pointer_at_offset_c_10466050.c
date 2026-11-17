/* @k10d release_pointer_at_offset_c_10466050 @ 0x10466050
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0xc of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0xc and forwards that pointer to
 *   call_subroutine_on_field_0x18_104407d8, which likely frees or releases the resource. No
 *   other operations are performed. The specific subsystem or resource type is not
 *   determinable from this function's code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_c_10466050(int param_1)

{
  call_subroutine_on_field_0x18_104407d8(*(void **)(param_1 + 0xc));
  return;
}
