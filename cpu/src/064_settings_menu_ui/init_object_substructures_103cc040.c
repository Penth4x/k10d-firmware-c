/* @k10d init_object_substructures_103cc040 @ 0x103cc040
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 064_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Allocates and links a set of fixed-size sub-objects to initialize the internal state of
 *   the calling class instance.
 * summary:
 *   The function calls app_obj_factory repeatedly to allocate memory blocks with IDs in the
 *   0x1060000 range and varying sizes. It then links these blocks using
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev, and registers them
 *   with a parent object via iterate_and_remove_list_entry. The final call to
 *   set_object_field_at_offset_0x10 associates the constructed structure with the object's
 *   first field. This is a virtual method (slot 5) of class cls_105959b0, likely performing
 *   deferred or specific initialization of its internal components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_substructures_103cc040(cls_105959b0 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_10549668/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060002,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060003,(void *)(0),(void *)0x44);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060004,(void *)(0),(void *)0x196);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060005,(void *)(0),(void *)0x44);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060006,(void *)(0),(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060007,(void *)(0),(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060008,(void *)0x1d0,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060009,(void *)0x218,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000a,(void *)0x80,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000b,(void *)0x20,(void *)0x18);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000d,(void *)0x260,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000e,(void *)0x260,(void *)0xc0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000f,(void *)0x260,(void *)0x120);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106000c,(void *)200,(void *)0x18);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060010,(void *)0x20,(void *)0x60);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060011,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060012,(void *)0x248,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar17);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060016,(void *)0x20,(void *)0x90);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060017,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060018,(void *)0x248,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar17);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060013,(void *)0x20,(void *)0xc0);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060014,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060015,(void *)0x248,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar19,iVar17);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1060019,(void *)0x20,(void *)0xf0);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x106001a,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar17);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x106001b,(void *)0x248,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar20,iVar17);
  pvVar22 = (void *)0x0;
  pvVar23 = (void *)0x0;
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x106001c,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar21,pvVar1,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar2,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar3,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar4,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar5,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar6,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar7,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar8,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar9,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar10,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar11,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar12,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar13,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar14,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar15,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar16,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar19,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar18,pvVar22,pvVar23);
  iterate_and_remove_list_entry(pvVar21,pvVar20,pvVar22,pvVar23);
  graph_link_nextprev((int)pvVar16,(int)pvVar18,0xf,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar16,0x10,pvVar23);
  graph_link_nextprev((int)pvVar18,(int)pvVar19,0xf,pvVar23);
  graph_link_nextprev((int)pvVar19,(int)pvVar18,0x10,pvVar23);
  graph_link_nextprev((int)pvVar19,(int)pvVar20,0xf,pvVar23);
  graph_link_nextprev((int)pvVar20,(int)pvVar19,0x10,pvVar23);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar21));
  return;
}
