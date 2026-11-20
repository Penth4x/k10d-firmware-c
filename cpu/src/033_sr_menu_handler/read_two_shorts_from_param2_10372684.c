/* @k10d read_two_shorts_from_param2_10372684 @ 0x10372684
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Conditionally reads two 16-bit values from a structure at param_2 and passes them to a
 *   helper.
 * summary:
 *   Checks if the byte at offset 0x210 in param_2 is non-zero. If so, it copies three
 *   32-bit words from offsets 0x20-0x28 of param_2 to the stack, then calls
 *   copy_two_words_from_param2 and return_first_word_1045c514/read_struct_field_at_offset_4
 *   to extract two 16-bit values into local variables. Finally, it calls
 *   copy_buffer_and_dispatch_event_10404858 with param_1+0x20, the boolean flag, and the
 *   stack data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_shorts_from_param2_10372684(void *param_1,void *param_2)

{
  uint32_t uVar1;
  uintptr_t sp;
  bool bVar2;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  bVar2 = *(char *)((int)param_2 + 0x210) != '\0';
  if (bVar2) {
    uStack_28 = *(uint32_t *)((int)param_2 + 0x20);
    uStack_24 = *(uint32_t *)((int)param_2 + 0x24);
    uStack_20 = *(uint32_t *)((int)param_2 + 0x28);
    copy_two_words_from_param2((int)auStack_18,(int)param_2);
    uVar1 = return_first_word_1045c514(auStack_18);
    uStack_1c = (short)uVar1;
    free_heap_if_flagged_1045c402(auStack_18,2);
    copy_two_words_from_param2((int)auStack_18,(int)param_2);
    uVar1 = read_struct_field_at_offset_4(auStack_18);
    uStack_1a = (short)uVar1;
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  copy_buffer_and_dispatch_event_10404858((cls_10598538 *)((int)param_1 + 0x20),(uint)bVar2,&uStack_28);
  return;
}
