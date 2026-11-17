/* @k10d check_field_bit_or_string @ 0x1045ff56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if a specific bit or string field in the object is set/non-empty, based on an
 *   index.
 * summary:
 *   Takes an object pointer and an index. If the index is 10, it checks if two specific
 *   bytes in the object are non-zero. Otherwise, it uses a lookup table to find a byte
 *   offset and mask, then checks if the masked byte is non-zero. Returns 1 if the condition
 *   is met, 0 otherwise. No callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_field_bit_or_string(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 10) {
    uVar1 = 0;
    if ((*(char *)((int)param_1 + _DAT_105a64d0/*ROM*/ + 5) != '\0') ||
       (*(char *)((int)param_1 + _DAT_105a64d0/*ROM*/ + 4) != '\0')) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
    if ((*(byte *)((int)param_1 + *(int *)(&DAT_105a6480/*ROM*/ + param_2 * 8) + 4) &
        (&DAT_105a6484/*ROM*/)[param_2 * 8]) == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
