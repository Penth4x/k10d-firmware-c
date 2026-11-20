/* @k10d init_object_with_three_pointers @ 0x104b4946
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting up internal pointers and calling helper functions to
 *   populate fields.
 * summary:
 *   The function calls alloc_pool_and_init_task to initialize a sub-structure at offset
 *   0x1c, then calls wait_flg_obj to zero out a field at offset 0x64. It retrieves three
 *   values from get_or_init_sram_buffer_104b7278, get_or_init_ram_buffer_104b590a, and
 *   get_or_init_sram_buffer_104b55a6, storing them at offsets 0x58, 0x5c, and 0x60
 *   respectively. Finally, it calls create_kernel_object and create_message_box_104594ea to
 *   complete the initialization, returning 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105b8354": ignoring overlapping field "field_0x8" */

uint32_t init_object_with_three_pointers(cls_105b8354 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  alloc_pool_and_init_task(&param_1->field_0x1c,0xf,0x1000,4);
  wait_flg_obj(&param_1->field_0x64,0);
  uVar1 = get_or_init_sram_buffer_104b7278();
  param_1->field_0x58 = uVar1;
  uVar1 = get_or_init_ram_buffer_104b590a();
  *(uint32_t *)&param_1->field_0x5c = uVar1;
  uVar1 = get_or_init_sram_buffer_104b55a6();
  param_1->field_0x60 = uVar1;
  create_kernel_object(&param_1->field_0x40);
  iVar2 = (*(code *)0x104b687e/*ROM*/)(*(uint32_t *)&param_1->field_0x5c);
  create_message_box_104594ea(&param_1->field_0x48,iVar2);
  return 1;
}
