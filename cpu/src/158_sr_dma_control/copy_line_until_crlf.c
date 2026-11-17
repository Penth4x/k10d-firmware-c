/* @k10d copy_line_until_crlf @ 0x1046ee6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_line_until_crlf(uint32_t param_1,char *param_2,int *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  if (*param_2 != '\0') {
    iVar2 = 1;
    do {
      if ((param_2[iVar1] == '\r') && (param_2[iVar2] == '\n')) {
        *(uint8_t *)((int)param_4 + iVar1) = 0;
        iVar1 = iVar1 + 2;
        uVar3 = 1;
        break;
      }
      *(char *)(iVar1 + (int)param_4) = param_2[iVar1];
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (param_2[iVar1] != '\0');
  }
  *param_3 = iVar1;
  return uVar3;
}
