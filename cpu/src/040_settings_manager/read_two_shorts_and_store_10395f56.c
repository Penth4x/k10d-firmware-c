/* @k10d read_two_shorts_and_store_10395f56 @ 0x10395f56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_shorts_and_store_10395f56(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  
  uStack_20 = uRam8001a0a0;
  uStack_1c = uRam8001a0a4;
  uStack_18 = uRam8001a0a8;
  copy_two_words_from_param2((int)auStack_28,-0x7ffe5f80);
  uVar1 = return_first_word_1045c514(auStack_28);
  uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,-0x7ffe5f80);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_four_words_and_call_callback_1039b830(param_1 + 8,&uStack_20);
  return;
}
