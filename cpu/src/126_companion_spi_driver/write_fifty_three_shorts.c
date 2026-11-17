/* @k10d write_fifty_three_shorts @ 0x1043617c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_fifty_three_shorts(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uStack_c;
  
  iVar1 = 0;
  uStack_c = 0x35;
  iVar2 = 0;
  do {
    write_word_to_array(param_1,iVar1,(int)(short)*(uint32_t *)(param_2 + iVar2));
    write_word_to_array(param_1,iVar1 + 1,(int)(short)*(uint32_t *)(param_2 + iVar2 + 4));
    write_word_to_array(param_1,iVar1 + 2,(int)(short)*(uint32_t *)(param_2 + iVar2 + 8));
    iVar1 = iVar1 + 3;
    uStack_c = uStack_c + -1;
    iVar2 = iVar2 + 0xc;
  } while (-1 < uStack_c);
  return;
}
