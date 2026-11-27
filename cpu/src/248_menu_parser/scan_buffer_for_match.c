/* @k10d scan_buffer_for_match @ 0x104de486
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Iterates through a buffer defined by param_1, calling a predicate on each byte until a
 *   match is found or the buffer is exhausted.
 * summary:
 *   The function initializes a state pointer (param_2) via zero_struct_seven_words. It then
 *   loops through the memory region starting at *param_1 with a length of param_1[1],
 *   incrementing an offset (param_1[2]) and calling check_param_is_0x3c_or_0x3e with the
 *   current byte value. The loop terminates when check_param_is_0x3c_or_0x3e returns non-
 *   zero or the offset exceeds the length. It updates a counter in param_2[1] during the
 *   scan and returns true if a match was found (counter > 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool scan_buffer_for_match(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  zero_struct_seven_words(param_2);
  bVar1 = false;
  do {
    if (!bVar1) {
      bVar1 = true;
      *param_2 = *param_1 + param_1[2];
    }
    param_2[1] = param_2[1] + 1;
    iVar2 = check_param_is_0x3c_or_0x3e(param_1,(uint)*(byte *)(*param_1 + param_1[2]));
  } while ((iVar2 == 0) &&
          (iVar2 = param_1[2], param_1[2] = iVar2 + 1U, iVar2 + 1U < (uint)param_1[1]));
  iVar2 = param_2[1];
  if (iVar2 == 0) {
    zero_struct_seven_words(param_2);
  }
  else {
    drain_byte_queue((int *)(uint32_t)param_1);
  }
  return iVar2 != 0;
}
