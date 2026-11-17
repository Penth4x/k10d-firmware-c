/* @k10d copy_48_bytes @ 0x1042f1e0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Copies 48 bytes (12 words) from a source buffer to a destination buffer.
 * summary:
 *   The function performs a simple memory copy of 48 bytes from param_1 to param_2. It
 *   iterates 3 times, copying 16 bytes (4 words) per iteration. No callees are involved,
 *   and no specific camera subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_48_bytes(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0;
  do {
    *(uint32_t *)(iVar1 + param_2) = *(uint32_t *)(iVar1 + param_1);
    *(uint32_t *)(iVar1 + 4 + param_2) = *(uint32_t *)(iVar1 + 4 + param_1);
    iVar2 = iVar1 + 0xc;
    *(uint32_t *)(iVar1 + 8 + param_2) = *(uint32_t *)(iVar1 + 8 + param_1);
    iVar1 = iVar1 + 0x10;
    *(uint32_t *)(iVar2 + param_2) = *(uint32_t *)(iVar2 + param_1);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return;
}
