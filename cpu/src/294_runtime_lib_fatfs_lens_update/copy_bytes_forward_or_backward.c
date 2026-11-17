/* @k10d copy_bytes_forward_or_backward @ 0x1054734a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1054735a) overlaps instruction at (ram,0x10547358)
    */

void copy_bytes_forward_or_backward(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = -1;
  bVar2 = false;
  if (param_1 <= param_2) {
    while (iVar1 = iVar1 + 1, !(bool)(bVar2 ^ param_3 < 0) && param_3 != 0) {
      *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + param_2);
      bVar2 = SCARRY4(param_3,-1);
      param_3 = param_3 + -1;
    }
    return;
  }
  if (0 < param_3) {
    do {
      iVar1 = param_3 + -1;
      bVar2 = 0 < param_3;
      *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + param_2);
      param_3 = iVar1;
    } while (bVar2 && iVar1 != 0);
  }
  return;
}
