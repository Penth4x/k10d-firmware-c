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

uint32_t init_object_with_four_heap_blocks(cls_105d5584 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  alloc_pool_and_init_task((int *)&param_1->field_0xc,0x10,0x1000,4);
  wait_flg_obj(&param_1->field_0x68,0);
  forward_three_args_to_helper_10459d64(&param_1->field_0x60,1,0x1f);
  *(void ***)(param_1->field_0x28 + 0x6c) = &param_1->field_0x4;
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0xe1180,0);
  param_1->field_0x5c = uVar2;
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  param_1->field_0x70 = (uintptr_t)(pvVar1);
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  param_1->field_0x74 = (uintptr_t)(pvVar1);
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  param_1->field_0x78 = (uintptr_t)(pvVar1);
  pvVar1 = (void *)heap_alloc((void *)0x142);
  if (pvVar1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    init_0x142_byte_buffer(pvVar1);
  }
  param_1->field_0x7c = (uintptr_t)(pvVar1);
  *(uint16_t *)((int)pvVar1 + 0x140) = 1;
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(0),(uint16_t)(2),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(1),(uint16_t)(8),(uint16_t)(6));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(2),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(3),(uint16_t)(0xb),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(4),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(5),(uint16_t)(0xc),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(6),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(7),(uint16_t)(1),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(8),(uint16_t)(0xf),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(9),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(10),(uint16_t)(1),(uint16_t)(0xc));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(0xb),(uint16_t)(0x14),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x7c),(int)(0xc),(uint16_t)(0x13),(uint16_t)(0));
  *(uint16_t *)((int)param_1->field_0x74 + 0x140) = 1;
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(0),(uint16_t)(2),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(1),(uint16_t)(8),(uint16_t)(6));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(2),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(3),(uint16_t)(0xb),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(4),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(5),(uint16_t)(1),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(6),(uint16_t)(0x14),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x74),(int)(7),(uint16_t)(0x13),(uint16_t)(0));
  *(uint16_t *)((int)param_1->field_0x78 + 0x140) = 1;
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0),(uint16_t)(2),(uint16_t)(1));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(1),(uint16_t)(0x1b),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(2),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(3),(uint16_t)(2),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(4),(uint16_t)(8),(uint16_t)(6));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(5),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(6),(uint16_t)(0xb),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(7),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(8),(uint16_t)(0xc),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(9),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(10),(uint16_t)(1),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0xb),(uint16_t)(1),(uint16_t)(1));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0xc),(uint16_t)(0xf),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0xd),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0xe),(uint16_t)(1),(uint16_t)(0xc));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0xf),(uint16_t)(0x14),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x78),(int)(0x10),(uint16_t)(0x13),(uint16_t)(0));
  *(uint16_t *)((int)param_1->field_0x70 + 0x140) = 1;
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(0),(uint16_t)(2),(uint16_t)(1));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(1),(uint16_t)(0x1b),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(2),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(3),(uint16_t)(2),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(4),(uint16_t)(8),(uint16_t)(6));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(5),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(6),(uint16_t)(0xb),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(7),(uint16_t)(0x13),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(8),(uint16_t)(1),(uint16_t)(2));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(9),(uint16_t)(1),(uint16_t)(1));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(10),(uint16_t)(0x14),(uint16_t)(0));
  write_two_words_to_struct_10513bca((void *)(param_1->field_0x70),(int)(0xb),(uint16_t)(0x13),(uint16_t)(0));
  return 1;
}
