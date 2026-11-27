/* @k10d init_object_graph_with_links @ 0x103a8b56
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Creates a container object, allocates ~75 sub-objects, and links them into a hierarchy
 *   via helper calls.
 * summary:
 *   The function sets a flag at offset 4 of param_1 to 1. It calls
 *   get_or_init_static_buffer_10495746 to obtain a context handle, then calls
 *   iterate_range_and_call_match with a ROM address (0x10567c1c) and the other parameters.
 *   It subsequently calls app_obj_factory approximately 75 times with unique IDs
 *   (0x2000000-0x2000049) and varying size/alignment parameters to allocate sub-objects. It
 *   then calls iterate_and_remove_list_entry repeatedly to link these sub-objects into a
 *   tree structure (grouping them under parents like pvVar2, pvVar3, etc.). Finally, it
 *   calls set_object_field_at_offset_0x10 and performs several virtual calls (slot 2) on
 *   specific sub-objects with arguments 0 or 1, likely initializing or enabling them.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_graph_with_links(cls_10565468 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  void *pvVar35;
  void *pvVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  void *pvVar40;
  void *pvVar41;
  void *pvVar42;
  void *pvVar43;
  void *pvVar44;
  void *pvVar45;
  void *pvVar46;
  void *pvVar47;
  void *pvVar48;
  void *pvVar49;
  void *pvVar50;
  void *pvVar51;
  void *pvVar52;
  void *pvVar53;
  void *pvVar54;
  void *pvVar55;
  void *pvVar56;
  void *pvVar57;
  void *pvVar58;
  void *pvVar59;
  void *pvVar60;
  void *pvVar61;
  void *pvVar62;
  void *pvVar63;
  void *pvVar64;
  void *pvVar65;
  void *pvVar66;
  void *pvVar67;
  void *pvVar68;
  void *pvVar69;
  void *pvVar70;
  void *pvVar71;
  void *pvVar72;
  void *pvVar73;
  void *pvVar74;
  void *pvVar75;
  
  param_1->field_0x4 = 1;
  pvVar1 = (void *)get_or_init_static_buffer_10495746();
  iterate_range_and_call_match(pvVar1,(uint *)0x10567c1c/*ROM*/,param_3,param_4);
  pvVar2 = (void *)app_obj_factory(pvVar1,(void *)0x2000000,0,0);
  pvVar3 = (void *)app_obj_factory(pvVar1,(void *)0x2000001,0,0);
  pvVar4 = (void *)app_obj_factory(pvVar1,(void *)0x2000002,0,0);
  pvVar5 = (void *)app_obj_factory(pvVar1,(void *)0x2000003,0,0);
  pvVar6 = (void *)app_obj_factory(pvVar1,(void *)0x2000004,0,0);
  pvVar7 = (void *)app_obj_factory(pvVar1,(void *)0x2000005,0,0);
  app_obj_factory(pvVar1,(void *)0x2000008,(void *)0x200,(void *)0xd8);
  pvVar8 = (void *)app_obj_factory(pvVar1,(void *)0x2000006,(void *)0x1b8,(void *)0xd8);
  pvVar9 = (void *)app_obj_factory(pvVar1,(void *)0x2000007,(void *)0x200,(void *)0xd8);
  pvVar10 = (void *)app_obj_factory(pvVar1,(void *)0x200002c,0,0);
  pvVar11 = (void *)app_obj_factory(pvVar1,(void *)0x200002d,0,0);
  pvVar12 = (void *)app_obj_factory(pvVar1,(void *)0x200002e,0,0);
  pvVar13 = (void *)app_obj_factory(pvVar1,(void *)0x200002f,0,0);
  pvVar14 = (void *)app_obj_factory(pvVar1,(void *)0x2000030,0,0);
  pvVar15 = (void *)app_obj_factory(pvVar1,(void *)0x2000031,0,0);
  pvVar16 = (void *)app_obj_factory(pvVar1,(void *)0x2000032,0,0);
  pvVar17 = (void *)app_obj_factory(pvVar1,(void *)0x2000033,0,0);
  pvVar18 = (void *)app_obj_factory(pvVar1,(void *)0x2000034,0,0);
  pvVar19 = (void *)app_obj_factory(pvVar1,(void *)0x2000035,0,0);
  pvVar20 = (void *)app_obj_factory(pvVar1,(void *)0x2000036,0,0);
  pvVar21 = (void *)app_obj_factory(pvVar1,(void *)0x2000037,0,0);
  pvVar22 = (void *)app_obj_factory(pvVar1,(void *)0x2000038,0,0);
  pvVar23 = (void *)app_obj_factory(pvVar1,(void *)0x2000039,0,0);
  pvVar24 = (void *)app_obj_factory(pvVar1,(void *)0x200003a,0,0);
  pvVar25 = (void *)app_obj_factory(pvVar1,(void *)0x200003b,0,0);
  pvVar26 = (void *)app_obj_factory(pvVar1,(void *)0x200003c,0,0);
  pvVar27 = (void *)app_obj_factory(pvVar1,(void *)0x200003d,0,0);
  pvVar28 = (void *)app_obj_factory(pvVar1,(void *)0x200003e,0,0);
  pvVar29 = (void *)app_obj_factory(pvVar1,(void *)0x200003f,0,0);
  pvVar30 = (void *)app_obj_factory(pvVar1,(void *)0x2000040,0,0);
  pvVar31 = (void *)app_obj_factory(pvVar1,(void *)0x2000041,0,0);
  pvVar32 = (void *)app_obj_factory(pvVar1,(void *)0x2000042,0,0);
  pvVar33 = (void *)app_obj_factory(pvVar1,(void *)0x2000043,0,0);
  pvVar34 = (void *)app_obj_factory(pvVar1,(void *)0x2000044,0,0);
  pvVar35 = (void *)app_obj_factory(pvVar1,(void *)0x2000045,0,0);
  pvVar36 = (void *)app_obj_factory(pvVar1,(void *)0x2000046,0,0);
  pvVar37 = (void *)app_obj_factory(pvVar1,(void *)0x2000047,0,0);
  pvVar38 = (void *)app_obj_factory(pvVar1,(void *)0x2000012,(void *)0x50,(void *)0xd8);
  pvVar39 = (void *)app_obj_factory(pvVar1,(void *)0x2000013,(void *)0x50,(void *)0xd8);
  pvVar40 = (void *)app_obj_factory(pvVar1,(void *)0x2000014,(void *)0x50,(void *)0xd8);
  pvVar41 = (void *)app_obj_factory(pvVar1,(void *)0x2000015,(void *)0x50,(void *)0xd8);
  pvVar42 = (void *)app_obj_factory(pvVar1,(void *)0x2000016,(void *)0x50,(void *)0xd8);
  pvVar43 = (void *)app_obj_factory(pvVar1,(void *)0x2000017,(void *)0x50,(void *)0xd8);
  pvVar44 = (void *)app_obj_factory(pvVar1,(void *)0x2000018,(void *)0x50,(void *)0xd8);
  pvVar45 = (void *)app_obj_factory(pvVar1,(void *)0x2000019,(void *)0x50,(void *)0xd8);
  pvVar46 = (void *)app_obj_factory(pvVar1,(void *)0x200001a,(void *)0x50,(void *)0xd8);
  pvVar47 = (void *)app_obj_factory(pvVar1,(void *)0x200001b,(void *)0x50,(void *)0xd8);
  pvVar48 = (void *)app_obj_factory(pvVar1,(void *)0x200001c,(void *)0x38,(void *)0xd8);
  pvVar49 = (void *)app_obj_factory(pvVar1,(void *)0x2000027,(void *)0x5c,(void *)0x120);
  pvVar50 = (void *)app_obj_factory(pvVar1,(void *)0x2000009,(void *)0x110,(void *)0x150);
  pvVar51 = (void *)app_obj_factory(pvVar1,(void *)0x200000a,(void *)0x110,(void *)0x150);
  pvVar52 = (void *)app_obj_factory(pvVar1,(void *)0x200000b,(void *)0x110,(void *)0x150);
  pvVar53 = (void *)app_obj_factory(pvVar1,(void *)0x200000c,(void *)0x110,(void *)0x150);
  pvVar54 = (void *)app_obj_factory(pvVar1,(void *)0x200000d,(void *)0x110,(void *)0x150);
  pvVar55 = (void *)app_obj_factory(pvVar1,(void *)0x200000e,(void *)0x110,(void *)0x150);
  pvVar56 = (void *)app_obj_factory(pvVar1,(void *)0x200000f,(void *)0x110,(void *)0x150);
  pvVar57 = (void *)app_obj_factory(pvVar1,(void *)0x2000010,(void *)0x110,(void *)0x150);
  pvVar58 = (void *)app_obj_factory(pvVar1,(void *)0x2000011,(void *)0x110,(void *)0x150);
  pvVar59 = (void *)app_obj_factory(pvVar1,(void *)0x200001d,(void *)0x11c,(void *)0x48);
  pvVar60 = (void *)app_obj_factory(pvVar1,(void *)0x200001e,(void *)0x11c,(void *)0x48);
  pvVar61 = (void *)app_obj_factory(pvVar1,(void *)0x200001f,(void *)0x11c,(void *)0x48);
  pvVar62 = (void *)app_obj_factory(pvVar1,(void *)0x2000020,(void *)0x11c,(void *)0x48);
  pvVar63 = (void *)app_obj_factory(pvVar1,(void *)0x2000021,(void *)0x11c,(void *)0x48);
  pvVar64 = (void *)app_obj_factory(pvVar1,(void *)0x2000022,(void *)0x11c,(void *)0x48);
  pvVar65 = (void *)app_obj_factory(pvVar1,(void *)0x2000023,(void *)0xe0,(void *)0x90);
  pvVar66 = (void *)app_obj_factory(pvVar1,(void *)0x2000024,(void *)0x20,(void *)0x18);
  pvVar67 = (void *)app_obj_factory(pvVar1,(void *)0x2000025,(void *)0x80,(void *)0x18);
  pvVar68 = (void *)app_obj_factory(pvVar1,(void *)0x2000026,(void *)0x80,(void *)0x18);
  pvVar69 = (void *)app_obj_factory(pvVar1,(void *)0x2000048,(void *)0x1b8,(void *)0x198);
  pvVar70 = (void *)app_obj_factory(pvVar1,(void *)0x2000049,(void *)0x20,(void *)0x198);
  pvVar71 = (void *)app_obj_factory(pvVar1,(void *)0x2000028,(void *)0xe0,(void *)0xd8);
  pvVar72 = (void *)app_obj_factory(pvVar1,(void *)0x2000029,(void *)0x170,(void *)0xd8);
  pvVar73 = (void *)app_obj_factory(pvVar1,(void *)0x200002a,(void *)0x128,(void *)0x90);
  pvVar74 = (void *)0x128;
  pvVar75 = (void *)0x120;
  pvVar1 = (void *)app_obj_factory(pvVar1,(void *)0x200002b,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar3,pvVar50,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar51,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar52,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar53,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar54,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar55,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar56,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar57,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar3,pvVar58,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar59,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar60,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar61,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar62,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar63,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar4,pvVar64,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar38,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar39,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar40,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar41,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar42,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar43,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar44,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar45,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar46,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar47,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar48,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar5,pvVar49,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar8,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar9,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar10,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar11,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar12,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar13,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar14,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar15,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar16,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar17,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar18,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar19,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar20,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar21,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar22,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar23,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar24,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar25,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar26,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar27,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar28,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar29,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar30,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar31,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar32,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar33,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar34,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar35,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar36,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar6,pvVar37,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar7,pvVar71,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar7,pvVar72,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar7,pvVar73,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar7,pvVar1,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar3,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar4,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar5,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar6,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar7,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar65,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar66,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar67,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar68,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar49,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar69,pvVar74,pvVar75);
  iterate_and_remove_list_entry(pvVar2,pvVar70,pvVar74,pvVar75);
  set_object_field_at_offset_0x10(&param_1->field5_0x8,pvVar2);
  (((vtbl_entry*)(*(int *)((int)pvVar65 + 0xc)))[1].fn)
            ((int)pvVar65 + (int)*(short *)(*(int *)((int)pvVar65 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar69 + 0xc)))[1].fn)
            ((int)pvVar69 + (int)*(short *)(*(int *)((int)pvVar69 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar70 + 0xc)))[1].fn)
            ((int)pvVar70 + (int)*(short *)(*(int *)((int)pvVar70 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar3 + 0xc)))[1].fn)
            ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar5 + 0xc)))[1].fn)
            ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar4 + 0xc)))[1].fn)
            ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar6 + 0xc)))[1].fn)
            ((int)pvVar6 + (int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar66 + 0xc)))[1].fn)
            ((int)pvVar66 + (int)*(short *)(*(int *)((int)pvVar66 + 0xc) + 8),1);
  (((vtbl_entry*)(*(int *)((int)pvVar67 + 0xc)))[1].fn)
            ((int)pvVar67 + (int)*(short *)(*(int *)((int)pvVar67 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar68 + 0xc)))[1].fn)
            ((int)pvVar68 + (int)*(short *)(*(int *)((int)pvVar68 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar49 + 0xc)))[1].fn)
            ((int)pvVar49 + (int)*(short *)(*(int *)((int)pvVar49 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[1].fn)
            ((int)pvVar7 + (int)*(short *)(*(int *)((int)pvVar7 + 0xc) + 8),0);
  return;
}
