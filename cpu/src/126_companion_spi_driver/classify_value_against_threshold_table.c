/* @k10d classify_value_against_threshold_table @ 0x104446a2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns an index into a threshold table based on a value checked by a callee.
 * summary:
 *   Calls check_sram_address_range with param_1 and param_2. If the result is non-zero, it
 *   iterates through a table of 133 uint32 values starting at DAT_105a0f88, returning the
 *   index of the first threshold that is greater than param_2. If no threshold is exceeded
 *   or the callee returns 0, it returns 0x87 (135). The function appears to perform a
 *   binary or linear search over a calibration or lookup table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int classify_value_against_threshold_table(uint32_t param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x87;
  iVar2 = check_sram_address_range(param_1,(char *)param_2);
  if (iVar2 != 0) {
    iVar1 = 4;
    iVar2 = 1;
    do {
      iVar3 = iVar2;
      if (param_2 < *(uint *)(DAT_105a0f88/*ROM*/ + iVar1)) {
        return iVar3 + -1;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar3 + 1;
    } while (iVar1 < 0x21d);
  }
  return iVar3;
}
