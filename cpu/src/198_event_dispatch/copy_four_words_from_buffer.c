/* @k10d copy_four_words_from_buffer @ 0x10493cb2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Copies four 32-bit words from a stack buffer to a destination pointer after a virtual
 *   call and two helper calls.
 * summary:
 *   The function performs a virtual call on an object derived from param_2, then calls two
 *   unnamed helpers (0x1045bfe8 and 0x1045bea0) with stack buffers. It then loops to copy
 *   four 32-bit words from the local buffer auStack_28/uStack_2c to the memory location
 *   pointed to by param_5. The specific camera subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_from_buffer(uint32_t param_1,int *param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t auStack_38 [12];
  uint32_t uStack_2c;
  uint8_t auStack_28 [32];
  
  iVar1 = *(int *)(*param_2 + 0x20);
  (((vtbl_entry*)(iVar1))[3].fn)(auStack_38,*param_2 + (int)((vtbl_entry*)(iVar1))[3].adj);
  copy_four_words_from_source_1045bfe8(auStack_28,auStack_38);
  destroy_text_widget(auStack_38,2);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)&uStack_2c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
