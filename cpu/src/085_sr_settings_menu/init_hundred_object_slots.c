/* @k10d init_hundred_object_slots @ 0x103ebed6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 085_sr_settings_menu (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a large sequence of object slots within a parent container.
 * summary:
 *   The function calls app_obj_factory approximately 160 times with incrementing IDs
 *   (0x1910001-0x19100a9) to allocate sub-objects of varying sizes. It invokes virtual
 *   constructors on most of these objects and then registers them all with a final object
 *   (pvVar163) via iterate_and_remove_list_entry. Finally, it links the container to the
 *   parent object using set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_hundred_object_slots(cls_10597b5c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)&DAT_1055087c/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910002,(void *)0x10,(void *)0x80);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910003,(void *)0x10,(void *)0x188);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910004,(void *)0x20,(void *)0x198);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910005,(void *)0x80,(void *)0x198);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910006,(void *)0x1a0,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar6 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8) + (int)pvVar6,0);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910007,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar7 + 0xc) + 8) + (int)pvVar7,0);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910008,(void *)0x20,(void *)0x18);
  call_helper_and_set_flag_104b7726(pvVar8,0x240,1);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910009,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar9 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar9 + 0xc) + 8) + (int)pvVar9,0);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000a,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar10 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar10 + 0xc) + 8) + (int)pvVar10,0);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000b,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000c,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar12 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar12 + 0xc) + 8) + (int)pvVar12,0);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000d,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar13 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000e,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar14 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar14 + 0xc) + 8) + (int)pvVar14,0);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191000f,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar15 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar15 + 0xc) + 8) + (int)pvVar15,0);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910010,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar16 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar16 + 0xc) + 8) + (int)pvVar16,0);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910011,(void *)0x20,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar17 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar17 + 0xc) + 8) + (int)pvVar17,0);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910012,(void *)0xf8,(void *)0x90);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910013,(void *)0x140,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar19 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910014,(void *)0x170,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910015,(void *)0x158,(void *)0x90);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910016,(void *)0x128,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910017,(void *)0x128,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910018,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910019,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar25 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar25 + 0xc) + 8) + (int)pvVar25,0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001a,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar26 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar26 + 0xc) + 8) + (int)pvVar26,0);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001b,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar27 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001c,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar28 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001d,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001e,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar30 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar30 + 0xc) + 8) + (int)pvVar30,0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191001f,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar31 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar31 + 0xc) + 8) + (int)pvVar31,0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910020,(void *)0x98,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar32 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar32 + 0xc) + 8) + (int)pvVar32,0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910021,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar33 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar33 + 0xc) + 8) + (int)pvVar33,0);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910022,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar34 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar34 + 0xc) + 8) + (int)pvVar34,0);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910023,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar35 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar35 + 0xc) + 8) + (int)pvVar35,0);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910024,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar36 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar36 + 0xc) + 8) + (int)pvVar36,0);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910025,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar37 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar37 + 0xc) + 8) + (int)pvVar37,0);
  pvVar38 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910026,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar38 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar38 + 0xc) + 8) + (int)pvVar38,0);
  pvVar39 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910027,(void *)0x98,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar39 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar39 + 0xc) + 8) + (int)pvVar39,0);
  pvVar40 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910028,(void *)0x1a0,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar40 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar40 + 0xc) + 8) + (int)pvVar40,0);
  pvVar41 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910029,(void *)0x1a0,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar41 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar41 + 0xc) + 8) + (int)pvVar41,0);
  pvVar42 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002a,(void *)0x1a0,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar42 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar42 + 0xc) + 8) + (int)pvVar42,0);
  pvVar43 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002b,(void *)0x1a0,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar43 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar43 + 0xc) + 8) + (int)pvVar43,0);
  pvVar44 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002c,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar44 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar44 + 0xc) + 8) + (int)pvVar44,0);
  pvVar45 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002d,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar45 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar45 + 0xc) + 8) + (int)pvVar45,0);
  pvVar46 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002e,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar46 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar46 + 0xc) + 8) + (int)pvVar46,0);
  pvVar47 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191002f,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar47 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar47 + 0xc) + 8) + (int)pvVar47,0);
  pvVar48 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910030,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar48 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar48 + 0xc) + 8) + (int)pvVar48,0);
  pvVar49 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910031,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar49 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar49 + 0xc) + 8) + (int)pvVar49,0);
  pvVar50 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910032,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar50 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar50 + 0xc) + 8) + (int)pvVar50,0);
  pvVar51 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910033,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar51 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar51 + 0xc) + 8) + (int)pvVar51,0);
  pvVar52 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910034,(void *)0x1e8,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar52 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar52 + 0xc) + 8) + (int)pvVar52,0);
  pvVar53 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910035,(void *)0xf8,(void *)0xc0);
  pvVar54 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910036,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar54 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar54 + 0xc) + 8) + (int)pvVar54,0);
  pvVar55 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910037,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar55 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar55 + 0xc) + 8) + (int)pvVar55,0);
  pvVar56 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910038,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar56 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar56 + 0xc) + 8) + (int)pvVar56,0);
  pvVar57 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910039,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar57 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar57 + 0xc) + 8) + (int)pvVar57,0);
  pvVar58 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003a,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar58 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar58 + 0xc) + 8) + (int)pvVar58,0);
  pvVar59 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003b,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar59 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar59 + 0xc) + 8) + (int)pvVar59,0);
  pvVar60 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003c,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar60 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar60 + 0xc) + 8) + (int)pvVar60,0);
  pvVar61 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003d,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar61 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar61 + 0xc) + 8) + (int)pvVar61,0);
  pvVar62 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003e,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar62 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar62 + 0xc) + 8) + (int)pvVar62,0);
  pvVar63 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191003f,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar63 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar63 + 0xc) + 8) + (int)pvVar63,0);
  pvVar64 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910040,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar64 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar64 + 0xc) + 8) + (int)pvVar64,0);
  pvVar65 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910041,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar65 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar65 + 0xc) + 8) + (int)pvVar65,0);
  pvVar66 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910042,(void *)0x128,(void *)0xc0);
  (((vtbl_entry*)(*(int *)((int)pvVar66 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar66 + 0xc) + 8) + (int)pvVar66,0);
  pvVar67 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910047,(void *)0x1a0,(void *)0x90);
  pvVar68 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910048,(void *)0x1e8,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar68 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar68 + 0xc) + 8) + (int)pvVar68,0);
  pvVar69 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910049,(void *)0x218,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar69 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar69 + 0xc) + 8) + (int)pvVar69,0);
  pvVar70 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004a,(void *)0x248,(void *)0x90);
  (((vtbl_entry*)(*(int *)((int)pvVar70 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar70 + 0xc) + 8) + (int)pvVar70,0);
  pvVar71 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004b,(void *)0x200,(void *)0x90);
  pvVar72 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004c,(void *)0x230,(void *)0x90);
  pvVar73 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004d,(void *)0x20,(void *)0xf0);
  pvVar74 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004e,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar74 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar74 + 0xc) + 8) + (int)pvVar74,0);
  pvVar75 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191004f,(void *)0x140,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar75 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar75 + 0xc) + 8) + (int)pvVar75,0);
  pvVar76 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910050,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar76 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar76 + 0xc) + 8) + (int)pvVar76,0);
  pvVar77 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910051,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar77 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar77 + 0xc) + 8) + (int)pvVar77,0);
  pvVar78 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910052,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar78 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar78 + 0xc) + 8) + (int)pvVar78,0);
  pvVar79 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910053,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar79 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar79 + 0xc) + 8) + (int)pvVar79,0);
  pvVar80 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910054,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar80 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar80 + 0xc) + 8) + (int)pvVar80,0);
  pvVar81 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910055,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar81 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar81 + 0xc) + 8) + (int)pvVar81,0);
  pvVar82 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910056,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar82 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar82 + 0xc) + 8) + (int)pvVar82,0);
  pvVar83 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910057,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar83 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar83 + 0xc) + 8) + (int)pvVar83,0);
  pvVar84 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910058,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar84 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar84 + 0xc) + 8) + (int)pvVar84,0);
  pvVar85 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910059,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar85 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar85 + 0xc) + 8) + (int)pvVar85,0);
  pvVar86 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005a,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar86 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar86 + 0xc) + 8) + (int)pvVar86,0);
  pvVar87 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005b,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar87 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar87 + 0xc) + 8) + (int)pvVar87,0);
  pvVar88 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005c,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar88 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar88 + 0xc) + 8) + (int)pvVar88,0);
  pvVar89 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005d,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar89 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar89 + 0xc) + 8) + (int)pvVar89,0);
  pvVar90 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005e,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar90 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar90 + 0xc) + 8) + (int)pvVar90,0);
  pvVar91 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191005f,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar91 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar91 + 0xc) + 8) + (int)pvVar91,0);
  pvVar92 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910060,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar92 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar92 + 0xc) + 8) + (int)pvVar92,0);
  pvVar93 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910061,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar93 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar93 + 0xc) + 8) + (int)pvVar93,0);
  pvVar94 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910062,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar94 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar94 + 0xc) + 8) + (int)pvVar94,0);
  pvVar95 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910063,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar95 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar95 + 0xc) + 8) + (int)pvVar95,0);
  pvVar96 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910064,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar96 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar96 + 0xc) + 8) + (int)pvVar96,0);
  pvVar97 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910065,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar97 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar97 + 0xc) + 8) + (int)pvVar97,0);
  pvVar98 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910066,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar98 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar98 + 0xc) + 8) + (int)pvVar98,0);
  pvVar99 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910067,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar99 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar99 + 0xc) + 8) + (int)pvVar99,0);
  pvVar100 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910068,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar100 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar100 + 0xc) + 8) + (int)pvVar100,0);
  pvVar101 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910069,(void *)0x68,(void *)0xf0);
  (((vtbl_entry*)(*(int *)((int)pvVar101 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar101 + 0xc) + 8) + (int)pvVar101,0);
  pvVar102 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006a,(void *)0x1d0,(void *)0x120);
  pvVar103 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006b,(void *)0x1d0,(void *)0x180);
  (((vtbl_entry*)(*(int *)((int)pvVar103 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar103 + 0xc) + 8) + (int)pvVar103,0);
  pvVar104 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910095,(void *)0x98,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar104 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar104 + 0xc) + 8) + (int)pvVar104,0);
  pvVar105 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006c,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar105 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar105 + 0xc) + 8) + (int)pvVar105,0);
  pvVar106 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006d,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar106 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar106 + 0xc) + 8) + (int)pvVar106,0);
  pvVar107 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006e,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar107 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar107 + 0xc) + 8) + (int)pvVar107,0);
  pvVar108 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191006f,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar108 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar108 + 0xc) + 8) + (int)pvVar108,0);
  pvVar109 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910070,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar109 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar109 + 0xc) + 8) + (int)pvVar109,0);
  pvVar110 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910071,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar110 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar110 + 0xc) + 8) + (int)pvVar110,0);
  pvVar111 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910072,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar111 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar111 + 0xc) + 8) + (int)pvVar111,0);
  pvVar112 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910073,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar112 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar112 + 0xc) + 8) + (int)pvVar112,0);
  pvVar113 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910074,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar113 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar113 + 0xc) + 8) + (int)pvVar113,0);
  pvVar114 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910075,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar113 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar113 + 0xc) + 8) + (int)pvVar113,0);
  pvVar115 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910076,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar115 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar115 + 0xc) + 8) + (int)pvVar115,0);
  pvVar116 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910077,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar116 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar116 + 0xc) + 8) + (int)pvVar116,0);
  pvVar117 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910078,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar117 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar117 + 0xc) + 8) + (int)pvVar117,0);
  pvVar118 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910079,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar118 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar118 + 0xc) + 8) + (int)pvVar118,0);
  pvVar119 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007a,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar119 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar119 + 0xc) + 8) + (int)pvVar119,0);
  pvVar120 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007b,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar120 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar120 + 0xc) + 8) + (int)pvVar120,0);
  pvVar121 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007c,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar121 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar121 + 0xc) + 8) + (int)pvVar121,0);
  pvVar122 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007d,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar122 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar122 + 0xc) + 8) + (int)pvVar122,0);
  pvVar123 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007e,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar123 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar123 + 0xc) + 8) + (int)pvVar123,0);
  pvVar124 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191007f,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar124 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar124 + 0xc) + 8) + (int)pvVar124,0);
  pvVar125 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910080,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar125 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar125 + 0xc) + 8) + (int)pvVar125,0);
  pvVar126 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910081,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar126 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar126 + 0xc) + 8) + (int)pvVar126,0);
  pvVar127 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910082,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar127 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar127 + 0xc) + 8) + (int)pvVar127,0);
  pvVar128 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910083,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar128 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar128 + 0xc) + 8) + (int)pvVar128,0);
  pvVar129 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910084,(void *)200,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar129 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar129 + 0xc) + 8) + (int)pvVar129,0);
  pvVar130 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910085,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar130 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar130 + 0xc) + 8) + (int)pvVar130,0);
  pvVar131 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910086,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar131 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar131 + 0xc) + 8) + (int)pvVar131,0);
  pvVar132 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910087,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar132 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar132 + 0xc) + 8) + (int)pvVar132,0);
  pvVar133 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910088,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar133 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar133 + 0xc) + 8) + (int)pvVar133,0);
  pvVar134 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910089,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar134 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar134 + 0xc) + 8) + (int)pvVar134,0);
  pvVar135 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008a,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar135 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar135 + 0xc) + 8) + (int)pvVar135,0);
  pvVar136 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008b,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar136 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar136 + 0xc) + 8) + (int)pvVar136,0);
  pvVar137 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008c,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar137 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar137 + 0xc) + 8) + (int)pvVar137,0);
  pvVar138 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008d,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar138 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar138 + 0xc) + 8) + (int)pvVar138,0);
  pvVar139 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008e,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar139 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar139 + 0xc) + 8) + (int)pvVar139,0);
  pvVar140 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191008f,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar140 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar140 + 0xc) + 8) + (int)pvVar140,0);
  pvVar141 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910090,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar141 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar141 + 0xc) + 8) + (int)pvVar141,0);
  pvVar142 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910091,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar142 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar142 + 0xc) + 8) + (int)pvVar142,0);
  pvVar143 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910092,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar143 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar143 + 0xc) + 8) + (int)pvVar143,0);
  pvVar144 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910093,(void *)0x110,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar144 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar144 + 0xc) + 8) + (int)pvVar144,0);
  pvVar145 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910094,(void *)0x20,(void *)0x120);
  (((vtbl_entry*)(*(int *)((int)pvVar145 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar145 + 0xc) + 8) + (int)pvVar145,0);
  pvVar146 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910098,(void *)0x1d0,(void *)0xf0);
  pvVar147 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x1910099,(void *)0x1d0,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar147 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar147 + 0xc) + 8) + (int)pvVar147,0);
  pvVar148 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009a,(void *)0x20,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar148 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar148 + 0xc) + 8) + (int)pvVar148,0);
  pvVar149 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009b,(void *)0x20,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar149 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar149 + 0xc) + 8) + (int)pvVar149,0);
  pvVar150 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009c,(void *)0x20,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar150 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar150 + 0xc) + 8) + (int)pvVar150,0);
  pvVar151 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009d,(void *)0x20,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar151 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar151 + 0xc) + 8) + (int)pvVar151,0);
  pvVar152 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009e,(void *)0x20,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar152 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar152 + 0xc) + 8) + (int)pvVar152,0);
  pvVar153 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x191009f,(void *)0x80,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar153 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar153 + 0xc) + 8) + (int)pvVar153,0);
  pvVar154 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a0,(void *)0x80,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar154 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar154 + 0xc) + 8) + (int)pvVar154,0);
  pvVar155 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a1,(void *)0x80,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar155 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar155 + 0xc) + 8) + (int)pvVar155,0);
  pvVar156 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a2,(void *)0xe0,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar156 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar156 + 0xc) + 8) + (int)pvVar156,0);
  pvVar157 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a3,(void *)0xe0,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar157 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar157 + 0xc) + 8) + (int)pvVar157,0);
  pvVar158 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a4,(void *)0xe0,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar158 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar158 + 0xc) + 8) + (int)pvVar158,0);
  pvVar159 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a5,(void *)0x170,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar159 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar159 + 0xc) + 8) + (int)pvVar159,0);
  pvVar160 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a6,(void *)0x170,(void *)0x150);
  (((vtbl_entry*)(*(int *)((int)pvVar160 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar160 + 0xc) + 8) + (int)pvVar160,0);
  pvVar161 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a7,(void *)0x1d0,(void *)0x150);
  pvVar162 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a8,(void *)0x1d0,(void *)0x1b0);
  (((vtbl_entry*)(*(int *)((int)pvVar162 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar162 + 0xc) + 8) + (int)pvVar162,0);
  pvVar164 = (void *)0x0;
  pvVar165 = (void *)0x0;
  pvVar163 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x19100a9,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar163,pvVar1,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar2,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar3,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar4,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar5,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar6,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar7,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar8,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar9,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar10,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar11,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar12,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar13,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar14,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar15,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar16,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar17,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar18,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar19,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar20,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar21,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar22,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar23,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar24,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar25,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar26,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar27,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar28,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar29,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar30,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar31,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar32,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar33,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar34,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar35,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar36,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar37,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar38,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar39,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar40,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar41,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar42,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar43,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar44,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar45,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar46,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar47,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar48,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar49,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar50,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar51,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar52,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar53,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar54,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar55,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar56,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar57,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar58,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar59,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar60,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar61,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar62,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar63,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar64,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar65,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar66,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar67,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar68,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar69,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar70,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar71,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar72,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar73,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar74,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar75,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar76,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar77,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar78,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar79,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar80,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar81,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar82,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar83,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar84,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar85,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar86,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar87,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar88,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar89,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar90,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar91,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar92,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar93,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar94,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar95,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar96,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar97,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar98,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar99,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar100,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar101,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar102,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar104,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar105,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar106,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar107,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar108,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar109,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar110,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar111,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar112,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar113,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar114,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar115,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar116,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar117,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar118,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar119,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar120,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar121,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar122,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar123,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar124,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar125,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar126,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar127,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar128,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar129,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar130,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar131,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar132,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar133,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar134,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar135,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar136,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar137,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar138,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar139,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar140,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar141,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar142,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar143,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar144,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar145,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar146,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar148,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar149,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar150,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar151,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar152,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar153,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar154,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar155,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar156,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar157,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar158,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar159,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar160,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar161,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar147,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar103,pvVar164,pvVar165);
  iterate_and_remove_list_entry(pvVar163,pvVar162,pvVar164,pvVar165);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar163));
  return;
}
