/* @k10d clear_byte_and_call_helper @ 0x10486ee4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0x58 of the object and returns the result of a helper call.
 * summary:
 *   The function writes 0 to the byte at offset 0x58 of the object pointed to by param_1.
 *   It then calls check_heap_alloc_success with a pointer to offset 0x4c of the object and
 *   param_2, returning the helper's boolean result. The caller is a virtual method slot 3
 *   of class cls_105b2f20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool clear_byte_and_call_helper(void *param_1,int param_2)

{
  bool bVar1;
  
  *(uint8_t *)((int)param_1 + 0x58) = 0;
  bVar1 = check_heap_alloc_success((int *)((int)param_1 + 0x4c),param_2);
  return bVar1;
}
