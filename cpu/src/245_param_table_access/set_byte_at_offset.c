/* @k10d set_byte_at_offset @ 0x104d564a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Writes a single byte to a structure at an offset determined by a helper function.
 * summary:
 *   Calls find_index_in_array_104d5820 with param_1, param_2, and a local variable to
 *   compute an offset. If the helper returns non-zero, it writes param_3 to the memory
 *   location at param_1 + 0x7c + offset. Returns the success status of the helper call. The
 *   specific role of the data structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_byte_at_offset(int param_1,uint32_t param_2,uint8_t param_3)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = find_index_in_array_104d5820(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    *(uint8_t *)(param_1 + 0x7c + iStack_c) = param_3;
  }
  return iVar1 != 0;
}
