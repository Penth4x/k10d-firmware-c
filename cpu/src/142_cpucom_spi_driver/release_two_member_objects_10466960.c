/* @k10d release_two_member_objects_10466960 @ 0x10466960
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases the two sub-objects referenced by fields at offsets 0x4 and 0x10 of a class
 *   instance.
 * summary:
 *   This is virtual slot 5 of class cls_105a7db4. It checks the pointers at offsets 0x4 and
 *   0x10; if non-null, it calls kernel_diag_taskstack on the address of the next field
 *   (offset+4 and offset+0xc respectively). The callee's role is unknown, but the pattern
 *   suggests releasing or resetting associated member structures. The function does not
 *   free the object itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_member_objects_10466960(void *param_1)

{
  if (*(int *)((int)param_1 + 4) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 4) + 4));
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 0x10) + 0xc));
  }
  return;
}
