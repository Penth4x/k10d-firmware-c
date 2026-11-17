/* @k10d format_version_string_104ad8da @ 0x104ad8da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Formats a 16-bit version value into a dotted decimal string and writes it to a buffer.
 * summary:
 *   Allocates a 4-byte heap buffer and converts the nibbles of param_2 into ASCII digits
 *   (adding 0x30). It inserts a dot (0x2e) between the second and third nibbles, producing
 *   a string like 'X.Y.Z' or 'X.Y.Z.W' depending on the high nibble. Finally, it calls an
 *   unknown function at 0x104aca1e, passing a pointer derived from param_1+0x20 and the
 *   formatted string, likely to store or display the version.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_version_string_104ad8da(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)heap_alloc_2(4);
  pbVar1 = pbVar2;
  if ((param_2 & 0xf000) != 0) {
    *pbVar2 = (byte)((int)param_2 >> 0xc) & 0xf | 0x30;
    pbVar1 = pbVar2 + 1;
  }
  *pbVar1 = (byte)(param_2 >> 8) & 0xf | 0x30;
  pbVar1[1] = 0x2e;
  pbVar1[2] = (byte)((int)param_2 >> 4) & 0xf | 0x30;
  if (pbVar1 + 3 < pbVar2 + 4) {
    pbVar1[3] = (byte)param_2 & 0xf | 0x30;
  }
  (*(code *)0x104aca1e/*ROM*/)(*(int *)(param_1 + 0x20) + 0x20,pbVar2,4,0);
  return;
}
