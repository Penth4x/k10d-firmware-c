/* @k10d decode_string_into_buffer @ 0x1048163c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t decode_string_into_buffer(void *param_1,char *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  int iVar4;
  
  iVar1 = count_string_bytes(param_2);
  if (iVar1 < 0xd) {
    iVar1 = count_string_bytes(param_2);
    iVar1 = (*(code *)0x10480bf8/*ROM*/)(iVar1,0xc);
    iVar4 = 0;
    if (0 < iVar1) {
      iVar1 = iVar1 + -3;
      if (2 < iVar1) {
        do {
          uVar3 = (*(code *)0x10480be4/*ROM*/)(param_2[iVar4]);
          *(uint8_t *)((int)param_1 + iVar4 + 8) = uVar3;
          uVar3 = (*(code *)0x10480be4/*ROM*/)(param_2[iVar4 + 1]);
          *(uint8_t *)((int)param_1 + iVar4 + 9) = uVar3;
          uVar3 = (*(code *)0x10480be4/*ROM*/)(param_2[iVar4 + 2]);
          *(uint8_t *)((int)param_1 + iVar4 + 10) = uVar3;
          iVar1 = iVar1 + -3;
          iVar4 = iVar4 + 3;
        } while (-1 < iVar1);
      }
      for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
        uVar3 = (*(code *)0x10480be4/*ROM*/)(param_2[iVar4]);
        *(uint8_t *)((int)param_1 + iVar4 + 8) = uVar3;
        iVar4 = iVar4 + 1;
      }
    }
    *(uint8_t *)((int)param_1 + iVar4 + 8) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
