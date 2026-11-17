/* @k10d init_struct_with_subobject_pool @ 0x103a5998
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes a large control struct by allocating many sub-objects and registering them
 *   with a parent handle.
 * summary:
 *   Sets a flag at offset 4, copies a 16-byte block from a pointer at offset 0x3c into
 *   three locations, and writes fixed 16-bit constants into the struct. It calls
 *   get_or_init_static_buffer_10495746 to obtain a handle, then repeatedly calls
 *   app_obj_factory with IDs in the 0x2050000 range to allocate numerous sub-objects,
 *   storing their pointers in the struct. It links some sub-objects via
 *   write_field_at_offset_0x48 and registers many with iterate_and_remove_list_entry,
 *   finally calling set_object_field_at_offset_0x10 with the struct and a parent handle.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_subobject_pool(int param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  uint8_t *puVar9;
  
  *(uint8_t *)(param_1 + 4) = 1;
  pvVar1 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar1,(uint *)0x1056785c/*ROM*/,param_3,param_4);
  *(uint16_t *)(param_1 + 0xfc) = 0x280;
  *(uint16_t *)(param_1 + 0xfe) = 0x1e0;
  *(uint32_t *)(param_1 + 0xf0) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
  *(uint32_t *)(param_1 + 0xf4) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
  *(uint32_t *)(param_1 + 0xf8) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
  *(uint32_t *)(param_1 + 0x120) = **(uint32_t **)(param_1 + 0x3c);
  *(uint32_t *)(param_1 + 0x124) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
  *(uint32_t *)(param_1 + 0x128) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
  *(uint32_t *)(param_1 + 300) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
  *(uint16_t *)(param_1 + 0x130) = 0x100;
  *(uint16_t *)(param_1 + 0x132) = 0xa8;
  *(uint16_t *)(param_1 + 0x134) = 0x100;
  *(uint16_t *)(param_1 + 0x136) = 0;
  *(uint16_t *)(param_1 + 0x138) = 0;
  *(uint16_t *)(param_1 + 0x10c) = 0x100;
  *(uint16_t *)(param_1 + 0x10e) = 0xa8;
  *(uint32_t *)(param_1 + 0x100) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 4);
  *(uint32_t *)(param_1 + 0x104) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 8);
  *(uint32_t *)(param_1 + 0x108) = *(uint32_t *)(*(int *)(param_1 + 0x3c) + 0xc);
  pvVar2 = (void *)app_obj_factory(pvVar1,(void *)0x2050000,0,0);
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050001,0,0);
  *(uint32_t *)(param_1 + 0x50) = uVar3;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x2050026,0,0);
  *(void **)(param_1 + 0x4c) = pvVar4;
  write_field_at_offset_0x48(pvVar4,*(uint32_t *)(param_1 + 0x50));
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050012,(void *)0x20,(void *)0x18);
  *(uint32_t *)(param_1 + 0x54) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050020,(void *)0x68,(void *)0x18);
  *(uint32_t *)(param_1 + 0x58) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001d,(void *)0x20,(void *)0x198);
  *(uint32_t *)(param_1 + 0x5c) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050021,(void *)0x68,(void *)0x198);
  *(uint32_t *)(param_1 + 0x60) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001f,(void *)0x20,(void *)0x18);
  *(uint32_t *)(param_1 + 100) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001e,(void *)0x80,(void *)0x120);
  *(uint32_t *)(param_1 + 0x68) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001c,(void *)0x38,(void *)0x198);
  *(uint32_t *)(param_1 + 0x6c) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050028,(void *)0x20,(void *)0x198);
  *(uint32_t *)(param_1 + 0x70) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050002,(void *)0x20,(void *)0x150);
  *(uint32_t *)(param_1 + 0x74) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050003,(void *)0x140,(void *)0x48);
  *(uint32_t *)(param_1 + 0x78) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050004,(void *)0x140,(void *)0xcc);
  *(uint32_t *)(param_1 + 0x7c) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050005,(void *)0x140,(void *)0x150);
  *(uint32_t *)(param_1 + 0x80) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001b,(void *)0x38,(void *)0x120);
  *(uint32_t *)(param_1 + 0x84) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050022,(void *)0x20,(void *)0x58);
  *(uint32_t *)(param_1 + 0x88) = uVar3;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x2050027,(void *)0x20,(void *)0x58);
  *(void **)(param_1 + 0x8c) = pvVar4;
  write_field_at_offset_0x48(pvVar4,*(uint32_t *)(param_1 + 0x88));
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050029,(void *)0x20,(void *)0x120);
  *(uint32_t *)(param_1 + 0x90) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050006,(void *)0x128,(void *)0x18);
  *(uint32_t *)(param_1 + 0x94) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050007,(void *)0x128,(void *)0x1b0);
  *(uint32_t *)(param_1 + 0x98) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050008,(void *)0x20,(void *)0xd8);
  *(uint32_t *)(param_1 + 0x9c) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050009,(void *)0x248,(void *)0xd8);
  *(uint32_t *)(param_1 + 0xa0) = uVar3;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x205000a,(void *)0x128,(void *)0x18);
  pvVar5 = (void *)app_obj_factory(pvVar1,(void *)0x205000b,(void *)0x128,(void *)0x1b0);
  pvVar6 = (void *)app_obj_factory(pvVar1,(void *)0x205000c,(void *)0x20,(void *)0xd8);
  pvVar7 = (void *)app_obj_factory(pvVar1,(void *)0x205000d,(void *)0x248,(void *)0xd8);
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205000e,(void *)0x1b8,(void *)0x198);
  *(uint32_t *)(param_1 + 0xa4) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050011,(void *)0x218,(void *)0x168);
  *(uint32_t *)(param_1 + 0xa8) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205000f,(void *)0x200,(void *)0x198);
  *(uint32_t *)(param_1 + 0xac) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050024,(void *)8,0);
  *(uint32_t *)(param_1 + 0xb0) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050023,(void *)8,0);
  *(uint32_t *)(param_1 + 0xb4) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050025,(void *)8,0);
  *(uint32_t *)(param_1 + 0xb8) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050014,(void *)0x50,(void *)0x120);
  *(uint32_t *)(param_1 + 0xbc) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050015,(void *)0x50,(void *)0x120);
  *(uint32_t *)(param_1 + 0xc0) = uVar3;
  call_helper_and_set_flag_104b7726((void *)uVar3,0x1e0,1);
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050018,(void *)0x50,(void *)0x150);
  *(uint32_t *)(param_1 + 0xc4) = uVar3;
  call_helper_and_set_flag_104b7726((void *)uVar3,0x1e0,1);
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205002a,0,0);
  *(uint32_t *)(param_1 + 200) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205002b,0,0);
  *(uint32_t *)(param_1 + 0xcc) = uVar3;
  write_field_at_offset_0x48(*(void **)(param_1 + 200),*(uint32_t *)(param_1 + 0xc0));
  write_field_at_offset_0x48(*(void **)(param_1 + 0xcc),*(uint32_t *)(param_1 + 0xc4));
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050016,(void *)0x50,(void *)0x120);
  *(uint32_t *)(param_1 + 0xdc) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050017,(void *)0x50,(void *)0x120);
  *(uint32_t *)(param_1 + 0xe0) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050019,(void *)0x50,(void *)0x150);
  *(uint32_t *)(param_1 + 0xe4) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205001a,(void *)0x50,(void *)0x150);
  *(uint32_t *)(param_1 + 0xe8) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205002c,(void *)0x20,(void *)0x18);
  *(uint32_t *)(param_1 + 0xd0) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205002d,(void *)0x1b8,(void *)0x198);
  *(uint32_t *)(param_1 + 0xd4) = uVar3;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x205002e,(void *)0x200,(void *)0x198);
  *(uint32_t *)(param_1 + 0xd8) = uVar3;
  pvVar8 = (void *)0x68;
  puVar9 = &DAT_00000078;
  uVar3 = (uint32_t)(uintptr_t)app_obj_factory(pvVar1,(void *)0x2050013,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  *(uint32_t *)(param_1 + 0xec) = uVar3;
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 200),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xcc),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xd0),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xd4),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xd8),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xdc),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xe0),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xe4),pvVar8,puVar9);
  iterate_and_remove_list_entry(*(void **)(param_1 + 0xbc),*(void **)(param_1 + 0xe8),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x4c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x8c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x74),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x78),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x7c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x80),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x94),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x98),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x9c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xa0),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,pvVar4,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,pvVar5,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,pvVar6,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,pvVar7,pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xa4),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xac),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xa8),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x54),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xec),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xbc),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x68),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x5c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x84),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x90),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x6c),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x70),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 100),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x58),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x60),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0x88),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xb0),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xb4),pvVar8,puVar9);
  iterate_and_remove_list_entry(pvVar2,*(void **)(param_1 + 0xb8),pvVar8,puVar9);
  call_helper_and_set_flag_10494b88(*(uint32_t **)(param_1 + 0x50));
  call_helper_and_set_flag_10494b88(*(uint32_t **)(param_1 + 0x88));
  set_object_field_at_offset_0x10((void *)(param_1 + 8),pvVar2);
  return;
}
