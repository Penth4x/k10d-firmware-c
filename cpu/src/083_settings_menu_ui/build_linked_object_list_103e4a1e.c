/* @k10d build_linked_object_list_103e4a1e @ 0x103e4a1e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Creates a series of objects via a factory call, links them into a chain, and registers
 *   them with a parent.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1ac0001-0x1ac0025)
 *   and varying offsets/sizes to create numerous objects. It then links these objects using
 *   invoke_virtual_then_call_helper_10494188 and graph_link_nextprev, and registers them
 *   with a parent object via iterate_and_remove_list_entry. Finally, it calls
 *   set_object_field_at_offset_0x10 to attach the constructed structure to the class
 *   instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_linked_object_list_103e4a1e(cls_10597054 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  int iVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  void *pvVar35;
  void *pvVar36;
  void *pvVar37;
  void *pvVar38;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1055500c/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0002,(void *)(0),(void *)0x48);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0003,(void *)(0),(void *)0x1dc);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0006,(void *)0x20,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0008,(void *)0x20,(void *)0x154);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0009,(void *)0x68,(void *)0x18);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000a,(void *)0x80,(void *)0x60);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000b,(void *)0x140,(void *)0x60);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0020,(void *)200,(void *)0x60);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0021,(void *)0x188,(void *)0x60);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000a,(void *)0x80,(void *)0x90);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000b,(void *)0x140,(void *)0x90);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0021,(void *)200,(void *)0x90);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0020,(void *)0x188,(void *)0x90);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000a,(void *)0x80,(void *)0xc0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000b,(void *)0x140,(void *)0xc0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0023,(void *)200,(void *)0xc0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0022,(void *)0x188,(void *)0xc0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000a,(void *)0x80,(void *)0xf0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000b,(void *)0x140,(void *)0xf0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0022,(void *)200,(void *)0xf0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0023,(void *)0x188,(void *)0xf0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000a,(void *)0x80,(void *)0x120);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000b,(void *)0x140,(void *)0x120);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0024,(void *)200,(void *)0x120);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0024,(void *)0x188,(void *)0x120);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000c,(void *)0x38,(void *)0x60);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000d,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000e,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac000f,(void *)0x20,(void *)0x60));
  invoke_virtual_then_call_helper_10494188((int)pvVar30,iVar31);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0010,(void *)0x38,(void *)0x90);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0011,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0012,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0013,(void *)0x20,(void *)0x90));
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar31);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0014,(void *)0x38,(void *)0xc0);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0015,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0016,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0017,(void *)0x20,(void *)0xc0));
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar31);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0018,(void *)0x38,(void *)0xf0);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0019,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001a,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001b,(void *)0x20,(void *)0xf0));
  invoke_virtual_then_call_helper_10494188((int)pvVar34,iVar31);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001c,(void *)0x38,(void *)0x120);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001d,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar35,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001e,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar35,iVar31);
  iVar31 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac001f,(void *)0x20,(void *)0x120));
  invoke_virtual_then_call_helper_10494188((int)pvVar35,iVar31);
  pvVar37 = (void *)0x0;
  pvVar38 = (void *)0x0;
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1ac0025,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar36,pvVar1,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar2,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar3,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar4,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar5,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar6,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar7,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar8,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar9,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar10,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar11,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar12,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar13,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar14,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar15,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar16,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar17,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar18,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar19,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar20,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar21,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar22,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar23,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar24,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar25,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar26,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar27,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar28,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar29,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar30,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar32,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar33,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar34,pvVar37,pvVar38);
  iterate_and_remove_list_entry(pvVar36,pvVar35,pvVar37,pvVar38);
  graph_link_nextprev((int)pvVar30,(int)pvVar32,0xf,pvVar38);
  graph_link_nextprev((int)pvVar30,(int)pvVar35,0x10,pvVar38);
  graph_link_nextprev((int)pvVar32,(int)pvVar33,0xf,pvVar38);
  graph_link_nextprev((int)pvVar32,(int)pvVar30,0x10,pvVar38);
  graph_link_nextprev((int)pvVar33,(int)pvVar34,0xf,pvVar38);
  graph_link_nextprev((int)pvVar33,(int)pvVar32,0x10,pvVar38);
  graph_link_nextprev((int)pvVar34,(int)pvVar35,0xf,pvVar38);
  graph_link_nextprev((int)pvVar34,(int)pvVar33,0x10,pvVar38);
  graph_link_nextprev((int)pvVar35,(int)pvVar30,0xf,pvVar38);
  graph_link_nextprev((int)pvVar35,(int)pvVar34,0x10,pvVar38);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar36));
  return;
}
