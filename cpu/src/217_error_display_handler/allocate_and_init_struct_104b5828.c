/* @k10d allocate_and_init_struct_104b5828 @ 0x104b5828
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xa4-byte structure, zero-initializes its fields, and populates it with
 *   data from two string sources.
 * summary:
 *   The function allocates a 0xa4-byte block from the heap if param_1 is NULL. It
 *   initializes the first field from a global pointer (via get_or_create_camera_object) and
 *   zero-fills two 15-byte arrays at offsets 0x04 and 0x54. It then calls
 *   format_string_to_buffer_10545140 twice to copy data from static strings at 0x105b87dc
 *   and 0x105b87ec into the structure, using a context object managed by
 *   heap_alloc_one_byte_1045926e/9a/82. The role of the specific data being copied is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_struct_104b5828(uint32_t *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint32_t *puVar4;
  uintptr_t sp;
  uint8_t uStack_9;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa4), param_1 != (uint32_t *)0x0)) {
    heap_alloc_one_byte_1045926e((int)&uStack_9);
    iVar2 = get_or_create_camera_object();
    iVar1 = 0;
    *param_1 = *(uint32_t *)(iVar2 + 0xc);
    iVar2 = 0xf;
    puVar4 = param_1 + 1;
    do {
      *(uint8_t *)(iVar1 + (int)puVar4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x54) = 0;
      *(uint8_t *)(iVar1 + 1 + (int)puVar4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x55) = 0;
      *(uint8_t *)(iVar1 + 2 + (int)puVar4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x56) = 0;
      *(uint8_t *)(iVar1 + 3 + (int)puVar4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x57) = 0;
      *(uint8_t *)(iVar1 + 4 + (int)puVar4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x58) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 5;
    } while (-1 < iVar2);
    pvVar3 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
    format_string_to_buffer_10545140((uint8_t *)puVar4,(char *)0x105b87dc/*ROM*/,pvVar3,param_4);
    pvVar3 = (void *)get_kernel_object_id((uint32_t)(&uStack_9));
    format_string_to_buffer_10545140((uint8_t *)(param_1 + 0x15),(char *)0x105b87ec/*ROM*/,pvVar3,param_4);
    heap_free_if_flagged(&uStack_9,2);
  }
  return param_1;
}
