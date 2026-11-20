/* @k10d compute_two_derived_values_000d3d56 @ 0x000d3d56
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes two 16-bit values from global state and passes them to a helper function.
 * summary:
 *   The function reads flags and data from the 0x0003c1xx region. It performs arithmetic
 *   operations involving multiplication, shifting, and addition to derive two 16-bit values
 *   stored at 0x0003cc70 and 0x0003cc72. It also stores offsets at 0x0003cc78 and
 *   0x0003cc7a. Finally, it calls apply_signed_offset_pair twice with pointers to the
 *   computed values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_two_derived_values_000d3d56(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_0003ce00 & 1) != 0) {
    if ((DAT_0003c101 & 4) == 0) {
      uVar2 = 1;
    }
    else if ((DAT_0003c101 & 0x20) == 0) {
      uVar2 = DAT_0003c102 & 7;
    }
    else {
      uVar2 = 7;
    }
    bVar1 = (&DAT_000fb304)[uVar2];
    uVar2 = (uint)bVar1;
    uVar4 = DAT_0003c104 & 0xf;
    uVar3 = 3 - ((DAT_0003c106 & 0x60) >> 5);
    if ((DAT_0003c581 & 0x20) == 0) {
      _DAT_0003cc70 =
           ((short)(uVar2 * 3 >> (uVar3 & 0x1f)) + 0x40) -
           ((short)(uVar2 * uVar4 >> (uVar3 & 0x1f)) + (short)((DAT_0003c104 & 0xf0) >> 1));
    }
    else {
      _DAT_0003cc70 =
           ((ushort)bVar1 * 3 + 0x40) - ((DAT_0003c106 & 0x1f) * 4 + (ushort)bVar1 * (short)uVar4);
    }
    _DAT_0003cc78 = (DAT_0003c105 & 0x1f) << 3;
    uVar4 = DAT_0003c115 & 0xf;
    uVar3 = 3 - ((DAT_0003c117 & 0x60) >> 5);
    if ((DAT_0003c581 & 0x20) == 0) {
      _DAT_0003cc72 =
           ((short)(uVar2 * 3 >> (uVar3 & 0x1f)) + 0x40) -
           ((short)(uVar2 * uVar4 >> (uVar3 & 0x1f)) + (short)((DAT_0003c115 & 0xf0) >> 1));
    }
    else {
      _DAT_0003cc72 =
           ((ushort)bVar1 * 3 + 0x40) - ((DAT_0003c117 & 0x1f) * 4 + (ushort)bVar1 * (short)uVar4);
    }
    _DAT_0003cc72 =
         _DAT_0003cc72 + (short)*(uint32_t *)(&DAT_000fb30c + (uint)(DAT_0003c118 >> 6) * 4);
    _DAT_0003cc7a = (DAT_0003c116 & 0x1f) << 3;
    apply_signed_offset_pair((void *)&DAT_0003cc70);
    apply_signed_offset_pair((void *)&DAT_0003cc78);
  }
  return;
}
