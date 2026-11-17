/* @k10d record_sample_index_in_buffer @ 0x104757fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a value at an index returned by subtract_100_from_param within a buffer and
 *   updates min/max tracking fields.
 * summary:
 *   Calls subtract_100_from_param to obtain an index iVar1. If the index is valid (0 to
 *   899), writes param_3 to the buffer at offset iVar1*4 and increments the count at
 *   param_1[6]. Updates the minimum index at param_1+7 and maximum index at param_1+0x1e if
 *   the current index is more extreme than the stored values or if the stored value is -100
 *   (initialization sentinel). The caller is allocate_and_bind_object_104751dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10475836) overlaps instruction at (ram,0x10475834)
    */

void record_sample_index_in_buffer(int *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = subtract_100_from_param(__frv_reg_unset(4), __frv_reg_unset(5));
  if ((-1 < iVar1) && (iVar1 < 900)) {
    *(uint32_t *)(*param_1 + iVar1 * 4) = param_3;
    param_1[6] = param_1[6] + 1;
    if ((*(short *)(param_1 + 7) == -100) || (iVar1 < *(short *)(param_1 + 7))) {
      *(short *)(param_1 + 7) = (short)iVar1;
    }
    if ((*(short *)((int)param_1 + 0x1e) == -100) || (*(short *)((int)param_1 + 0x1e) < iVar1)) {
      *(short *)((int)param_1 + 0x1e) = (short)iVar1;
    }
  }
  return;
}
