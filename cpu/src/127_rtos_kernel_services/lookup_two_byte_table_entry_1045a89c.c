/* @k10d lookup_two_byte_table_entry_1045a89c @ 0x1045a89c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from a 2D table at DAT_105a4692 using two index parameters with
 *   bounds checks.
 * summary:
 *   The function indexes into a table of 16-bit entries located at DAT_105a4692. It uses
 *   param_3 as the row index (0-127) and param_2 as the column index (0-1), calculating the
 *   offset as param_3 * 2 + (param_2 & 0xffff) * 0x102. If either index is out of range, it
 *   returns 0. The caller context (rtos_wrappers_and_heap) does not clarify the specific
 *   data being looked up, so the role is limited to a generic table access.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_two_byte_table_entry_1045a89c(uint32_t param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((int)param_2 < 2) {
    iVar1 = (int)*(short *)(DAT_105a4692/*ROM*/ + param_3 * 2 + (param_2 & 0xffff) * 0x102);
  }
  else {
    iVar1 = 0;
  }
  if (0x80 < param_3) {
    iVar1 = 0;
  }
  return iVar1;
}
