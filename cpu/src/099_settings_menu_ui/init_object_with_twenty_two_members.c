/* @k10d init_object_with_twenty_two_members @ 0x10423206
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by creating 22 member sub-objects and linking them into a
 *   container.
 * summary:
 *   The function calls app_obj_factory 22 times with sequential IDs (0x1bf0001-0x1bf001a)
 *   to create member objects. It then calls iterate_and_remove_list_entry 22 times to add
 *   these members to a container object (pvVar24). It also performs virtual calls on some
 *   members and links two specific members (pvVar7 and pvVar10) using graph_link_nextprev.
 *   Finally, it calls set_object_field_at_offset_0x10 with the parent object and the
 *   container.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_twenty_two_members(cls_1059dd24 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x10556dd0/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0002,(void *)0x20,(void *)0x198);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0003,(void *)0x80,(void *)0x198);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0004,(void *)0x20,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0005,(void *)0x20,(void *)0x48);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0006,(void *)0x20,(void *)0x198);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0007,(void *)0x20,(void *)0x90);
  iVar8 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0008,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar7,iVar8);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0009,(void *)0x200,(void *)0x90);
  iVar8 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000a,(void *)0x218,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar7,iVar8);
  iVar8 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000b,(void *)0x1e8,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar7,iVar8);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000c,(void *)0x20,(void *)0x150);
  iVar8 = (int)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000d,(void *)0x20,(void *)0x150));
  invoke_virtual_then_call_helper_10494188((int)pvVar10,iVar8);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000e,(void *)0x1b8,(void *)0x150);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf000f,(void *)0x134,(void *)0xf0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0010,(void *)0x38,(void *)0x120);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0011,(void *)0x14c,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar14 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar14 + 0xc) + 8) + (int)pvVar14,0);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0012,(void *)0x260,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar15);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0013,(void *)0x20,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar16);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0014,(void *)0x14c,(void *)0x138);
  invoke_virtual_then_call_helper_10494188((int)pvVar10,(int)pvVar16);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0015,(void *)0x194,(void *)0xf0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0015,(void *)0x218,(void *)0x150);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0016,(void *)0x188,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0017,(void *)0x188,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar21 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0018,(void *)0x104,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf0019,(void *)0x104,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar25 = (void *)0x0;
  pvVar26 = (void *)0x0;
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1bf001a,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar24,pvVar1,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar2,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar3,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar4,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar5,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar6,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar7,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar9,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar10,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar11,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar12,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar13,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar14,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar15,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar16,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar17,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar18,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar19,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar20,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar21,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar22,pvVar25,pvVar26);
  iterate_and_remove_list_entry(pvVar24,pvVar23,pvVar25,pvVar26);
  graph_link_nextprev((int)pvVar7,(int)pvVar10,0xf,pvVar26);
  graph_link_nextprev((int)pvVar7,(int)pvVar10,0x10,pvVar26);
  graph_link_nextprev((int)pvVar10,(int)pvVar7,0xf,pvVar26);
  graph_link_nextprev((int)pvVar10,(int)pvVar7,0x10,pvVar26);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar24));
  return;
}
