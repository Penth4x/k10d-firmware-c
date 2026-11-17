/* @k10d build_mode_config_block @ 0x1048fad4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Constructs a 16-byte configuration structure on the stack based on a mode byte and
 *   copies it to the destination pointer.
 * summary:
 *   The function initializes a local 16-byte structure using several helper routines
 *   (allocate_and_init_widget, alloc_and_zero_two_words_1045bc0e,
 *   alloc_and_zero_two_words_1045c3bc). It reads a byte from param_2+0x34 to select
 *   specific parameters (0x280/0x1e0 or 0x500/0x2f8) which are passed to
 *   write_two_words_to_memory. Finally, it copies the resulting 16-byte block from the
 *   stack to the memory location pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_mode_config_block(void *param_1,void *param_2)

{
  char cVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t ***apppuStack_40 [9];
  uint8_t auStack_1c [8];
  uint8_t auStack_14 [8];
  
  apppuStack_40[0] = (uint32_t ***)apppuStack_40 + 5;
  allocate_and_init_widget((void *)apppuStack_40[0]);
  alloc_and_zero_two_words_1045bc0e((void *)auStack_1c);
  alloc_and_zero_two_words_1045c3bc((void *)auStack_14);
  store_two_words_to_memory((void *)auStack_1c,0,0);
  copy_eight_bytes_1045bf68((void *)apppuStack_40[0],(void *)auStack_1c);
  cVar1 = *(char *)((int)param_2 + 0x34);
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    uVar2 = 0x280;
    uVar3 = 0x1e0;
  }
  else if (cVar1 == '\x02') {
    uVar2 = 0x500;
    uVar3 = 0x2f8;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  write_two_words_to_memory((void *)auStack_14,uVar2,uVar3);
  copy_and_dispatch_two_params((void *)apppuStack_40[0],(void *)auStack_14);
  iVar5 = 0x10;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)((int)apppuStack_40 + iVar5) = *(uint32_t *)((int)apppuStack_40 + iVar5 + 0x10)
    ;
    iVar5 = iVar4;
  } while (iVar4 != 0);
  free_heap_if_flagged_1045c402((void *)auStack_14,2);
  free_heap_block_if_flagged_1045bc54((void *)auStack_1c,2);
  destroy_text_widget((void *)apppuStack_40[0],2);
  iVar5 = 0x10;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(iVar4 + (int)param_1) = *(uint32_t *)((int)apppuStack_40 + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
  return;
}
