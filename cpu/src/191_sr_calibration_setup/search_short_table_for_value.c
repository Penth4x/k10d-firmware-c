/* @k10d search_short_table_for_value @ 0x1048e506
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Linearly searches a fixed-size table of short values for a match against a value at
 *   param_1+0x24.
 * summary:
 *   Iterates through a table starting at 0x10225f4c with a stride of 0xe bytes, comparing
 *   each entry to the short value at offset 0x24 of param_1. The loop terminates when the
 *   sentinel value stored at 0x10100000 is encountered. Returns the pointer to the matching
 *   entry if found, otherwise returns the base pointer 0x10225f30. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short * search_short_table_for_value(int param_1)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = (short *)0x10225f4c/*ROM*/;
  if (sRam10225f4c != sRam10100000) {
    sVar2 = sRam10225f4c;
    do {
      if (sVar2 == *(short *)(param_1 + 0x24)) {
        return psVar1;
      }
      psVar1 = psVar1 + 0xe;
      sVar2 = *psVar1;
    } while (sVar2 != sRam10100000);
  }
  return (short *)0x10225f30/*ROM*/;
}
