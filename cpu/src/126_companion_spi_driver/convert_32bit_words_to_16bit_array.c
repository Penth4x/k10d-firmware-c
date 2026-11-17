/* @k10d convert_32bit_words_to_16bit_array @ 0x10435d58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void convert_32bit_words_to_16bit_array(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  param_1 = param_1 + 4;
  iVar3 = 8;
  do {
    iVar4 = iVar3;
    *(short *)(param_1 + iVar1) = (short)*(uint32_t *)(param_2 + iVar2);
    *(short *)(param_1 + iVar1 + 2) = (short)*(uint32_t *)(param_2 + iVar2 + 4);
    *(short *)(param_1 + iVar1 + 4) = (short)*(uint32_t *)(param_2 + iVar2 + 8);
    iVar2 = iVar2 + 0xc;
    iVar3 = iVar4 + -3;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar3);
  iVar4 = iVar4 + -1;
  do {
    *(short *)(param_1 + iVar1) = (short)*(uint32_t *)(param_2 + iVar2);
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + -1;
    iVar1 = iVar1 + 2;
  } while (-1 < iVar4);
  return;
}
