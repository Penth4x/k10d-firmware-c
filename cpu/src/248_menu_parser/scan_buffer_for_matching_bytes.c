/* @k10d scan_buffer_for_matching_bytes @ 0x104de390
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Iterates through a byte buffer, calling two check functions per byte and recording the
 *   first match offset.
 * summary:
 *   The function loops from index 0 to param_1[1], reading each byte from the buffer at
 *   *param_1. For each byte, it calls check_key_code_in_set; if that returns 0, it records
 *   the current offset in param_2[0] (on the first match) and increments a counter in
 *   param_2[1]. It then calls check_param_is_0x3c_or_0x3e on the same byte; if that returns
 *   non-zero, the loop breaks. If a second condition is met (bVar1 true and
 *   check_key_code_in_set non-zero), it calls drain_byte_queue and returns true. Finally,
 *   it calls zero_struct_seven_words or drain_byte_queue based on whether any matches were
 *   found, and returns whether the match count is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool scan_buffer_for_matching_bytes(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  zero_struct_seven_words(param_2);
  bVar1 = false;
  uVar2 = param_1[2];
  do {
    iVar3 = check_key_code_in_set(param_1,(uint)*(byte *)(*param_1 + uVar2));
    if (iVar3 == 0) {
      if (!bVar1) {
        bVar1 = true;
        *param_2 = *param_1 + param_1[2];
      }
      param_2[1] = param_2[1] + 1;
    }
    else if (bVar1) {
      drain_byte_queue(param_2);
      return true;
    }
    iVar3 = check_param_is_0x3c_or_0x3e(param_1,(uint)*(byte *)(*param_1 + param_1[2]));
    if (iVar3 != 0) break;
    uVar2 = param_1[2] + 1;
    param_1[2] = uVar2;
  } while (uVar2 < (uint)param_1[1]);
  iVar3 = param_2[1];
  if (iVar3 == 0) {
    zero_struct_seven_words(param_2);
  }
  else {
    drain_byte_queue((int *)(uint32_t)param_1);
  }
  return iVar3 != 0;
}
