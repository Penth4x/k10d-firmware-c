/* @k10d draw_string_at @ 0x10495f96
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_text_render_context)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x40-byte text rendering object, passing a prepared
 *   parameter to its virtual slot 2.
 * summary:
 *   The function allocates 0x40 bytes from the heap and calls a constructor
 *   (cls_105b43cc_new). It then uses alloc_two_word_pair_1045bc2e to process param_3 and
 *   param_4 into a local stack variable, which is passed as an argument to a virtual
 *   function call (slot 2) on the newly allocated object. Finally, it calls glyph_draw with
 *   the object and param_2, likely to set the string content, before returning the object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int draw_string_at(void *param_1,byte *param_2,void *param_3,void *param_4)

{
  short sVar1;
  cls_105b43cc *pcVar2;
  uint32_t uVar3;
  void *puVar4;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar2 = (cls_105b43cc *)heap_alloc((void *)0x40);
  if (pcVar2 == (cls_105b43cc *)0x0) {
    pcVar2 = (cls_105b43cc *)0x0;
  }
  else {
    cls_105b43cc_new(pcVar2);
  }
  puVar4 = (void *)((uintptr_t)(pcVar2->field_0xc));
  sVar1 = *(short *)((char*)puVar4 + 0x10);
  uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e((uint32_t *)(auStack_10),(uint32_t)(param_3),(uint32_t)(param_4)));
  (((vtbl_entry*)(puVar4))[2].fn)((int)&pcVar2->field_0x0 + (int)sVar1,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  glyph_draw(pcVar2,param_2);
  return (int)pcVar2;
}
