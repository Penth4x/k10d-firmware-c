/* @k10d kernel_alloc_pool_block @ 0x10010138
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from a specific kernel memory pool by searching its free list.
 * summary:
 *   Validates pool index and block count, then iterates through the pool's free list
 *   (linked via pointers at offset -0x1c) to find a suitable block. Calls
 *   allocate_heap_block_1000e82c to perform the actual allocation or split operation.
 *   Returns 0 on success or a negative error code (e.g., 0xffffffee for invalid pool,
 *   0xffffffef for invalid size).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t kernel_alloc_pool_block(int pool_index, void *block_size, uint32_t *out_block_ptr)

{
  int pool_state;
  int block_size_field;
  uint32_t ret_code;
  int pool_entry;
  int *free_node;

  if ((pool_index < 1) || (DAT_10011d3a/*ROM*/ < pool_index)) {
    ret_code = E_ID;
  }
  else if ((int)block_size < 1) {
    ret_code = E_PAR;
  }
  else {
    pool_entry = DAT_10011cf8/*ROM*/ + pool_index * 0x20;
    pool_state = (int)*(short *)(pool_entry + -0x20);
    if (pool_state == -2) {
      ret_code = E_NOEXS;
    }
    else if (*(void **)(pool_entry + -0x10) < block_size) {
      ret_code = E_PAR;
    }
    else {
      free_node = *(int **)(pool_entry + -0x1c);
      block_size_field = *(int *)(pool_entry + -0xc);
      if ((pool_state == -1) ||
         ((*(short *)(pool_entry + -0x14) == 1 &&
          (*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00) < *(short *)(pool_state * 0x44 + 0x6a001c00)))))
      {
        for (; free_node != (int *)(pool_entry + -0x1c); free_node = (int *)*free_node) {
          pool_state = allocate_heap_block_1000e82c(out_block_ptr, free_node,
                        ((int)block_size + block_size_field + -1) / block_size_field, pool_index);
          if (pool_state == 1) {
            return 0;
          }
        }
      }
      ret_code = E_TMOUT;
    }
  }
  return ret_code;
}
