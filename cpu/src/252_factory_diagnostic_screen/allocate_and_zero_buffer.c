/* @k10d allocate_and_zero_buffer @ 0x104e46a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_zero_buffer(int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = mempool_get_block(*(void **)(param_1 + 0x48),(void *)0x157c0,0);
  puVar1 = (uint32_t *)(iVar3 + 0x157bc);
  iVar2 = 0x1ca4;
  do {
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -3;
  } while (-1 < iVar2);
  return iVar3;
}
