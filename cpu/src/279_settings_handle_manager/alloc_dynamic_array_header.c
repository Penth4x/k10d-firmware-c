/* @k10d alloc_dynamic_array_header @ 0x10521030
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte header struct and, if param_2 is nonzero, a backing array of
 *   param_2 ints.
 * summary:
 *   If param_1 is NULL it heap_allocs 0x10 bytes; on success it stores param_2 in the first
 *   word and zeroes the next three words. When param_2 is nonzero it heap_alloc_2s
 *   (param_2<<2) bytes and stores the pointer in the fourth word. Returns the header
 *   pointer (or NULL on allocation failure). The callers are unnamed, so no camera
 *   subsystem role can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * alloc_dynamic_array_header(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)heap_alloc((void *)0x10), param_1 != (int *)0x0)) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_2 != 0) {
      iVar1 = heap_alloc_2(*param_1 << 2);
      param_1[3] = iVar1;
    }
  }
  return param_1;
}
