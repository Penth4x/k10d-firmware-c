/* @k10d copy_fields_into_linked_object @ 0x104ea372
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Copies three fields from param_1 into an object obtained via
 *   get_or_create_sram_object_1039fa94 and stores the pointer at param_1+0x14.
 * summary:
 *   Calls get_or_create_sram_object_1039fa94 to get a base pointer, dereferences offset +4
 *   to get a target object, and stores that target at param_1+0x14. It then copies the
 *   value at param_1+0x18 into target+0x9c, param_1+0xc into target+0x2c, and param_1+0x10
 *   into target+0x30. The caller is a virtual method slot 3 of cls_1059c10c, but the
 *   specific camera subsystem is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_fields_into_linked_object(void *param_1)

{
  int iVar1;
  
  iVar1 = get_or_create_sram_object_1039fa94();
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)((int)param_1 + 0x14) = iVar1;
  *(uint32_t *)(iVar1 + 0x9c) = *(uint32_t *)((int)param_1 + 0x18);
  *(uint32_t *)(*(int *)((int)param_1 + 0x14) + 0x2c) = *(uint32_t *)((int)param_1 + 0xc);
  *(uint32_t *)(*(int *)((int)param_1 + 0x14) + 0x30) = *(uint32_t *)((int)param_1 + 0x10);
  return;
}
