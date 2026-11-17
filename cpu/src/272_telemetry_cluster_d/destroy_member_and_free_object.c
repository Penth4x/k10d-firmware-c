/* @k10d destroy_member_and_free_object @ 0x105132dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Destroys a nested object member at a fixed offset and frees the owning heap block when
 *   the flag bit is set.
 * summary:
 *   Called as virtual slot 4 of cls_105d6450 and from its deleting destructor. It invokes
 *   virtual slot 1 of cls_105a2be0 on the member at param_1+0x161cc, clears two stack
 *   words, calls lens_fw_update_teardown, and then calls heap_free(param_1) if param_2 bit
 *   0 is set. The behavior matches a C++ member-destruction step in a deleting destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_and_free_object(int param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_14 [8];
  
  puVar1 = (uint32_t *)auStack_14;
  if (param_1 != 0) {
    cls_105a2be0_delete((void *)(param_1 + 0x161cc),2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
