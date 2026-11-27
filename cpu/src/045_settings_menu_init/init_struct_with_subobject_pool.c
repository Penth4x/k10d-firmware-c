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

void init_struct_with_subobject_pool(cls_10565040 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint32_t uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  uint8_t *puVar10;
  
  param_1->field_0x4 = 1;
  pvVar1 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar1,(uint *)0x1056785c/*ROM*/,param_3,param_4);
  param_1->field_0xfc = 0x280;
  param_1->field_0xfe = 0x1e0;
  param_1->field_0xf0 = *(uint32_t *)(param_1->field_0x3c + 4);
  param_1->field_0xf4 = *(uint32_t *)(param_1->field_0x3c + 8);
  param_1->field_0xf8 = *(uint32_t *)(param_1->field_0x3c + 0xc);
  param_1->field_0x120 = *(uint32_t *)param_1->field_0x3c;
  param_1->field_0x124 = *(uint32_t *)(param_1->field_0x3c + 4);
  param_1->field_0x128 = *(uint32_t *)(param_1->field_0x3c + 8);
  param_1->field_0x12c = *(uint32_t *)(param_1->field_0x3c + 0xc);
  param_1->field_0x130 = 0x100;
  param_1->field_0x132 = 0xa8;
  param_1->field_0x134 = 0x100;
  param_1->field_0x136 = 0;
  param_1->field_0x138 = 0;
  param_1->field_0x10c = 0x100;
  param_1->field_0x10e = 0xa8;
  param_1->field_0x100 = *(uint32_t *)(param_1->field_0x3c + 4);
  param_1->field_0x104 = *(uint32_t *)(param_1->field_0x3c + 8);
  param_1->field_0x108 = *(uint32_t *)(param_1->field_0x3c + 0xc);
  pvVar2 = (void *)app_obj_factory(pvVar1,(void *)0x2050000,0,0);
  iVar3 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050001,0,0));
  param_1->field_0x50 = iVar3;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x2050026,0,0);
  *(void **)&param_1->field_0x4c = pvVar4;
  write_field_at_offset_0x48(pvVar4,param_1->field_0x50);
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050012,(void *)0x20,(void *)0x18));
  *(uint32_t *)&param_1->field_0x54 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050020,(void *)0x68,(void *)0x18));
  *(uint32_t *)&param_1->field_0x58 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001d,(void *)0x20,(void *)0x198));
  *(uint32_t *)&param_1->field_0x5c = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050021,(void *)0x68,(void *)0x198));
  *(uint32_t *)&param_1->field_0x60 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001f,(void *)0x20,(void *)0x18));
  *(uint32_t *)&param_1->field_0x64 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001e,(void *)0x80,(void *)0x120));
  *(uint32_t *)&param_1->field_0x68 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001c,(void *)0x38,(void *)0x198));
  *(uint32_t *)&param_1->field_0x6c = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050028,(void *)0x20,(void *)0x198));
  *(uint32_t *)&param_1->field_0x70 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050002,(void *)0x20,(void *)0x150));
  *(uint32_t *)&param_1->field_0x74 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050003,(void *)0x140,(void *)0x48));
  *(uint32_t *)&param_1->field_0x78 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050004,(void *)0x140,(void *)0xcc));
  *(uint32_t *)&param_1->field_0x7c = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050005,(void *)0x140,(void *)0x150));
  *(uint32_t *)&param_1->field_0x80 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001b,(void *)0x38,(void *)0x120));
  *(uint32_t *)&param_1->field_0x84 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050022,(void *)0x20,(void *)0x58));
  *(uint32_t *)&param_1->field_0x88 = uVar5;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x2050027,(void *)0x20,(void *)0x58);
  param_1->field_0x8c = (uintptr_t)(pvVar4);
  write_field_at_offset_0x48(pvVar4,*(uint32_t *)&param_1->field_0x88);
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050029,(void *)0x20,(void *)0x120));
  param_1->field_0x90 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050006,(void *)0x128,(void *)0x18));
  param_1->field_0x94 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050007,(void *)0x128,(void *)0x1b0));
  param_1->field_0x98 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050008,(void *)0x20,(void *)0xd8));
  param_1->field_0x9c = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050009,(void *)0x248,(void *)0xd8));
  param_1->field_0xa0 = uVar5;
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x205000a,(void *)0x128,(void *)0x18);
  pvVar6 = (void *)app_obj_factory(pvVar1,(void *)0x205000b,(void *)0x128,(void *)0x1b0);
  pvVar7 = (void *)app_obj_factory(pvVar1,(void *)0x205000c,(void *)0x20,(void *)0xd8);
  pvVar8 = (void *)app_obj_factory(pvVar1,(void *)0x205000d,(void *)0x248,(void *)0xd8);
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205000e,(void *)0x1b8,(void *)0x198));
  param_1->field_0xa4 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050011,(void *)0x218,(void *)0x168));
  param_1->field_0xa8 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205000f,(void *)0x200,(void *)0x198));
  param_1->field_0xac = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050024,(void *)8,0));
  param_1->field_0xb0 = uVar5;
  iVar3 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050023,(void *)8,0));
  param_1->field_0xb4 = iVar3;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050025,(void *)8,0));
  param_1->field_0xb8 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050014,(void *)0x50,(void *)0x120));
  param_1->field_0xbc = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050015,(void *)0x50,(void *)0x120));
  param_1->field_0xc0 = uVar5;
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar5),(uint16_t)(0x1e0),(uint16_t)(1));
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050018,(void *)0x50,(void *)0x150));
  param_1->field_0xc4 = uVar5;
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar5),(uint16_t)(0x1e0),(uint16_t)(1));
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205002a,0,0));
  param_1->field_0xc8 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205002b,0,0));
  *(uint32_t *)&param_1->field_0xcc = uVar5;
  write_field_at_offset_0x48((char*)(param_1) ->field_0xc8,param_1->field_0xc0);
  write_field_at_offset_0x48(*(void **)&param_1->field_0xcc,param_1->field_0xc4);
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050016,(void *)0x50,(void *)0x120));
  *(uint32_t *)&param_1->field_0xdc = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050017,(void *)0x50,(void *)0x120));
  *(uint32_t *)&param_1->field_0xe0 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050019,(void *)0x50,(void *)0x150));
  *(uint32_t *)&param_1->field_0xe4 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205001a,(void *)0x50,(void *)0x150));
  *(uint32_t *)&param_1->field_0xe8 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205002c,(void *)0x20,(void *)0x18));
  *(uint32_t *)&param_1->field_0xd0 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205002d,(void *)0x1b8,(void *)0x198));
  *(uint32_t *)&param_1->field_0xd4 = uVar5;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x205002e,(void *)0x200,(void *)0x198));
  *(uint32_t *)&param_1->field_0xd8 = uVar5;
  pvVar9 = (void *)0x68;
  puVar10 = &DAT_00000078;
  uVar5 = (uintptr_t)(app_obj_factory(pvVar1,(void *)0x2050013,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4));
  *(uint32_t *)&param_1->field_0xec = uVar5;
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,(char*)(param_1) ->field_0xc8,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xcc,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xd0,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xd4,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xd8,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xdc,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xe0,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xe4,pvVar9,puVar10);
  iterate_and_remove_list_entry((char*)(param_1) ->field_0xbc,*(void **)&param_1->field_0xe8,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x4c,pvVar9,puVar10);
  iterate_and_remove_list_entry((void *)(pvVar2),(void *)(param_1->field_0x8c),(void *)(pvVar9),(void *)(puVar10));
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x74,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x78,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x7c,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x80,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0x94,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0x98,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0x9c,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xa0,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,pvVar4,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,pvVar6,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,pvVar7,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,pvVar8,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xa4,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xac,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xa8,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x54,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0xec,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xbc,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x68,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x5c,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x84,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0x90,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x6c,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x70,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x64,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x58,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x60,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,*(void **)&param_1->field_0x88,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xb0,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xb4,pvVar9,puVar10);
  iterate_and_remove_list_entry(pvVar2,(char*)(param_1) ->field_0xb8,pvVar9,puVar10);
  call_helper_and_set_flag_10494b88((uint32_t *)param_1->field_0x50);
  call_helper_and_set_flag_10494b88(*(uint32_t **)&param_1->field_0x88);
  set_object_field_at_offset_0x10(&param_1->field_0x8,pvVar2);
  return;
}
