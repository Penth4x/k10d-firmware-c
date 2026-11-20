/* @k10d init_object_with_heap_buffer_104e4f44 @ 0x104e4f44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Populates an object struct with pointers from global getters and allocates a 0x4c-byte
 *   heap buffer.
 * summary:
 *   The function initializes a structure at param_1 by copying values from several global
 *   accessor functions into offsets 0x4c, 0x70, 0x78, and 0x50. It allocates a 0x4c-byte
 *   heap block, initializes it via allocate_and_zero_struct_104e43a4, and stores the
 *   pointer at offset 0x74. Finally, it calls a function at 0x104e4422 with the new buffer
 *   and other struct fields, and calls allocate_and_link_buffer_chain on the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_buffer_104e4f44(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_create_sram_object_104816ee();
  *(uint32_t *)((int)param_1 + 0x4c) = *(uint32_t *)(iVar1 + 0xc);
  iVar1 = get_or_create_sram_object_10478100();
  *(uint32_t *)((int)param_1 + 0x70) = *(uint32_t *)(iVar1 + 0xc);
  iVar1 = get_or_create_sram_object_104a79b2();
  *(uint32_t *)((int)param_1 + 0x78) = *(uint32_t *)(iVar1 + 4);
  uVar2 = get_or_init_sram_buffer_10478858();
  *(uint32_t *)((int)param_1 + 0x50) = uVar2;
  puRam80010bb8 = (uint8_t *)forward_second_field_call(*(void **)((int)param_1 + 0x4c));
  iVar1 = alloc_and_init_0x3c_object((void *)0x0);
  *(int *)((int)param_1 + 0x7c) = iVar1;
  iVar1 = heap_alloc((void *)0x4c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    allocate_and_zero_struct_104e43a4((uint32_t *)(iVar1));
  }
  *(int *)((int)param_1 + 0x74) = iVar1;
  (*(code *)0x104e4422/*ROM*/)
            (iVar1,*(uint32_t *)((int)param_1 + 0x4c),*(uint32_t *)((int)param_1 + 0x78));
  if (*(uint8_t **)((int)param_1 + 0x7c) != (uint8_t *)0x0) {
    copy_if_flag_set(*(uint8_t **)((int)param_1 + 0x7c),puRam80010bb8);
  }
  allocate_and_link_buffer_chain((int)param_1);
  return;
}
