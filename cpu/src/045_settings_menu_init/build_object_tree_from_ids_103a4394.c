/* @k10d build_object_tree_from_ids_103a4394 @ 0x103a4394
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Creates a hierarchy of child objects from a list of IDs and links them into a tree
 *   attached to a parent struct.
 * summary:
 *   The function initializes a parent struct (param_1) by copying header fields and setting
 *   dimension values. It calls get_or_init_static_buffer_10495746 to obtain a context, then
 *   uses app_obj_factory to instantiate approximately 26 child objects with specific IDs
 *   and parameters. These children are linked into a tree structure using
 *   iterate_and_remove_list_entry, where some children act as intermediate nodes. Finally,
 *   it attaches the root of this tree to the parent object via
 *   set_object_field_at_offset_0x10 and performs virtual calls on three specific child
 *   objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_object_tree_from_ids_103a4394(cls_10564c80 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  uint32_t *puVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  
  param_1->field_0x4 = 1;
  sVar1 = 0x27f - _DAT_10567624/*ROM*/;
  sVar2 = 0x1c8 - _DAT_10567624/*ROM*/;
  *(uint32_t *)&param_1->field_0x40 = *(uint32_t *)(param_1->field_0x3c + 4);
  *(uint32_t *)&param_1->field_0x44 = *(uint32_t *)(param_1->field_0x3c + 8);
  *(uint32_t *)&param_1->field_0x48 = *(uint32_t *)(param_1->field_0x3c + 0xc);
  *(uint16_t *)&param_1->field_0x4c = 0x280;
  param_1->field_0x4e = 0x1e0;
  pvVar3 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar3,(uint *)0x1056762c/*ROM*/,param_3,param_4);
  pvVar4 = (void *)app_obj_factory(pvVar3,(void *)0x2080000,0,0);
  pvVar5 = (void *)app_obj_factory(pvVar3,(void *)0x2080002,0,0);
  pvVar6 = (void *)app_obj_factory(pvVar3,(void *)0x2080003,0,0);
  pvVar7 = (void *)app_obj_factory(pvVar3,(void *)0x2080004,0,0);
  puVar8 = (uint32_t *)app_obj_factory(pvVar3,(void *)0x2080005,0,0);
  pvVar9 = (void *)app_obj_factory(pvVar3,(void *)0x2080006,(void *)0x128,(void *)0x18);
  pvVar10 = (void *)app_obj_factory(pvVar3,(void *)0x2080007,(void *)0x128,(void *)0x198);
  pvVar11 = (void *)app_obj_factory(pvVar3,(void *)0x2080008,(void *)0x230,(void *)0xd8);
  pvVar12 = (void *)app_obj_factory(pvVar3,(void *)0x2080009,(void *)0x20,(void *)0xd8);
  pvVar13 = (void *)app_obj_factory(pvVar3,(void *)0x208000a,0,(void *)0x18);
  pvVar14 = (void *)app_obj_factory((int *)(pvVar3),(void *)0x208000b,(void *)(0),(void *)(sVar2));
  pvVar15 = (void *)app_obj_factory((int *)(pvVar3),(void *)0x208000c,(void *)(sVar1),(void *)0x18);
  pvVar16 = (void *)app_obj_factory(pvVar3,(void *)0x208000d,0,(void *)0x18);
  pvVar17 = (void *)app_obj_factory(pvVar3,(void *)0x208000e,0,0);
  pvVar18 = (void *)app_obj_factory(pvVar3,(void *)0x208000f,0,0);
  pvVar19 = (void *)app_obj_factory(pvVar3,(void *)0x2080010,0,0);
  pvVar20 = (void *)app_obj_factory(pvVar3,(void *)0x2080011,0,0);
  pvVar21 = (void *)app_obj_factory(pvVar3,(void *)0x2080012,(void *)0x20,(void *)0x18);
  pvVar22 = (void *)app_obj_factory(pvVar3,(void *)0x2080013,(void *)0x20,(void *)0x198);
  pvVar23 = (void *)app_obj_factory(pvVar3,(void *)0x2080014,(void *)0x68,(void *)0x198);
  pvVar24 = (void *)app_obj_factory(pvVar3,(void *)0x2080015,(void *)0x68,(void *)0x198);
  pvVar25 = (void *)app_obj_factory(pvVar3,(void *)0x2080016,0,0);
  pvVar26 = (void *)app_obj_factory(pvVar3,(void *)0x2080017,0,0);
  pvVar27 = (void *)app_obj_factory(pvVar3,(void *)0x2080018,(void *)0x20,(void *)0xa8);
  call_helper_and_set_flag_104b7726(pvVar27,0x240,1);
  pvVar28 = (void *)app_obj_factory(pvVar3,(void *)0x2080019,0,0);
  pvVar29 = (void *)0x0;
  pvVar30 = (void *)0x0;
  pvVar3 = (void *)app_obj_factory(pvVar3,(void *)0x208001a,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar5,pvVar13,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar5,pvVar14,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar5,pvVar15,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar5,pvVar16,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar5,pvVar23,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar17,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar18,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar19,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar20,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar9,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar10,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar11,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar12,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar6,pvVar24,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar7,pvVar27,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar7,pvVar28,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar7,pvVar3,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,puVar8,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar5,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar6,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar7,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar21,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar22,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar25,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar4,pvVar26,pvVar29,pvVar30);
  set_object_field_at_offset_0x10(&param_1->field5_0x8,pvVar4);
  call_helper_and_set_flag_10494b88(puVar8);
  (((vtbl_entry*)(*(int *)((int)pvVar5 + 0xc)))[1].fn)
            ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar6 + 0xc)))[1].fn)
            ((int)pvVar6 + (int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[1].fn)
            ((int)pvVar7 + (int)*(short *)(*(int *)((int)pvVar7 + 0xc) + 8),0);
  return;
}
