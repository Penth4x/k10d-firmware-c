/* @k10d increment_modulo_counter_1051eac6 @ 0x1051eac6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_modulo_counter_1051eac6(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar5 = (uint)*(byte *)(param_1 + 3);
    uVar1 = ((int)(uVar4 - 1) / (int)uVar5) * uVar5 + (uint)*(byte *)(param_1 + 5) % uVar5;
    uVar2 = uVar1 & 0xff;
    cVar3 = (char)uVar1;
    if (uVar4 <= uVar2) {
      if (uVar2 < uVar5) {
        cVar3 = (char)(uVar4 - 1);
      }
      else {
        cVar3 = cVar3 - *(byte *)(param_1 + 3);
      }
    }
    *(char *)(param_1 + 5) = cVar3;
  }
  return;
}
