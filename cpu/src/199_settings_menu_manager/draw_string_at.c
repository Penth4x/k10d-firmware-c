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
  void *pvVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pvVar2 = (void *)heap_alloc((void *)0x40);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    cls_105b43cc_new(pvVar2);
  }
  iVar4 = *(int *)((int)pvVar2 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,(int)param_3,(int)param_4);
  (**(code **)(iVar4 + 0x14))((int)sVar1 + (int)pvVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  glyph_draw(pvVar2,param_2);
  return (int)pvVar2;
}
