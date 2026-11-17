/* @k10d init_object_with_four_heap_blocks @ 0x1050b150
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by allocating four 0x142-byte heap blocks and configuring their
 *   internal parameters.
 * summary:
 *   The function initializes the object at param_1 by calling helper functions on sub-
 *   structures at offsets 0xc, 0x68, and 0x60. It allocates a memory pool block and stores
 *   it at offset 0x5c. It then allocates four 0x142-byte heap blocks, initializes each with
 *   init_0x142_byte_buffer, and stores them at offsets 0x70, 0x74, 0x78, and 0x7c. Finally,
 *   it configures each block by setting a flag at offset 0x140 and calling
 *   write_two_words_to_struct_10513bca with specific index and parameter values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_four_heap_blocks(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  alloc_pool_and_init_task((int *)((int)param_1 + 0xc),0x10,0x1000,4);
  wait_flg_obj((void *)((int)param_1 + 0x68),0);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x60),1,0x1f);
  *(int *)(*(int *)((int)param_1 + 0x28) + 0x6c) = (int)param_1 + 4;
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0xe1180,0);
  *(uint32_t *)((int)param_1 + 0x5c) = uVar2;
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  *(void **)((int)param_1 + 0x70) = pvVar1;
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  *(void **)((int)param_1 + 0x74) = pvVar1;
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  *(void **)((int)param_1 + 0x78) = pvVar1;
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  *(void **)((int)param_1 + 0x7c) = pvVar1;
  *(uint16_t *)((int)pvVar1 + 0x140) = 1;
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),0,2,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),1,8,6);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),2,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),3,0xb,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),4,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),5,0xc,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),6,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),7,1,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),8,0xf,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),9,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),10,1,0xc);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),0xb,0x14,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x7c),0xc,0x13,0);
  *(uint16_t *)(*(int *)((int)param_1 + 0x74) + 0x140) = 1;
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),0,2,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),1,8,6);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),2,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),3,0xb,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),4,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),5,1,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),6,0x14,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x74),7,0x13,0);
  *(uint16_t *)(*(int *)((int)param_1 + 0x78) + 0x140) = 1;
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0,2,1);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),1,0x1b,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),2,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),3,2,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),4,8,6);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),5,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),6,0xb,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),7,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),8,0xc,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),9,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),10,1,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0xb,1,1);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0xc,0xf,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0xd,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0xe,1,0xc);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0xf,0x14,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x78),0x10,0x13,0);
  *(uint16_t *)(*(int *)((int)param_1 + 0x70) + 0x140) = 1;
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),0,2,1);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),1,0x1b,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),2,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),3,2,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),4,8,6);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),5,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),6,0xb,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),7,0x13,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),8,1,2);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),9,1,1);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),10,0x14,0);
  write_two_words_to_struct_10513bca(*(void **)((int)param_1 + 0x70),0xb,0x13,0);
  return 1;
}
