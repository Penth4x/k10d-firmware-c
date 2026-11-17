/* @k10d build_and_copy_struct @ 0x1048d85e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Initializes a local struct via helper calls, conditionally sets fields from a pointer,
 *   and copies the result to a destination buffer.
 * summary:
 *   The function calls a series of initialization and setup routines
 *   (alloc_and_zero_two_words_1045bc0e, store_two_words_to_memory,
 *   allocate_and_init_widget, copy_eight_bytes_1045bf68, alloc_and_zero_two_words_1045c3bc)
 *   on stack-allocated structures. It conditionally reads two 16-bit values from a pointer
 *   stored at offset 0x12 in param_2 and passes them to write_two_words_to_memory. Finally,
 *   it copies 16 bytes from the constructed structure to the memory location specified by
 *   param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_copy_struct(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *apuStack_3c [5];
  uint8_t auStack_28 [4];
  uint32_t auStack_24 [5];
  uint8_t auStack_10 [8];
  
  alloc_and_zero_two_words_1045bc0e(auStack_28);
  store_two_words_to_memory(auStack_28,*param_2,param_2[1]);
  apuStack_3c[0] = auStack_24 + 1;
  allocate_and_init_widget(apuStack_3c[0]);
  copy_eight_bytes_1045bf68(apuStack_3c[0],auStack_28);
  alloc_and_zero_two_words_1045c3bc(auStack_10);
  iVar1 = *(int *)(param_2 + 0x12);
  if (iVar1 != 0) {
    write_two_words_to_memory(auStack_10,*(uint16_t *)(iVar1 + 0xc),*(uint16_t *)(iVar1 + 0xe));
  }
  copy_four_words(apuStack_3c[0],auStack_10);
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)apuStack_3c + iVar1) = *(uint32_t *)((int)auStack_24 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  free_heap_if_flagged_1045c402(auStack_10,2);
  destroy_text_widget(apuStack_3c[0],2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)apuStack_3c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
