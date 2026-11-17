/* @k10d init_object_with_buffer @ 0x10464d78
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting two internal fields and allocating a 0x18-byte heap
 *   buffer stored at offset 0x18.
 * summary:
 *   This function is virtual method slot 2 of class cls_105a7bf0. It calls
 *   forward_three_args_to_helper_10459edc on the field at offset 0x20 with arguments (1,1),
 *   calls wait_flg_obj on the field at offset 0x34 with argument 0, allocates a 0x18-byte
 *   heap buffer, initializes it via cpucom_request_clone, and stores the pointer in the
 *   field at offset 0x18. Returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_buffer(void *param_1)

{
  int iVar1;
  
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x20),1,1);
  wait_flg_obj((void *)((int)param_1 + 0x34),0);
  iVar1 = heap_alloc((void *)0x18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cpucom_request_clone((void *)iVar1,0);
  }
  *(int *)((int)param_1 + 0x18) = iVar1;
  return 1;
}
