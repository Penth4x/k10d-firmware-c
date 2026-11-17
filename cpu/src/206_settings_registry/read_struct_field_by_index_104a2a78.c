/* @k10d read_struct_field_by_index_104a2a78 @ 0x104a2a78
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the 4-byte field at offset 8 + index*4 from a structure, or 0 if index is out
 *   of range 0-3.
 * summary:
 *   Takes a pointer (param_1) and an index (param_2). If the index is between 0 and 3
 *   inclusive, it dereferences the 4-byte value at param_1 + 8 + index*4 and returns it.
 *   Otherwise it returns 0. No callees are invoked. The callers are unnamed, so the
 *   specific data structure being indexed is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_index_104a2a78(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)((int)param_1 + param_2 * 4 + 8);
  }
  return uVar1;
}
