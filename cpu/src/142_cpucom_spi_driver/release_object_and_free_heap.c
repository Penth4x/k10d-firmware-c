/* @k10d release_object_and_free_heap @ 0x10465554
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Optionally releases an object stored at offset 0x4 of a struct and frees the struct
 *   itself when bit 0 of the flags is set.
 * summary:
 *   Takes a struct pointer and a flags word. If the pointer is non-NULL and the fields at
 *   offsets 0x4 and 0xc are non-zero, it calls heap_free_2 on the value at offset 0x4. If
 *   bit 0 of the flags is set, it calls heap_free on the struct pointer. The caller
 *   cls_105a7ea0_delete uses this to destroy a member and free the object, consistent with
 *   a generic cleanup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_free_heap(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    if ((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 4) != 0)) {
      heap_free_2(*(int *)((int)param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
