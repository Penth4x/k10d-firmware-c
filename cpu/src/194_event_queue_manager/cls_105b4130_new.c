/* @k10d cls_105b4130_new @ 0x10491828
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105b4130; returns param_1)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4130 (vtable 0x105b4130, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105b4130; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b4104 * cls_105b4130_new(cls_105b4130 *self)

{
  uint32_t *sram_block;
  void     *heap_base;
  int       copy_off;
  uint32_t  block_ptr;
  int       next_off;
  uint8_t   local_18[16];

  if ((self != (cls_105b4130 *)0x0) ||
     (self = (cls_105b4130 *)heap_alloc((void *)0x1c), self != (cls_105b4130 *)0x0)) {
    cls_105b4104_new((cls_105b4104 *)self);
    ((cls_105b4104 *)self)->field_0x18 = (uintptr_t)(&DAT_105b4130/*ROM*/);
    sram_block = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_two_ids_1052b824(local_18, sram_block);
    /* copy 8 bytes from (sram_block - 16) into self->field_0x10..field_0x14 */
    copy_off = 8;
    do {
      next_off = copy_off + -4;
      *(uint32_t *)(next_off + (int)&((cls_105b4104 *)self)->field_0x10)
        = *(uint32_t *)(&stack0xffffffe4 + copy_off);
      copy_off = next_off;
    } while (next_off != 0);
    free_heap_if_flagged_1045c402(local_18, 2);
    heap_base = (void *)get_system_heap();
    {
      int w0 = return_first_word_1045c514(sram_block);
      int w1 = read_struct_field_at_offset_4(sram_block);
      block_ptr = mempool_get_block(heap_base, (void *)(w0 * w1 * 2), 0);
    }
    ((cls_105b4104 *)self)->field_0x0 = block_ptr;
    heap_base = (void *)get_system_heap();
    {
      int w0 = return_first_word_1045c514(sram_block);
      int w1 = read_struct_field_at_offset_4(sram_block);
      block_ptr = mempool_get_block(heap_base, (void *)(w0 * w1 * 2), 0);
    }
    ((cls_105b4104 *)self)->field_0x4 = block_ptr;
    heap_base = (void *)get_system_heap();
    {
      int w0 = return_first_word_1045c514(sram_block);
      int w1 = read_struct_field_at_offset_4(sram_block);
      block_ptr = mempool_get_block(heap_base, (void *)(w0 * w1 * 2), 0);
    }
    ((cls_105b4104 *)self)->field_0x8 = block_ptr;
  }
  return (cls_105b4104 *)self;
}
