/* @k10d select_and_store_mode_value @ 0x000f4614
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects between two helper functions based on state flags and stores the result in a
 *   mode variable.
 * summary:
 *   The function checks the value of DAT_0003c3bd (0 or 4) and bits 1 and 2 of DAT_0003c4df
 *   to determine a branch. It sets DAT_0003c440 to either 4 or 5. Depending on the branch,
 *   it calls either dispatch_based_on_flag or dispatch_on_flag_zero_000f3f7a with arguments
 *   from DAT_0003c565 or DAT_0003c564, respectively, and stores the return value in
 *   DAT_0003c480/DAT_0003c481 or DAT_0003c47e. The specific meaning of the state variables
 *   and helper functions is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_store_mode_value(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c3bd == '\0') || (DAT_0003c3bd == '\x04')) {
    if ((DAT_0003c4df & 2) == 0) {
      if ((DAT_0003c4df & 4) != 0) {
        if (DAT_0003c3bd == '\0') {
          DAT_0003c440 = 4;
          uVar1 = dispatch_based_on_flag((uint)DAT_0003c565);
          DAT_0003c480 = (uint8_t)uVar1;
          DAT_0003c481 = DAT_0003c480;
        }
        else {
          DAT_0003c440 = 5;
          uVar1 = dispatch_on_flag_zero_000f3f7a((uint)DAT_0003c564);
          DAT_0003c47e = (uint8_t)uVar1;
        }
      }
    }
    else if (DAT_0003c3bd == '\0') {
      DAT_0003c440 = 5;
      uVar1 = dispatch_on_flag_zero_000f3f7a((uint)DAT_0003c564);
      DAT_0003c47e = (uint8_t)uVar1;
    }
    else {
      DAT_0003c440 = 4;
      uVar1 = dispatch_based_on_flag((uint)DAT_0003c565);
      DAT_0003c480 = (uint8_t)uVar1;
      DAT_0003c481 = DAT_0003c480;
    }
  }
  return;
}
