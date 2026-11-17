/* @k10d copy_buffer_to_new_heap_block @ 0x104a6628
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a new heap buffer, copies a source buffer into it, and passes the copy to a
 *   downstream handler.
 * summary:
 *   Checks a length field at offset 0x4e8 in a sub-object of param_1. If non-zero,
 *   allocates a new buffer of that length plus 2 bytes via heap_alloc_2. Calls
 *   write_two_byte_value_104a7246 to initialize the buffer, then performs a backward byte-
 *   wise copy of the source data into the new buffer. Finally, calls
 *   copy_bytes_to_struct_field with param_2 and the new buffer, and frees the buffer via
 *   heap_free_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_to_new_heap_block(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x4e8) != 0) {
    pvVar3 = (void *)heap_alloc_2(*(int *)(*(int *)(param_1 + 0x58) + 0x4ec) + 2);
    write_two_byte_value_104a7246(param_1,pvVar3,1,1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x58) + 0x4e8);
    iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x4ec);
    while (iVar1 != 0) {
      *(uint8_t *)((int)pvVar3 + iVar1 + 1) = *(uint8_t *)(iVar1 + -1 + iVar2);
      iVar1 = iVar1 + -1;
    }
    copy_bytes_to_struct_field(param_2,pvVar3,*(uint32_t *)(param_2 + 4));
    heap_free_2((int)pvVar3);
  }
  return;
}
