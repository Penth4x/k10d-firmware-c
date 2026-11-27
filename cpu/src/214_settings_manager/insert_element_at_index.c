/* @k10d insert_element_at_index @ 0x104b097e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Inserts a value into a dynamic array at an even index if within bounds, returning 1 on
 *   success.
 * summary:
 *   Checks if param_3 is less than the size stored at param_1+1 and is even. If param_4 is
 *   0, it calls a function at 0x104acb86 to insert param_2 at param_3 with a count of 2.
 *   Otherwise, it calls write_little_endian_bytes. Returns 1 if the insertion path was
 *   taken, 0 otherwise. The callers are constructors for small 12-byte classes, suggesting
 *   this initializes a small internal buffer or list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t insert_element_at_index(int *param_1,uint32_t param_2,uint param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_3 < *(byte *)(param_1 + 1)) && ((param_3 & 1) == 0)) {
    if (param_4 == 0) {
      (*(code *)0x104acb86/*ROM*/)(*param_1 + param_3,param_2,2);
      uVar1 = 1;
    }
    else {
      write_little_endian_bytes((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
      uVar1 = 1;
    }
  }
  return uVar1;
}
