/* @k10d copy_stack_bytes_to_buffer @ 0x10493c26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_bytes_to_buffer(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  int iVar2;
  
  (*(code *)0x1048cbd4/*ROM*/)(auStack_10,*param_2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)((int)&uStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
