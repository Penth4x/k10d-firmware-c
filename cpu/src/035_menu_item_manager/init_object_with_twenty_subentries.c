/* @k10d init_object_with_twenty_subentries @ 0x103822fe
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates 20 sub-objects via a helper, links each to the first, and attaches the group to
 *   the parent object.
 * summary:
 *   The function reads a pointer from offset 0x24 of param_1 and calls
 *   iterate_range_and_call_match once, then app_obj_factory 20 times with sequential IDs
 *   (0x3090000-0x3090015) and varying size/offset parameters. Each returned sub-object is
 *   passed to iterate_and_remove_list_entry along with the first sub-object, suggesting a
 *   linking or registration operation. Finally, set_object_field_at_offset_0x10 is called
 *   with the original param_1 and the first sub-object. The mechanical pattern is object
 *   initialization with multiple components, but the specific subsystem (display, camera,
 *   etc.) is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_twenty_subentries(cls_10558fd4 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
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
  
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055e000/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090001,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090002,(void *)0x1a0,(void *)0x18);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090003,(void *)0x1e8,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090004,(void *)0x200,(void *)0x18);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090005,(void *)0x1b8,(void *)0x198);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090007,(void *)0x200,(void *)0x198);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090008,(void *)0x128,(void *)0x18);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090009,(void *)0x248,(void *)0xd8);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000a,(void *)0x20,(void *)0xd8);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000b,(void *)0x128,(void *)0x1b0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000c,(void *)0x128,(void *)0x18);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000d,(void *)0x248,(void *)0xd8);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000e,(void *)0x20,(void *)0xd8);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x309000f,(void *)0x128,(void *)0x1b0);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090010,(void *)0x218,(void *)0x48);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090011,(void *)0x218,(void *)0x168);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090012,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar18,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar18,0x90,1);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090014,(void *)8,(void *)(0));
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090013,(void *)8,(void *)(0));
  pvVar22 = (void *)0x8;
  pvVar23 = (void *)0x0;
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3090015,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar3,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar15,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar20,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar1,pvVar21,pvVar22,pvVar23);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
