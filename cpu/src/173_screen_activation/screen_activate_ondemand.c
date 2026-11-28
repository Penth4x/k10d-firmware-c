/* @k10d screen_activate_ondemand @ 0x10480566
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed lazy_activate_screen_entry)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block, builds and activates a screen object via vtable calls, and
 *   stores the result or an error code in the container.
 * summary:
 *   The function retrieves a block from the system heap and looks up an entry using
 *   lookup_table_entry_by_index_10482026. It invokes virtual methods at offsets 0x1c and
 *   0x3c to build and activate the object. On success, it initializes a sub-object via
 *   compute_byte_offset_from_index and registers it with
 *   process_buffer_state_transition_1053f676; on failure, it sets the container's status
 *   field to 0xfffffcae or 0xfffffffb. Finally, it releases the heap block and returns a
 *   boolean indicating success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool screen_activate_ondemand(void *container,void *screen_ctx)

{
  bool bVar1;
  void *block;
  int obj;
  int vret;
  uint32_t le_word;
  void *heap;
  uint32_t sub_obj;
  uint8_t zero_buf [8];
  uint8_t le_buf [8];

  block = (void *)get_system_heap();
  block = (void *)mempool_get_block(block,&DAT_00000200,2);
  obj = lookup_table_entry_by_index_10482026((void*)(_DAT_80010030/*SDRAM*/));
  bVar1 = true;
  vret = (((vtbl_entry*)(*(int *)(obj + 4)))[3].fn)
                 (((vtbl_entry*)(*(int *)(obj + 4)))[3].adj + obj,0);
  if ((vret != 0) &&
     (vret = (((vtbl_entry*)(*(int *)(obj + 4)))[7].fn)
                    (((vtbl_entry*)(*(int *)(obj + 4)))[7].adj + obj,0,1,block), vret != 0)) {
    bVar1 = false;
    alloc_and_store_pointer(&sub_obj,block);
    alloc_and_zero_16_bytes_1047f12a(zero_buf);
    vret = scan_buffer_for_termination(&sub_obj,zero_buf);
    if (vret == 0) {
      vret = compute_byte_offset_from_index(container,screen_ctx);
      *(uint32_t *)(vret + 4) = 0;
    }
    else {
      vret = compute_byte_offset_from_index(container,screen_ctx);
      le_word = read_little_endian_word_1047f216(zero_buf,le_buf);
      *(uint32_t *)(vret + 4) = le_word;
    }
    vret = process_buffer_state_transition_1053f676(screen_ctx,(void *)((int)container + 0xc),vret);
    *(int *)((int)container + 4) = vret;
    free_heap_block_if_flagged_1047f182(zero_buf,2);
    free_heap_if_flag_set_1047f3b6(&sub_obj,2);
  }
  if (bVar1) {
    obj = (((vtbl_entry*)(*(int *)(obj + 4)))[12].fn)(((vtbl_entry*)(*(int *)(obj + 4)))[12].adj + obj)
    ;
    if (obj == 5) {
      *(uint32_t *)((int)container + 4) = 0xfffffcae;
    }
    else {
      *(uint32_t *)((int)container + 4) = 0xfffffffb;
    }
  }
  heap = (void *)get_system_heap();
  mempool_release_block(heap,block);
  if (*(int *)((int)container + 4) == 0) {
    store_result_and_check_zero_1048044a((int)container,screen_ctx,5000);
  }
  return *(int *)((int)container + 4) == 0;
}
