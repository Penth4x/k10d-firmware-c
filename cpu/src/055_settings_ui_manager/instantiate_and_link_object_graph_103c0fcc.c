/* @k10d instantiate_and_link_object_graph_103c0fcc @ 0x103c0fcc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Creates many objects via a factory and links them into a parent-child graph using
 *   container helpers.
 * summary:
 *   The function calls app_obj_factory repeatedly with sequential IDs (0x1070001-0x107003f)
 *   to instantiate numerous objects. It then uses invoke_virtual_then_call_helper_10494188
 *   and iterate_and_remove_list_entry to establish relationships between these objects,
 *   forming a hierarchical structure. Finally, it registers the root object via
 *   set_object_field_at_offset_0x10. The specific subsystem (UI, data model, etc.) is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void instantiate_and_link_object_graph_103c0fcc(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  int iVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  void *pvVar35;
  uint8_t *puVar36;
  void *pvVar37;
  void *pvVar38;
  uint8_t *puVar39;
  void *pvVar40;
  void *pvVar41;
  
  iterate_range_and_call_match((void *)param_1[1],(uint *)&DAT_105498ac/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070001,(void *)0x20,(void *)0x198);
  pvVar2 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070002,0,0);
  pvVar3 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070003,0,(void *)0x44);
  pvVar4 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070004,0,(void *)0x196);
  pvVar5 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070005,0,(void *)0x44);
  pvVar6 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070006,0,(void *)0x2c);
  pvVar7 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070007,0,(void *)0x19c);
  pvVar8 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070008,(void *)0x20,(void *)0x8c);
  pvVar9 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070009,(void *)0x1d0,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000a,(void *)0x218,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000d,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000b,(void *)0x20,(void *)0x18);
  (**(code **)(*(int *)((int)pvVar12 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070010,(void *)0x260,(void *)0x60);
  pvVar14 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070011,(void *)0x260,(void *)0x90);
  pvVar15 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070012,(void *)0x260,(void *)0xc0);
  pvVar16 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070013,(void *)0x260,(void *)0xf0);
  pvVar17 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070014,(void *)0x260,(void *)0x120);
  pvVar18 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070015,(void *)0x260,(void *)0x150);
  pvVar19 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000c,(void *)0x20,(void *)0x90);
  pvVar20 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000c,(void *)0x20,(void *)0xc0);
  pvVar21 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000c,(void *)0x20,(void *)0xf0);
  pvVar22 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000c,(void *)0x20,(void *)0x120);
  pvVar23 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000c,(void *)0x20,(void *)0x150);
  pvVar24 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000f,(void *)200,(void *)0x18);
  pvVar25 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107000e,(void *)0x20,(void *)0x18);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070016,(void *)0xf8,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070017,(void *)0xb0,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070018,(void *)0x128,(void *)0x48);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070019,(void *)0xb0,(void *)0x18);
  invoke_virtual_then_call_helper_10494188((int)pvVar25,iVar26);
  pvVar27 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107001a,(void *)0x20,(void *)0x60);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107001b,(void *)0x20,(void *)0x60);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar26);
  pvVar28 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107001c,(void *)0x218,(void *)0x60);
  pvVar29 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107001d,(void *)0x218,(void *)0x60);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107001e,(void *)0x248,(void *)0x60);
  puVar36 = (uint8_t *)&DAT_00000200;
  puVar39 = (uint8_t *)&DAT_00000060;
  iVar30 = (int)app_obj_factory((void *)param_1[1],(void *)0x107001f,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar27,pvVar29,puVar36,puVar39);
  iterate_and_remove_list_entry(pvVar27,pvVar28,puVar36,puVar39);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar26);
  invoke_virtual_then_call_helper_10494188((int)pvVar27,iVar30);
  pvVar28 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070020,(void *)0x38,(void *)0x90);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070021,(void *)0x20,(void *)0x90);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar26);
  pvVar29 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070022,(void *)0x218,(void *)0x90);
  pvVar31 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070023,(void *)0x218,(void *)0x90);
  pvVar32 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070024,(void *)0x218,(void *)0x90);
  pvVar33 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070025,(void *)0x218,(void *)0x90);
  pvVar37 = (void *)0x248;
  puVar36 = (uint8_t *)&DAT_00000090;
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070026,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar28,pvVar29,pvVar37,puVar36);
  iterate_and_remove_list_entry(pvVar28,pvVar31,pvVar37,puVar36);
  iterate_and_remove_list_entry(pvVar28,pvVar32,pvVar37,puVar36);
  iterate_and_remove_list_entry(pvVar28,pvVar33,pvVar37,puVar36);
  invoke_virtual_then_call_helper_10494188((int)pvVar28,iVar26);
  pvVar29 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070027,(void *)0x38,(void *)0xc0);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070028,(void *)0x20,(void *)0xc0);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar26);
  pvVar31 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070029,(void *)0x218,(void *)0xc0);
  pvVar32 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107002a,(void *)0x218,(void *)0xc0);
  pvVar33 = (void *)0x248;
  pvVar37 = (void *)0xc0;
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107002b,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar29,pvVar31,pvVar33,pvVar37);
  iterate_and_remove_list_entry(pvVar29,pvVar32,pvVar33,pvVar37);
  invoke_virtual_then_call_helper_10494188((int)pvVar29,iVar26);
  pvVar31 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107002c,(void *)0x38,(void *)0xf0);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107002d,(void *)0x20,(void *)0xf0);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar26);
  pvVar32 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107002e,(void *)0x218,(void *)0xf0);
  pvVar33 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107002f,(void *)0x218,(void *)0xf0);
  pvVar37 = (void *)0x248;
  pvVar40 = (void *)0xf0;
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070030,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar31,pvVar32,pvVar37,pvVar40);
  iterate_and_remove_list_entry(pvVar31,pvVar33,pvVar37,pvVar40);
  invoke_virtual_then_call_helper_10494188((int)pvVar31,iVar26);
  pvVar32 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070031,(void *)0x38,(void *)0x120);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070032,(void *)0x20,(void *)0x120);
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar26);
  pvVar33 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070033,(void *)0x218,(void *)0x120);
  pvVar37 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070034,(void *)0x218,(void *)0x120);
  pvVar40 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070035,(void *)0x218,(void *)0x120);
  pvVar34 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070036,(void *)0x218,(void *)0x120);
  pvVar35 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070037,(void *)0x218,(void *)0x120);
  pvVar38 = (void *)0x248;
  pvVar41 = (void *)0x120;
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x1070038,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar32,pvVar33,pvVar38,pvVar41);
  iterate_and_remove_list_entry(pvVar32,pvVar37,pvVar38,pvVar41);
  iterate_and_remove_list_entry(pvVar32,pvVar40,pvVar38,pvVar41);
  iterate_and_remove_list_entry(pvVar32,pvVar34,pvVar38,pvVar41);
  iterate_and_remove_list_entry(pvVar32,pvVar35,pvVar38,pvVar41);
  invoke_virtual_then_call_helper_10494188((int)pvVar32,iVar26);
  pvVar33 = (void *)app_obj_factory((void *)param_1[1],(void *)0x1070039,(void *)0x38,(void *)0x150);
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107003a,(void *)0x20,(void *)0x150);
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar26);
  pvVar37 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107003b,(void *)0x218,(void *)0x150);
  pvVar40 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107003c,(void *)0x218,(void *)0x150);
  pvVar34 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107003d,(void *)0x218,(void *)0x150);
  pvVar35 = (void *)0x248;
  pvVar38 = (void *)0x150;
  iVar26 = (int)app_obj_factory((void *)param_1[1],(void *)0x107003e,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar33,pvVar37,pvVar35,pvVar38);
  iterate_and_remove_list_entry(pvVar33,pvVar40,pvVar35,pvVar38);
  iterate_and_remove_list_entry(pvVar33,pvVar34,pvVar35,pvVar38);
  invoke_virtual_then_call_helper_10494188((int)pvVar33,iVar26);
  pvVar40 = (void *)0x0;
  pvVar34 = (void *)0x0;
  pvVar37 = (void *)app_obj_factory((void *)param_1[1],(void *)0x107003f,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar37,pvVar1,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar2,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar3,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar4,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar5,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar6,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar7,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar25,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar9,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar10,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar11,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar12,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar13,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar14,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar15,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar16,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar17,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar18,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar24,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar19,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar20,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar21,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar22,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar23,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar27,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar28,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar29,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar31,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar32,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar33,pvVar40,pvVar34);
  iterate_and_remove_list_entry(pvVar37,pvVar8,pvVar40,pvVar34);
  graph_link_nextprev((int)pvVar25,(int)pvVar27,0xf,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar25,0x10,pvVar34);
  graph_link_nextprev((int)pvVar27,(int)pvVar28,0xf,pvVar34);
  graph_link_nextprev((int)pvVar28,(int)pvVar27,0x10,pvVar34);
  graph_link_nextprev((int)pvVar28,(int)pvVar29,0xf,pvVar34);
  graph_link_nextprev((int)pvVar29,(int)pvVar28,0x10,pvVar34);
  graph_link_nextprev((int)pvVar29,(int)pvVar31,0xf,pvVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar29,0x10,pvVar34);
  graph_link_nextprev((int)pvVar31,(int)pvVar32,0xf,pvVar34);
  graph_link_nextprev((int)pvVar32,(int)pvVar31,0x10,pvVar34);
  graph_link_nextprev((int)pvVar32,(int)pvVar33,0xf,pvVar34);
  graph_link_nextprev((int)pvVar33,(int)pvVar32,0x10,pvVar34);
  set_object_field_at_offset_0x10((void *)*param_1,pvVar37);
  return;
}
