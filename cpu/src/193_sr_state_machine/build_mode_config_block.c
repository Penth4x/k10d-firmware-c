/* @k10d build_mode_config_block @ 0x1048fad4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Constructs a 16-byte configuration structure on the stack based on a mode byte and
 *   copies it to the destination pointer.
 * summary:
 *   The function initializes a local 16-byte structure using several helper routines
 *   (allocate_and_init_widget, alloc_and_zero_two_words_1045bc0e,
 *   alloc_and_zero_two_words_1045c3bc). It reads a byte from param_2+0x34 to select
 *   specific parameters (0x280/0x1e0 or 0x500/0x2f8) which are passed to
 *   write_two_words_to_memory. Finally, it copies the resulting 16-byte block from the
 *   stack to the memory location pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_mode_config_block(void *dest_ptr,void *mode_ptr)

{
  char mode_byte;
  uint32_t width_val;
  uint32_t height_val;
  int loop_off;
  int loop_cnt;
  uint32_t ***cfg_block [9];
  uint8_t buf_a [8];
  uint8_t buf_b [8];

  cfg_block[0] = cfg_block + 5;
  allocate_and_init_widget(cfg_block[0]);
  alloc_and_zero_two_words_1045bc0e(buf_a);
  alloc_and_zero_two_words_1045c3bc(buf_b);
  store_two_words_to_memory(buf_a,0,0);
  copy_eight_bytes_1045bf68(cfg_block[0],buf_a);
  mode_byte = *(char *)((int)mode_ptr + 0x34);
  if ((mode_byte == '\0') || (mode_byte == '\x01')) {
    width_val = 0x280;
    height_val = 0x1e0;
  }
  else if (mode_byte == '\x02') {
    width_val = 0x500;
    height_val = 0x2f8;
  }
  else {
    width_val = 0;
    height_val = 0;
  }
  write_two_words_to_memory(buf_b,width_val,height_val);
  copy_and_dispatch_two_params(cfg_block[0],buf_b);
  loop_cnt = 0x10;
  do {
    loop_off = loop_cnt + -4;
    *(uint32_t *)((int)cfg_block + loop_cnt) = *(uint32_t *)((int)cfg_block + loop_cnt + 0x10)
    ;
    loop_cnt = loop_off;
  } while (loop_off != 0);
  free_heap_if_flagged_1045c402(buf_b,2);
  free_heap_block_if_flagged_1045bc54(buf_a,2);
  destroy_text_widget(cfg_block[0],2);
  loop_cnt = 0x10;
  do {
    loop_off = loop_cnt + -4;
    *(uint32_t *)(loop_off + (int)dest_ptr) = *(uint32_t *)((int)cfg_block + loop_cnt);
    loop_cnt = loop_off;
  } while (loop_off != 0);
  return;
}
