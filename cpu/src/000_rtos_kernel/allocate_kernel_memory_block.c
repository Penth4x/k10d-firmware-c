/* @k10d allocate_kernel_memory_block @ 0x1000dbd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_kernel_memory_block(uint param_1,uint32_t *param_2)

{
  bool block_found;
  int size_class_idx;
  int size_class_shift;
  uint32_t alloc_result;
  int *free_list_node;
  uint *node_size_field;
  uint node_byte_size;
  uint remainder_bytes;
  uint aligned_size;
  uint *alloc_ptr;

  /* Align the requested size up to a 4-byte boundary (minimum 12). */
  if (param_1 < 0xd) {
    aligned_size = 0xc;
  }
  else {
    aligned_size = param_1 + 3 & 0xfffffffc;
  }

  block_found = false;
  size_class_idx = 0;
  size_class_shift = 0;

  /* Find the smallest size class (32 << shift) that fits the request. */
  do {
    if (aligned_size < (uint)(0x20 << ((byte)size_class_shift & 0xf))) break;
    size_class_shift = size_class_shift + 3;
    size_class_idx = size_class_idx + 1;
  } while (size_class_shift < 0xf);

  /* Search free lists for size classes 0..5 for a block large enough. */
  if (size_class_idx < 6) {
    size_class_shift = size_class_idx << 3;
    do {
      free_list_node = *(int **)(size_class_shift + 0x6a000000);
      if (free_list_node != (int *)(size_class_shift + 0x6a000000)) {
        do {
          node_size_field = (uint *)(free_list_node + -1);
          node_byte_size = *node_size_field * 4;
          if (aligned_size <= node_byte_size) {
            block_found = true;
            break;
          }
          free_list_node = (int *)*free_list_node;
        } while (free_list_node != (int *)(size_class_shift + 0x6a000000));
      }
      if (block_found) break;
      size_class_idx = size_class_idx + 1;
      size_class_shift = size_class_shift + 8;
    } while (size_class_idx < 6);
  }

  if (block_found) {
    if (node_byte_size < aligned_size + 0x10) {
      /* Block too small to split: use the entire block. */
      link_node_into_list(free_list_node);
      *node_size_field = *node_size_field | 0x80000000/*SDRAM*/;
      aligned_size = node_byte_size;
      alloc_ptr = node_size_field;
    }
    else {
      /* Split: carve off the requested portion, keep the remainder free. */
      remainder_bytes = node_byte_size - (aligned_size + 4);
      alloc_ptr = (uint *)((int)free_list_node + remainder_bytes);
      *alloc_ptr = aligned_size >> 2 | 0x80000000/*SDRAM*/;
      *node_size_field = remainder_bytes >> 2 | 0x40000000;
      alloc_ptr[-1] = (uint)free_list_node;
      if ((0 < size_class_idx) && (remainder_bytes < (uint)(0x20 << (((char)size_class_idx + -1) * '\x03' & 0xfU)))) {
        link_node_into_list(free_list_node);
        insert_into_timeout_queue_1000fc34(free_list_node,remainder_bytes);
      }
    }
    /* Mark the block header as in-use (OR in 0x40000000). */
    alloc_ptr = alloc_ptr + 1;
    *(uint *)(aligned_size + (int)alloc_ptr) = *(uint *)(aligned_size + (int)alloc_ptr) | 0x40000000;
    alloc_result = 1;
    *param_2 = (uintptr_t)(alloc_ptr);
  }
  else {
    alloc_result = 0;
  }
  return alloc_result;
}
