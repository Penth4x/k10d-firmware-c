/* @k10d copy_twelve_bytes_to_param5 @ 0x1048f072
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Copies 12 bytes from a stack buffer to the memory location pointed to by param_5.
 * summary:
 *   The function initializes several local stack buffers using a series of helper functions
 *   (alloc_and_zero_two_words_1045bc0e, store_two_words_to_memory, etc.). It then performs
 *   a loop that copies 12 bytes (3 words) from a local stack area (apuStack_3c) to the
 *   destination address provided in param_5. The specific data being copied is derived from
 *   the helper function calls, but the primary observable behavior is this 12-byte memory
 *   copy.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_twelve_bytes_to_param5(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *apuStack_3c [5];
  uint8_t auStack_28 [8];
  uint32_t auStack_20 [4];
  uint8_t auStack_10 [4];
  uint32_t uStack_c;
  
  alloc_and_zero_two_words_1045bc0e(auStack_28);
  store_two_words_to_memory(auStack_28,*param_2,param_2[1]);
  apuStack_3c[0] = (uint8_t *)0xffffffe8;
  allocate_and_init_widget(auStack_20);
  copy_eight_bytes_1045bf68(auStack_20,auStack_28);
  alloc_and_zero_two_words_1045c3bc(auStack_10);
  write_two_words_to_memory(auStack_10,0x78,0x30);
  copy_four_words(auStack_20,auStack_10);
  apuStack_3c[0] = &stack0xfffffff8 + (int)apuStack_3c[0];
  iVar2 = 0x10;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)apuStack_3c + iVar2) = *(uint32_t *)(apuStack_3c[0] + iVar1);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(auStack_10,2);
  destroy_text_widget(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  iVar2 = 0x10;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)((int)apuStack_3c + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
