/* @k10d screen_mgr_add_input_sink @ 0x1046b704
 * name: verified (structural evidence: decomp; one caller (app object graph init 0x104331b2))
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Registers an input sink in the first free slot of screen manager +0x58..+0x64.
 * summary:
 *   VERIFIED: decomp; one caller (app object graph init 0x104331b2)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t screen_mgr_add_input_sink(void *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)param_1 + iVar1 + 0x58) == 0) {
      *(uint32_t *)((int)param_1 + iVar2 * 4 + 0x58) = param_2;
      return 1;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x10);
  return 0;
}
