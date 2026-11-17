/* @k10d alloc_array_bytes @ 0x1045cd9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates param_2 elements (4 bytes each) from the system heap via heap_alloc_2.
 * summary:
 *   Computes the byte size as param_2 << 2 and passes it to heap_alloc_2, which obtains a
 *   block from the system heap. The allocated pointer is not returned or stored in this
 *   function's visible code. It is virtual slot 2 of cls_105a5c3c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_array_bytes(uint32_t param_1,int param_2)

{
  heap_alloc_2(param_2 << 2);
  return;
}
