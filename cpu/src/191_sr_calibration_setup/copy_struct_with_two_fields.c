/* @k10d copy_struct_with_two_fields @ 0x1048e430
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Copies a 16-byte structure from a source pointer to a destination pointer.
 * summary:
 *   The function initializes several local stack objects using helper functions in the
 *   0x1045xxxx range. It retrieves a pointer via search_short_table_for_value and extracts
 *   two 16-bit values from offsets 0x14 and 0x16 of that object. After setting up local
 *   state, it performs a 16-byte copy from a source address (derived from param_2) to the
 *   destination address provided in param_5. The function concludes by calling cleanup or
 *   finalization routines on the local objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_with_two_fields(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
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
  iVar1 = (uintptr_t)(search_short_table_for_value((int)(param_2)));
  alloc_and_zero_two_words_1045c3bc(auStack_10);
  write_two_words_to_memory(auStack_10,*(uint16_t *)(iVar1 + 0x14),*(uint16_t *)(iVar1 + 0x16));
  copy_four_words(auStack_20,auStack_10);
  apuStack_3c[0] = &stack0xfffffff8 + (int)apuStack_3c[0];
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)apuStack_3c + iVar1) = *(uint32_t *)(apuStack_3c[0] + iVar2);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  free_heap_if_flagged_1045c402(auStack_10,2);
  destroy_text_widget(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)apuStack_3c + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
