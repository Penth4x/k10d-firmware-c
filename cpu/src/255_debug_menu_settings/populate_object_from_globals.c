/* @k10d populate_object_from_globals @ 0x104ef938
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Fills a 0x4c-byte object structure with values retrieved from several global state
 *   accessors.
 * summary:
 *   The function writes multiple 32-bit values into the object pointed to by param_1 at
 *   offsets 0xc through 0x44. It retrieves these values by calling
 *   initialize_singleton_object_1045d6a0 (five times),
 *   get_or_create_singleton_object_104bb22a, get_or_create_singleton_object_10485138,
 *   get_or_create_camera_object, and get_or_init_heap_block. It also calls wait_flg_obj to
 *   initialize a sub-structure at offset 0x28 with a zero argument. The function returns 1
 *   upon completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_object_from_globals(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 8) = *(uint32_t *)(iVar1 + 0x1c);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x10) = *(uint32_t *)(iVar1 + 8);
  iVar1 = get_or_create_singleton_object_104bb22a();
  *(uint32_t *)((int)param_1 + 0x20) = *(uint32_t *)(iVar1 + 4);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x14) = *(uint32_t *)(iVar1 + 0xc);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x18) = *(uint32_t *)(iVar1 + 0x14);
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)((int)param_1 + 0x1c) = *(uint32_t *)(iVar1 + 0x20);
  iVar1 = get_or_create_singleton_object_10485138();
  *(uint32_t *)((int)param_1 + 0xc) = *(uint32_t *)(iVar1 + 8);
  iVar1 = get_or_create_camera_object();
  *(uint32_t *)((int)param_1 + 0x30) = *(uint32_t *)(iVar1 + 4);
  uVar2 = get_or_init_heap_block();
  *(uint32_t *)((int)param_1 + 0x44) = uVar2;
  wait_flg_obj((void *)((int)param_1 + 0x28),0);
  return 1;
}
