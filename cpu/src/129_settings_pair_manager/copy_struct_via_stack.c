/* @k10d copy_struct_via_stack @ 0x1045bffe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies an 8-byte structure from param_2 to param_1 using stack temporaries and helper
 *   calls.
 * summary:
 *   The function initializes a stack buffer via alloc_two_word_pair_1045c3dc, processes
 *   param_2 into a local variable via copy_four_words_from_source_1045bfe8, and combines
 *   them with add_two_structs_into_param1. It then performs a series of 4-byte memory moves
 *   to transfer data from the stack to param_1, calling free_heap_if_flagged_1045c402 on
 *   the intermediate buffers. The specific data semantics are unclear as the callees are
 *   unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_via_stack(void *dest,void *src)

{
  int *alloc_dst;
  int loop_off;
  int loop_cnt;
  uint8_t tmp_buf [8];
  int pair_buf [2];
  int work_buf [11];

  alloc_dst = work_buf + 5;
  alloc_two_word_pair_1045c3dc((uint32_t *)alloc_dst,1,1);
  copy_four_words_from_source_1045bfe8(pair_buf,src);
  add_two_structs_into_param1(tmp_buf,pair_buf,alloc_dst);
  loop_cnt = 8;
  do {
    loop_off = loop_cnt + -4;
    *(uint32_t *)((int)work_buf + loop_cnt) = *(uint32_t *)((int)work_buf + loop_cnt + -0x10);
    loop_cnt = loop_off;
  } while (loop_off != 0);
  free_heap_if_flagged_1045c402(tmp_buf,2);
  free_heap_if_flagged_1045c402(pair_buf,2);
  loop_cnt = 8;
  do {
    loop_off = loop_cnt + -4;
    *(uint32_t *)((int)work_buf + loop_cnt + 8) = *(uint32_t *)((int)work_buf + loop_cnt);
    loop_cnt = loop_off;
  } while (loop_off != 0);
  free_heap_if_flagged_1045c402(alloc_dst,2);
  loop_cnt = 8;
  do {
    loop_off = loop_cnt + -4;
    *(uint32_t *)(loop_off + (int)dest) = *(uint32_t *)((int)work_buf + loop_cnt + 8);
    loop_cnt = loop_off;
  } while (loop_off != 0);
  return;
}
