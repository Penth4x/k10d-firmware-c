/* @k10d compute_offset_if_type_four @ 0x1051de7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a boolean indicating if a helper offset was computed and stores the sum of
 *   param_4 and that offset at param_2+0x30.
 * summary:
 *   Checks if the short at param_3+2 equals 4. If so, calls
 *   read_table_entry_by_index(param_3, 0) to get an offset; otherwise uses 0. Stores
 *   param_4 plus this offset into the integer at param_2+0x30. Returns true if the offset
 *   was non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compute_offset_if_type_four(uint32_t param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  
  if (*(short *)((int)param_3 + 2) == 4) {
    iVar1 = read_table_entry_by_index(param_3,0);
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_2 + 0x30) = param_4 + iVar1;
  return iVar1 != 0;
}
