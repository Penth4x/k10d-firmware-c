/* @k10d create_and_configure_object_1047c406 @ 0x1047c406
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Creates a cls_105aaebc object, configures it via virtual calls, and conditionally
 *   registers it.
 * summary:
 *   Checks a condition via allocate_and_init_buffer_1047a5b8 on a field at offset 0x54. If
 *   true, allocates a cls_105aaebc object on the stack, calls virtual slots 2, 4, 3, and 1
 *   in sequence. Conditionally calls call_helper_with_second_field_1047a6ac if
 *   call_helper_with_offset_c_10477f30 returns non-zero on field 0x50. The object is then
 *   destroyed via the virtual destructor call (slot 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_and_configure_object_1047c406(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  
  iVar1 = allocate_and_init_buffer_1047a5b8(*(uint32_t *)((int)param_1 + 0x54));
  if (iVar1 != 0) {
    cls_105aaebc_new((cls_105aaebc *)&stack0xffffffe8);
    allocate_pool_block_if_null((cls_105aaebc *)&stack0xffffffe8,2,(void *)0x3e8);
    release_object_if_allocated_1047e45e((cls_105aaebc *)&stack0xffffffe8);
    iVar1 = call_helper_with_offset_c_10477f30(*(int *)((int)param_1 + 0x50));
    if (iVar1 != 0) {
      call_helper_with_second_field_1047a6ac((int)(*(uint32_t *)((int)param_1 + 0x54)),(uint32_t)((cls_105aaebc *)&stack0xffffffe8));
    }
    release_heap_block_if_set((cls_105aaebc *)&stack0xffffffe8);
    cls_105aaebc_delete((cls_105aaebc *)&stack0xffffffe8,2);
  }
  return;
}
