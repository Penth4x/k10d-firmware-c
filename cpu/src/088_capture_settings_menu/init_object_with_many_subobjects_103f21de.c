/* @k10d init_object_with_many_subobjects_103f21de @ 0x103f21de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Initializes a large object by creating and linking numerous sub-objects via a factory
 *   function.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs (0x18d0001 to
 *   0x18d00af) to create sub-objects. It then uses iterate_and_remove_list_entry,
 *   invoke_virtual_then_call_helper_10494188, and graph_link_nextprev to link these sub-
 *   objects together in a specific structure. Finally, it calls
 *   set_object_field_at_offset_0x10 to register the initialized structure. The specific
 *   camera subsystem is not identifiable from the mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_many_subobjects_103f21de(cls_10597c80 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar14;
  int iVar15;
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
  void *pvVar76;
  void *pvVar77;
  void *pvVar78;
  void *pvVar79;
  void *pvVar80;
  void *pvVar81;
  void *pvVar82;
  void *pvVar83;
  void *pvVar84;
  void *pvVar85;
  void *pvVar86;
  void *pvVar87;
  void *pvVar88;
  void *pvVar89;
  void *pvVar90;
  void *pvVar91;
  void *pvVar92;
  void *pvVar93;
  void *pvVar94;
  void *pvVar95;
  void *pvVar96;
  void *pvVar97;
  void *pvVar98;
  void *pvVar99;
  void *pvVar100;
  void *pvVar101;
  void *pvVar102;
  void *pvVar103;
  void *pvVar104;
  void *pvVar105;
  void *pvVar106;
  void *pvVar107;
  void *pvVar108;
  void *pvVar109;
  void *pvVar110;
  void *pvVar111;
  void *pvVar112;
  void *pvVar113;
  void *pvVar114;
  void *pvVar115;
  void *pvVar116;
  void *pvVar117;
  void *pvVar118;
  void *pvVar119;
  void *pvVar120;
  void *pvVar121;
  void *pvVar122;
  void *pvVar123;
  void *pvVar124;
  void *pvVar125;
  void *pvVar126;
  void *pvVar127;
  void *pvVar128;
  void *pvVar129;
  void *pvVar130;
  void *pvVar131;
  void *pvVar132;
  void *pvVar133;
  void *pvVar134;
  void *pvVar135;
  void *pvVar136;
  void *pvVar137;
  void *pvVar138;
  void *pvVar139;
  void *pvVar140;
  void *pvVar141;
  void *pvVar142;
  void *pvVar143;
  void *pvVar144;
  void *pvVar145;
  void *pvVar146;
  void *pvVar147;
  void *pvVar148;
  void *pvVar149;
  void *pvVar150;
  void *pvVar151;
  void *pvVar152;
  void *pvVar153;
  void *pvVar154;
  void *pvVar155;
  void *pvVar156;
  void *pvVar157;
  void *pvVar158;
  void *pvVar159;
  void *pvVar160;
  void *pvVar161;
  void *pvVar162;
  void *pvVar163;
  void *pvVar164;
  void *pvVar165;
  void *pvVar166;
  void *pvVar167;
  void *pvVar168;
  void *pvVar169;
  void *pvVar170;
  void *pvVar171;
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_1054e400/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000a,(void *)0x20,(void *)0x48);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000b,(void *)0x38,(void *)0x18);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000c,(void *)0x1b8,(void *)0x18);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000d,(void *)0x1b8,(void *)0x18);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000e,(void *)0x1e8,(void *)0x18));
  pvVar168 = (void *)0x1a0;
  pvVar170 = (void *)0x18;
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d000f,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar11,pvVar12,pvVar168,pvVar170);
  iterate_and_remove_list_entry(pvVar11,pvVar13,pvVar168,pvVar170);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar14);
  invoke_virtual_then_call_helper_10494188((int)pvVar11,iVar15);
  graph_link_nextprev((int)pvVar12,(int)pvVar13,0xd,pvVar170);
  graph_link_nextprev((int)pvVar12,(int)pvVar13,0xe,pvVar170);
  graph_link_nextprev((int)pvVar13,(int)pvVar12,0xd,pvVar170);
  graph_link_nextprev((int)pvVar13,(int)pvVar12,0xe,pvVar170);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0010,(void *)0x2c,(void *)0x138);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0011,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0059,(void *)0x248,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar12,iVar14);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0012,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar168 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0013,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar168 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar168 + 0xc) + 8) + (int)pvVar168,0);
  pvVar170 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0014,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar170 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar170 + 0xc) + 8) + (int)pvVar170,0);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0015,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar16 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar16 + 0xc) + 8) + (int)pvVar16,0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0016,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar17 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar17 + 0xc) + 8) + (int)pvVar17,0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0017,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar18 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar18 + 0xc) + 8) + (int)pvVar18,0);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0018,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar19 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0019,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001a,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar21 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001b,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001c,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001d,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001e,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar25 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar25 + 0xc) + 8) + (int)pvVar25,0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d001f,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar26 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar26 + 0xc) + 8) + (int)pvVar26,0);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0020,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar27 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0021,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar28 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0022,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0023,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar30 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar30 + 0xc) + 8) + (int)pvVar30,0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0024,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar31 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar31 + 0xc) + 8) + (int)pvVar31,0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0025,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar32 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar32 + 0xc) + 8) + (int)pvVar32,0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0026,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar33 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar33 + 0xc) + 8) + (int)pvVar33,0);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0027,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar34 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar34 + 0xc) + 8) + (int)pvVar34,0);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0028,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar35 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar35 + 0xc) + 8) + (int)pvVar35,0);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0029,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar36 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar36 + 0xc) + 8) + (int)pvVar36,0);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002a,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar37 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar37 + 0xc) + 8) + (int)pvVar37,0);
  pvVar38 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002b,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar38 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar38 + 0xc) + 8) + (int)pvVar38,0);
  pvVar39 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002c,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar39 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar39 + 0xc) + 8) + (int)pvVar39,0);
  pvVar40 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002d,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar40 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar40 + 0xc) + 8) + (int)pvVar40,0);
  pvVar41 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002e,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar41 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar41 + 0xc) + 8) + (int)pvVar41,0);
  pvVar42 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d002f,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar42 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar42 + 0xc) + 8) + (int)pvVar42,0);
  pvVar43 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0030,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar43 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar43 + 0xc) + 8) + (int)pvVar43,0);
  pvVar44 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0031,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar44 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar44 + 0xc) + 8) + (int)pvVar44,0);
  pvVar45 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0032,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar45 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar45 + 0xc) + 8) + (int)pvVar45,0);
  pvVar46 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0033,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar46 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar46 + 0xc) + 8) + (int)pvVar46,0);
  pvVar47 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0034,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar47 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar47 + 0xc) + 8) + (int)pvVar47,0);
  pvVar48 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0035,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar48 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar48 + 0xc) + 8) + (int)pvVar48,0);
  pvVar49 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0036,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar49 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar49 + 0xc) + 8) + (int)pvVar49,0);
  pvVar50 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0037,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar50 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar50 + 0xc) + 8) + (int)pvVar50,0);
  pvVar51 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0038,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar51 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar51 + 0xc) + 8) + (int)pvVar51,0);
  pvVar52 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0039,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar52 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar52 + 0xc) + 8) + (int)pvVar52,0);
  pvVar53 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003a,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar53 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar53 + 0xc) + 8) + (int)pvVar53,0);
  pvVar54 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003b,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar54 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar54 + 0xc) + 8) + (int)pvVar54,0);
  pvVar55 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003c,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar55 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar55 + 0xc) + 8) + (int)pvVar55,0);
  pvVar56 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003d,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar56 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar56 + 0xc) + 8) + (int)pvVar56,0);
  pvVar57 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003e,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar57 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar57 + 0xc) + 8) + (int)pvVar57,0);
  pvVar58 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d003f,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar58 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar58 + 0xc) + 8) + (int)pvVar58,0);
  pvVar59 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0040,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar59 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar59 + 0xc) + 8) + (int)pvVar59,0);
  pvVar60 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0041,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar60 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar60 + 0xc) + 8) + (int)pvVar60,0);
  pvVar61 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0042,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar61 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar61 + 0xc) + 8) + (int)pvVar61,0);
  pvVar62 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0043,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar62 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar62 + 0xc) + 8) + (int)pvVar62,0);
  pvVar63 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0044,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar63 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar63 + 0xc) + 8) + (int)pvVar63,0);
  pvVar64 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0045,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar64 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar64 + 0xc) + 8) + (int)pvVar64,0);
  pvVar65 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0046,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar65 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar65 + 0xc) + 8) + (int)pvVar65,0);
  pvVar66 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0047,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar66 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar66 + 0xc) + 8) + (int)pvVar66,0);
  pvVar67 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0048,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar67 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar67 + 0xc) + 8) + (int)pvVar67,0);
  pvVar68 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0049,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar68 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar68 + 0xc) + 8) + (int)pvVar68,0);
  pvVar69 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004a,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar69 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar69 + 0xc) + 8) + (int)pvVar69,0);
  pvVar70 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004b,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar70 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar70 + 0xc) + 8) + (int)pvVar70,0);
  pvVar71 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004c,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar71 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar71 + 0xc) + 8) + (int)pvVar71,0);
  pvVar72 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004d,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar72 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar72 + 0xc) + 8) + (int)pvVar72,0);
  pvVar73 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004e,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar73 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar73 + 0xc) + 8) + (int)pvVar73,0);
  pvVar74 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d004f,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar74 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar74 + 0xc) + 8) + (int)pvVar74,0);
  pvVar75 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0050,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar75 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar75 + 0xc) + 8) + (int)pvVar75,0);
  pvVar76 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0051,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar76 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar76 + 0xc) + 8) + (int)pvVar76,0);
  pvVar77 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0052,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar77 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar77 + 0xc) + 8) + (int)pvVar77,0);
  pvVar78 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0053,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar78 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar78 + 0xc) + 8) + (int)pvVar78,0);
  pvVar79 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0054,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar79 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar79 + 0xc) + 8) + (int)pvVar79,0);
  pvVar80 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0055,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar80 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar80 + 0xc) + 8) + (int)pvVar80,0);
  pvVar81 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0056,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar81 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar81 + 0xc) + 8) + (int)pvVar81,0);
  pvVar82 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0057,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar82 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar82 + 0xc) + 8) + (int)pvVar82,0);
  pvVar83 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0058,(void *)0x74,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar83 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar83 + 0xc) + 8) + (int)pvVar83,0);
  pvVar84 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005a,(void *)0x200,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar84 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar84 + 0xc) + 8) + (int)pvVar84,0);
  pvVar85 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005b,(void *)0x2c,(void *)0x168);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005c,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar85,iVar14);
  iVar14 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a4,(void *)0x248,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar85,iVar14);
  pvVar86 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005d,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar86 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar86 + 0xc) + 8) + (int)pvVar86,0);
  pvVar87 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005e,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar87 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar87 + 0xc) + 8) + (int)pvVar87,0);
  pvVar88 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d005f,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar88 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar88 + 0xc) + 8) + (int)pvVar88,0);
  pvVar89 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0060,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar89 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar89 + 0xc) + 8) + (int)pvVar89,0);
  pvVar90 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0061,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar90 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar90 + 0xc) + 8) + (int)pvVar90,0);
  pvVar91 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0062,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar91 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar91 + 0xc) + 8) + (int)pvVar91,0);
  pvVar92 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0063,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar92 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar92 + 0xc) + 8) + (int)pvVar92,0);
  pvVar93 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0064,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar93 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar93 + 0xc) + 8) + (int)pvVar93,0);
  pvVar94 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0065,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar94 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar94 + 0xc) + 8) + (int)pvVar94,0);
  pvVar95 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0066,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar95 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar95 + 0xc) + 8) + (int)pvVar95,0);
  pvVar96 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0067,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar96 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar96 + 0xc) + 8) + (int)pvVar96,0);
  pvVar97 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0068,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar97 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar97 + 0xc) + 8) + (int)pvVar97,0);
  pvVar98 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0069,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar98 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar98 + 0xc) + 8) + (int)pvVar98,0);
  pvVar99 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006a,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar99 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar99 + 0xc) + 8) + (int)pvVar99,0);
  pvVar100 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006b,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar100 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar100 + 0xc) + 8) + (int)pvVar100,0);
  pvVar101 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006c,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar101 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar101 + 0xc) + 8) + (int)pvVar101,0);
  pvVar102 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006d,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar102 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar102 + 0xc) + 8) + (int)pvVar102,0);
  pvVar103 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006e,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar103 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar103 + 0xc) + 8) + (int)pvVar103,0);
  pvVar104 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d006f,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar104 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar104 + 0xc) + 8) + (int)pvVar104,0);
  pvVar105 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0070,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar105 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar105 + 0xc) + 8) + (int)pvVar105,0);
  pvVar106 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0071,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar106 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar106 + 0xc) + 8) + (int)pvVar106,0);
  pvVar107 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0072,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar107 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar107 + 0xc) + 8) + (int)pvVar107,0);
  pvVar108 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0073,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar108 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar108 + 0xc) + 8) + (int)pvVar108,0);
  pvVar109 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0074,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar109 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar109 + 0xc) + 8) + (int)pvVar109,0);
  pvVar110 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0075,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar110 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar110 + 0xc) + 8) + (int)pvVar110,0);
  pvVar111 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0076,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar111 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar111 + 0xc) + 8) + (int)pvVar111,0);
  pvVar112 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0077,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar112 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar112 + 0xc) + 8) + (int)pvVar112,0);
  pvVar113 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0078,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar113 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar113 + 0xc) + 8) + (int)pvVar113,0);
  pvVar114 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0079,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar114 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar114 + 0xc) + 8) + (int)pvVar114,0);
  pvVar115 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007a,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar115 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar115 + 0xc) + 8) + (int)pvVar115,0);
  pvVar116 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007b,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar116 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar116 + 0xc) + 8) + (int)pvVar116,0);
  pvVar117 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007c,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar117 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar117 + 0xc) + 8) + (int)pvVar117,0);
  pvVar118 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007d,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar118 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar118 + 0xc) + 8) + (int)pvVar118,0);
  pvVar119 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007e,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar119 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar119 + 0xc) + 8) + (int)pvVar119,0);
  pvVar120 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d007f,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar120 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar120 + 0xc) + 8) + (int)pvVar120,0);
  pvVar121 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0080,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar121 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar121 + 0xc) + 8) + (int)pvVar121,0);
  pvVar122 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0081,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar122 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar122 + 0xc) + 8) + (int)pvVar122,0);
  pvVar123 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0082,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar123 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar123 + 0xc) + 8) + (int)pvVar123,0);
  pvVar124 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0083,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar124 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar124 + 0xc) + 8) + (int)pvVar124,0);
  pvVar125 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0084,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar125 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar125 + 0xc) + 8) + (int)pvVar125,0);
  pvVar126 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0085,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar126 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar126 + 0xc) + 8) + (int)pvVar126,0);
  pvVar127 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0086,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar127 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar127 + 0xc) + 8) + (int)pvVar127,0);
  pvVar128 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0087,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar128 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar128 + 0xc) + 8) + (int)pvVar128,0);
  pvVar129 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0088,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar129 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar129 + 0xc) + 8) + (int)pvVar129,0);
  pvVar130 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0089,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar130 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar130 + 0xc) + 8) + (int)pvVar130,0);
  pvVar131 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008a,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar131 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar131 + 0xc) + 8) + (int)pvVar131,0);
  pvVar132 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008b,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar132 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar132 + 0xc) + 8) + (int)pvVar132,0);
  pvVar133 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008c,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar133 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar133 + 0xc) + 8) + (int)pvVar133,0);
  pvVar134 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008d,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar134 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar134 + 0xc) + 8) + (int)pvVar134,0);
  pvVar135 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008e,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar135 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar135 + 0xc) + 8) + (int)pvVar135,0);
  pvVar136 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d008f,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar136 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar136 + 0xc) + 8) + (int)pvVar136,0);
  pvVar137 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0090,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar137 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar137 + 0xc) + 8) + (int)pvVar137,0);
  pvVar138 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0091,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar138 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar138 + 0xc) + 8) + (int)pvVar138,0);
  pvVar139 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0092,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar139 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar139 + 0xc) + 8) + (int)pvVar139,0);
  pvVar140 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0093,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar140 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar140 + 0xc) + 8) + (int)pvVar140,0);
  pvVar141 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0094,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar141 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar141 + 0xc) + 8) + (int)pvVar141,0);
  pvVar142 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0095,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar142 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar142 + 0xc) + 8) + (int)pvVar142,0);
  pvVar143 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0096,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar143 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar143 + 0xc) + 8) + (int)pvVar143,0);
  pvVar144 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0097,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar144 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar144 + 0xc) + 8) + (int)pvVar144,0);
  pvVar145 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0098,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar145 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar145 + 0xc) + 8) + (int)pvVar145,0);
  pvVar146 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d0099,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar146 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar146 + 0xc) + 8) + (int)pvVar146,0);
  pvVar147 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009a,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar147 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar147 + 0xc) + 8) + (int)pvVar147,0);
  pvVar148 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009b,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar148 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar148 + 0xc) + 8) + (int)pvVar148,0);
  pvVar149 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009c,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar149 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar149 + 0xc) + 8) + (int)pvVar149,0);
  pvVar150 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009d,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar150 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar150 + 0xc) + 8) + (int)pvVar150,0);
  pvVar151 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009e,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar151 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar151 + 0xc) + 8) + (int)pvVar151,0);
  pvVar152 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d009f,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar152 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar152 + 0xc) + 8) + (int)pvVar152,0);
  pvVar153 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a0,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar153 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar153 + 0xc) + 8) + (int)pvVar153,0);
  pvVar154 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a1,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar154 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar154 + 0xc) + 8) + (int)pvVar154,0);
  pvVar155 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a2,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar155 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar155 + 0xc) + 8) + (int)pvVar155,0);
  pvVar156 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a3,(void *)0x74,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar156 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar156 + 0xc) + 8) + (int)pvVar156,0);
  pvVar157 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a5,(void *)0x200,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar157 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar157 + 0xc) + 8) + (int)pvVar157,0);
  pvVar158 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a6,(void *)0x11c,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar158 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar158 + 0xc) + 8) + (int)pvVar158,0);
  pvVar159 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a8,(void *)0x11c,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar159 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar159 + 0xc) + 8) + (int)pvVar159,0);
  pvVar160 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a7,(void *)0x11c,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar160 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar160 + 0xc) + 8) + (int)pvVar160,0);
  pvVar161 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00a9,(void *)0x11c,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar161 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar161 + 0xc) + 8) + (int)pvVar161,0);
  pvVar162 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00aa,(void *)0x1b8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar162 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar162 + 0xc) + 8) + (int)pvVar162,0);
  pvVar163 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00ab,(void *)0x200,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar163 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar163 + 0xc) + 8) + (int)pvVar163,0);
  pvVar164 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00ac,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar164 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar164 + 0xc) + 8) + (int)pvVar164,0);
  pvVar165 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00ad,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar165 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar165 + 0xc) + 8) + (int)pvVar165,0);
  pvVar166 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00ae,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar166 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar166 + 0xc) + 8) + (int)pvVar166,0);
  pvVar169 = (void *)0x0;
  pvVar171 = (void *)0x0;
  pvVar167 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18d00af,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar167,pvVar1,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar2,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar3,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar4,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar5,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar6,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar7,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar8,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar9,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar10,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar11,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar12,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar13,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar168,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar170,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar16,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar17,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar18,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar19,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar20,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar21,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar22,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar23,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar24,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar25,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar26,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar27,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar28,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar29,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar30,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar31,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar32,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar33,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar34,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar35,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar36,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar37,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar38,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar39,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar40,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar41,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar42,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar43,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar44,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar45,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar46,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar47,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar48,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar49,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar50,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar51,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar52,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar53,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar54,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar55,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar56,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar57,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar58,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar59,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar60,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar61,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar62,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar63,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar64,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar65,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar66,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar67,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar68,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar69,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar70,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar71,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar72,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar73,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar74,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar75,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar76,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar77,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar78,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar79,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar80,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar81,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar82,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar83,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar84,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar85,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar86,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar87,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar88,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar89,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar90,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar91,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar92,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar93,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar94,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar95,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar96,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar97,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar98,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar99,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar100,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar101,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar102,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar103,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar104,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar105,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar106,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar107,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar108,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar109,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar110,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar111,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar112,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar113,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar114,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar115,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar116,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar117,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar118,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar119,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar120,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar121,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar122,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar123,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar124,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar125,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar126,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar127,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar128,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar129,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar130,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar131,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar132,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar133,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar134,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar135,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar136,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar137,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar138,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar139,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar140,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar141,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar142,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar143,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar144,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar145,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar146,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar147,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar148,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar149,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar150,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar151,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar152,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar153,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar154,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar155,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar156,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar157,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar158,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar159,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar160,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar161,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar162,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar163,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar164,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar165,pvVar169,pvVar171);
  iterate_and_remove_list_entry(pvVar167,pvVar166,pvVar169,pvVar171);
  graph_link_nextprev((int)pvVar11,(int)pvVar12,0xf,pvVar171);
  graph_link_nextprev((int)pvVar11,(int)pvVar85,0x10,pvVar171);
  graph_link_nextprev((int)pvVar12,(int)pvVar85,0xf,pvVar171);
  graph_link_nextprev((int)pvVar12,(int)pvVar11,0x10,pvVar171);
  graph_link_nextprev((int)pvVar85,(int)pvVar11,0xf,pvVar171);
  graph_link_nextprev((int)pvVar85,(int)pvVar12,0x10,pvVar171);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar167));
  return;
}
