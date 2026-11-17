/* @k10d adjust_param_by_flag @ 0x000c5cee
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally modifies the input parameter based on two global flag bytes before
 *   returning it.
 * summary:
 *   The function checks DAT_0003c444 and bit 3 of DAT_0003c127. If DAT_0003c444 is 0 and
 *   bit 3 is set, it returns a value derived from DAT_0003c576. If DAT_0003c444 is 2 and
 *   bit 3 is set, it calls compute_centered_offset and passes the result to
 *   divide_two_integers with argument 4. Otherwise, it returns the original param_1
 *   unchanged. The specific meaning of the global variables and the callees is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint adjust_param_by_flag(uint param_1)

{
  uint32_t uVar1;
  
  if (DAT_0003c444 == '\0') {
    if ((DAT_0003c127 & 8) != 0) {
      param_1 = (DAT_0003c576 + 8) * 3 >> 3;
    }
  }
  else if ((DAT_0003c444 == '\x02') && ((DAT_0003c127 & 8) != 0)) {
    uVar1 = compute_centered_offset();
    param_1 = divide_two_integers(uVar1,4);
  }
  return param_1;
}
