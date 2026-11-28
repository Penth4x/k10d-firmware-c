/* @k10d destroy_text_widget @ 0x1045bea0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Destroys a text widget by releasing its string buffer and optionally freeing the widget
 *   object.
 * summary:
 *   Takes a widget pointer and a flag. If the pointer is non-null, it calls
 *   free_heap_if_flagged_1045c402 on the member at offset 8 (likely the string buffer) and
 *   free_heap_block_if_flagged_1045bc54 on the widget itself. If the low bit of the second
 *   parameter is set, it frees the widget object via heap_free. The caller
 *   text_widget_layout suggests this is part of the UI widget lifecycle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_text_widget(void *widget,uint flags)

{
  if (widget != 0) {
    free_heap_if_flagged_1045c402((void *)((int)widget + 8),2);
    free_heap_block_if_flagged_1045bc54(widget,2);
    if ((flags & 1) != 0) {
      heap_free((int)widget);
    }
  }
  return;
}
