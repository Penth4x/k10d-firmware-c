/* @k10d copy_four_words_to_buffer @ 0x10493c52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_to_buffer(uint32_t param_1,int *param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_38 [12];
  uint32_t uStack_2c;
  uint8_t auStack_28 [32];
  
  iVar1 = *(int *)(*param_2 + 0x20);
  (**(code **)(iVar1 + 0x1c))(auStack_38,*param_2 + (int)*(short *)(iVar1 + 0x18));
  copy_struct_via_stack(auStack_28,auStack_38);
  destroy_text_widget(auStack_38,2);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)&uStack_2c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
