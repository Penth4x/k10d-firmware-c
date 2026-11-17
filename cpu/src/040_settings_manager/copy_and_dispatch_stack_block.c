/* @k10d copy_and_dispatch_stack_block @ 0x103944b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 16-byte stack block to a local buffer, calls a helper with it, then dispatches
 *   two values from a second object to a fixed SDRAM address.
 * summary:
 *   The function initializes a local object via alloc_and_zero_two_words_1045c3bc,
 *   retrieves a pointer from get_or_init_sram_block_1052b6fc, and passes it to
 *   init_object_with_two_ids_1052b824. It then copies 16 bytes from a stack location
 *   (offset 0xffffffdc) into a local array and calls free_heap_if_flagged_1045c402 with
 *   that array and the constant 2. Finally, it extracts two values from the first object
 *   using return_first_word_1045c514 and read_struct_field_at_offset_4, and passes them
 *   along with the fixed address 0x8001a4a8 to write_two_words_to_memory. The specific
 *   subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_and_dispatch_stack_block(void)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t auStack_20 [4];
  uint32_t auStack_1c [5];
  int iVar6;
  
  puVar4 = auStack_1c + 1;
  alloc_and_zero_two_words_1045c3bc(puVar4);
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  init_object_with_two_ids_1052b824(auStack_20,puVar1);
  iVar6 = 8;
  do {
    iVar5 = iVar6 + -4;
    *(uint32_t *)((int)auStack_1c + iVar6) = *(uint32_t *)(&stack0xffffffdc + iVar6);
    iVar6 = iVar5;
  } while (iVar5 != 0);
  free_heap_if_flagged_1045c402(auStack_20,2);
  uVar2 = return_first_word_1045c514(puVar4);
  uVar3 = read_struct_field_at_offset_4(puVar4);
  write_two_words_to_memory((void *)0x8001a4a8/*SDRAM*/,uVar2,uVar3);
  free_heap_if_flagged_1045c402(puVar4,2);
  return;
}
