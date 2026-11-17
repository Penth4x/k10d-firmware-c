/* @k10d lookup_table_entry_by_key @ 0x1052b684
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Returns a 16-bit value from a small lookup table based on matching key and type
 *   parameters.
 * summary:
 *   The function searches a fixed-size table (3 entries) in ROM. If param_2 is 0, it
 *   returns a byte from a specific offset in param_3. Otherwise, it iterates through 3
 *   entries, comparing an int key and a byte type against param_2 and param_4. On a match,
 *   it returns a 16-bit value from a parallel array indexed by param_3 and the loop
 *   counter. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort lookup_table_entry_by_key(uint32_t param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = (ushort)*(byte *)(param_3 + 0x105f9bc9/*ROM*/);
  }
  else {
    uVar1 = 0;
    do {
      if ((*(int *)(uVar1 * 4 + 0x105f9bd0/*ROM*/) == param_2) &&
         (*(byte *)(uVar1 + 0x105f9be8/*ROM*/) == param_4)) {
        return *(ushort *)(param_3 * 2 + uVar1 * 4 + 0x105f9bdc/*ROM*/);
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 3);
  }
  return uVar2;
}
