/* @k10d read_table_entry_with_offset @ 0x1046d124
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 154_kernel_service_query (unit names are model-proposed)
 * purpose:
 *   Returns a 32-bit value from a table at DAT_105a8eb0 indexed by param_2, adding 0xe10 if
 *   param_3 is non-zero.
 * summary:
 *   The function performs a simple table lookup. It calculates an offset of either 0 or
 *   0xe10 based on whether param_3 is zero. It then adds this offset to the value stored at
 *   address DAT_105a8eb0 + param_2 * 4. The result is returned in r4. No side effects or
 *   memory writes are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_table_entry_with_offset(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0xe10;
  }
  return *(int *)(&DAT_105a8eb0/*ROM*/ + param_2 * 4) + iVar1;
}
