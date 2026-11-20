/* @k10d init_object_subsystem_103f6d4c @ 0x103f6d4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes a complex object by creating and linking numerous sub-objects via a factory
 *   helper.
 * summary:
 *   The function calls app_obj_factory repeatedly with incrementing IDs
 *   (0x18f0001-0x18f0072) to allocate sub-objects. It then uses
 *   iterate_and_remove_list_entry and invoke_virtual_then_call_helper_10494188 to link
 *   these sub-objects into a hierarchy and invokes virtual methods on several of them.
 *   Finally, it registers the main object with set_object_field_at_offset_0x10. The
 *   specific camera subsystem is not identifiable from the mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_subsystem_103f6d4c(cls_10597d1c *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar15;
  int iVar16;
  int iVar17;
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
  
  iterate_range_and_call_match((void *)(param_1->field_0x4),(uint *)0x1054fa80/*ROM*/,(void *)(param_3),(void *)(param_4));
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0001,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0002,(void *)(0),(void *)0x44);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0003,(void *)(0),(void *)0x196);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0004,(void *)(0),(void *)0x44);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0005,(void *)(0),(void *)0x2c);
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0006,(void *)(0),(void *)0x19c);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0007,(void *)0x20,(void *)0x18);
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0008,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0009,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000a,(void *)0xf8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar10 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar10 + 0xc) + 8) + (int)pvVar10,0);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000b,(void *)0x140,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar11 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar11 + 0xc) + 8) + (int)pvVar11,0);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000c,(void *)0x2c,(void *)0x18);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000d,(void *)0x74,(void *)0x18);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0011,(void *)0x74,(void *)0x18);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000e,(void *)0x260,(void *)0xa8));
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f000f,(void *)8,(void *)0xa8));
  (((vtbl_entry*)(*(int *)(iVar16 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar16 + 0xc) + 8) + iVar16,0);
  iVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0010,(void *)0x20,(void *)0x48));
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar15);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar17);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005d,(void *)0x74,(void *)0x18);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005c,(void *)0x20,(void *)0x138));
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0012,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar19 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0013,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0014,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar21 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0015,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0016,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0017,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0018,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar25 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar25 + 0xc) + 8) + (int)pvVar25,0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0019,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar26 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar26 + 0xc) + 8) + (int)pvVar26,0);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001a,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar27 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001b,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar28 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001c,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001d,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar30 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar30 + 0xc) + 8) + (int)pvVar30,0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001e,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar31 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar31 + 0xc) + 8) + (int)pvVar31,0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f001f,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar32 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar32 + 0xc) + 8) + (int)pvVar32,0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0020,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar33 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar33 + 0xc) + 8) + (int)pvVar33,0);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0021,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar34 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar34 + 0xc) + 8) + (int)pvVar34,0);
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0022,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar35 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar35 + 0xc) + 8) + (int)pvVar35,0);
  pvVar36 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0023,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar36 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar36 + 0xc) + 8) + (int)pvVar36,0);
  pvVar37 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0024,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar37 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar37 + 0xc) + 8) + (int)pvVar37,0);
  pvVar38 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0025,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar38 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar38 + 0xc) + 8) + (int)pvVar38,0);
  pvVar39 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0026,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar39 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar39 + 0xc) + 8) + (int)pvVar39,0);
  pvVar40 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0027,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar40 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar40 + 0xc) + 8) + (int)pvVar40,0);
  pvVar41 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0028,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar41 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar41 + 0xc) + 8) + (int)pvVar41,0);
  pvVar42 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0029,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar42 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar42 + 0xc) + 8) + (int)pvVar42,0);
  pvVar43 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002a,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar43 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar43 + 0xc) + 8) + (int)pvVar43,0);
  pvVar44 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002b,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar44 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar44 + 0xc) + 8) + (int)pvVar44,0);
  pvVar45 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002c,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar45 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar45 + 0xc) + 8) + (int)pvVar45,0);
  pvVar46 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002d,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar46 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar46 + 0xc) + 8) + (int)pvVar46,0);
  pvVar47 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002e,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar47 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar47 + 0xc) + 8) + (int)pvVar47,0);
  pvVar48 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f002f,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar48 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar48 + 0xc) + 8) + (int)pvVar48,0);
  pvVar49 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0030,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar49 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar49 + 0xc) + 8) + (int)pvVar49,0);
  pvVar50 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0031,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar50 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar50 + 0xc) + 8) + (int)pvVar50,0);
  pvVar51 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0032,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar51 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar51 + 0xc) + 8) + (int)pvVar51,0);
  pvVar52 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0033,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar52 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar52 + 0xc) + 8) + (int)pvVar52,0);
  pvVar53 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0034,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar53 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar53 + 0xc) + 8) + (int)pvVar53,0);
  pvVar54 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0035,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar54 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar54 + 0xc) + 8) + (int)pvVar54,0);
  pvVar55 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0036,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar55 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar55 + 0xc) + 8) + (int)pvVar55,0);
  pvVar56 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0037,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar56 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar56 + 0xc) + 8) + (int)pvVar56,0);
  pvVar57 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0038,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar57 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar57 + 0xc) + 8) + (int)pvVar57,0);
  pvVar58 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0039,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar58 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar58 + 0xc) + 8) + (int)pvVar58,0);
  pvVar59 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003a,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar59 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar59 + 0xc) + 8) + (int)pvVar59,0);
  pvVar60 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003b,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar60 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar60 + 0xc) + 8) + (int)pvVar60,0);
  pvVar61 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003c,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar61 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar61 + 0xc) + 8) + (int)pvVar61,0);
  pvVar62 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003d,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar62 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar62 + 0xc) + 8) + (int)pvVar62,0);
  pvVar63 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003e,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar63 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar63 + 0xc) + 8) + (int)pvVar63,0);
  pvVar64 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f003f,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar64 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar64 + 0xc) + 8) + (int)pvVar64,0);
  pvVar65 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0040,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar65 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar65 + 0xc) + 8) + (int)pvVar65,0);
  pvVar66 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0041,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar66 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar66 + 0xc) + 8) + (int)pvVar66,0);
  pvVar67 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0042,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar67 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar67 + 0xc) + 8) + (int)pvVar67,0);
  pvVar68 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0043,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar68 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar68 + 0xc) + 8) + (int)pvVar68,0);
  pvVar69 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0044,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar69 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar69 + 0xc) + 8) + (int)pvVar69,0);
  pvVar70 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0045,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar70 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar70 + 0xc) + 8) + (int)pvVar70,0);
  pvVar71 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0046,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar71 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar71 + 0xc) + 8) + (int)pvVar71,0);
  pvVar72 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0047,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar72 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar72 + 0xc) + 8) + (int)pvVar72,0);
  pvVar73 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0048,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar73 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar73 + 0xc) + 8) + (int)pvVar73,0);
  pvVar74 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0049,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar74 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar74 + 0xc) + 8) + (int)pvVar74,0);
  pvVar75 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004a,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar75 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar75 + 0xc) + 8) + (int)pvVar75,0);
  pvVar76 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004b,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar76 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar76 + 0xc) + 8) + (int)pvVar76,0);
  pvVar77 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004c,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar77 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar77 + 0xc) + 8) + (int)pvVar77,0);
  pvVar78 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004d,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar78 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar78 + 0xc) + 8) + (int)pvVar78,0);
  pvVar79 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004e,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar79 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar79 + 0xc) + 8) + (int)pvVar79,0);
  pvVar80 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f004f,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar80 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar80 + 0xc) + 8) + (int)pvVar80,0);
  pvVar81 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0050,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar81 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar81 + 0xc) + 8) + (int)pvVar81,0);
  pvVar82 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0051,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar82 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar82 + 0xc) + 8) + (int)pvVar82,0);
  pvVar83 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0052,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar83 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar83 + 0xc) + 8) + (int)pvVar83,0);
  pvVar84 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0053,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar84 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar84 + 0xc) + 8) + (int)pvVar84,0);
  pvVar85 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0054,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar85 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar85 + 0xc) + 8) + (int)pvVar85,0);
  pvVar86 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0055,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar86 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar86 + 0xc) + 8) + (int)pvVar86,0);
  pvVar87 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0056,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar87 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar87 + 0xc) + 8) + (int)pvVar87,0);
  pvVar88 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0057,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar88 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar88 + 0xc) + 8) + (int)pvVar88,0);
  pvVar89 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0058,(void *)0x38,(void *)0x138);
  (((vtbl_entry*)(*(int *)((int)pvVar89 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar89 + 0xc) + 8) + (int)pvVar89,0);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0059,(void *)0x248,(void *)0x138));
  pvVar91 = (void *)0x138;
  pvVar90 = (void *)0x20;
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005a,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar18,pvVar19,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar20,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar21,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar22,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar23,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar24,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar25,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar26,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar27,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar28,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar29,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar30,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar31,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar32,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar33,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar34,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar35,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar36,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar37,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar38,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar39,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar40,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar41,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar42,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar43,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar44,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar45,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar46,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar47,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar48,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar49,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar50,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar51,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar52,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar53,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar54,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar55,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar56,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar57,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar58,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar59,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar60,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar61,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar62,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar63,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar64,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar65,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar66,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar67,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar68,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar69,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar70,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar71,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar72,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar73,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar74,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar75,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar76,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar77,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar78,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar79,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar80,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar81,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar82,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar83,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar84,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar85,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar86,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar87,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar88,pvVar90,pvVar91);
  iterate_and_remove_list_entry(pvVar18,pvVar89,pvVar90,pvVar91);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar15);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar16);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005b,(void *)0x80,(void *)0x100);
  (((vtbl_entry*)(*(int *)((int)pvVar19 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar19 + 0xc) + 8) + (int)pvVar19,0);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005e,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar20 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar20 + 0xc) + 8) + (int)pvVar20,0);
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f005f,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar21 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar21 + 0xc) + 8) + (int)pvVar21,0);
  pvVar22 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0060,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar22 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar22 + 0xc) + 8) + (int)pvVar22,0);
  pvVar23 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0061,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar23 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar23 + 0xc) + 8) + (int)pvVar23,0);
  pvVar24 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0062,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar24 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar24 + 0xc) + 8) + (int)pvVar24,0);
  pvVar25 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0063,(void *)0x20,(void *)0x48);
  (((vtbl_entry*)(*(int *)((int)pvVar25 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar25 + 0xc) + 8) + (int)pvVar25,0);
  pvVar26 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0064,(void *)0x38,(void *)0x168);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0065,(void *)0x20,(void *)0x168));
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar15);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0066,(void *)0x170,(void *)0x168);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0067,(void *)0x170,(void *)0x168);
  iVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0068,(void *)0x1a0,(void *)0x168));
  pvVar29 = (void *)0x158;
  pvVar30 = (void *)0x168;
  iVar16 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0069,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7)));
  iterate_and_remove_list_entry(pvVar26,pvVar27,pvVar29,pvVar30);
  iterate_and_remove_list_entry(pvVar26,pvVar28,pvVar29,pvVar30);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar15);
  invoke_virtual_then_call_helper_10494188((int)pvVar26,iVar16);
  graph_link_nextprev((int)pvVar27,(int)pvVar28,0xd,pvVar30);
  graph_link_nextprev((int)pvVar27,(int)pvVar28,0xe,pvVar30);
  graph_link_nextprev((int)pvVar28,(int)pvVar27,0xd,pvVar30);
  graph_link_nextprev((int)pvVar28,(int)pvVar27,0xe,pvVar30);
  pvVar27 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006a,(void *)0x1b8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar27 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar28 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006b,(void *)0x200,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar28 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  pvVar29 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006c,(void *)0x1e8,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar30 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006d,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar30 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar30 + 0xc) + 8) + (int)pvVar30,0);
  pvVar31 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006e,(void *)0x230,(void *)0x198);
  (((vtbl_entry*)(*(int *)((int)pvVar31 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar31 + 0xc) + 8) + (int)pvVar31,0);
  pvVar32 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f006f,(void *)0x1d0,(void *)0x168);
  set_struct_fields_and_flag(pvVar32,0x48,2);
  (((vtbl_entry*)(*(int *)((int)pvVar27 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar27 + 0xc) + 8) + (int)pvVar27,0);
  pvVar33 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0070,(void *)0x230,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar28 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar28 + 0xc) + 8) + (int)pvVar28,0);
  pvVar34 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0071,(void *)0x218,(void *)0x168);
  (((vtbl_entry*)(*(int *)((int)pvVar29 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar29 + 0xc) + 8) + (int)pvVar29,0);
  pvVar36 = (void *)0x0;
  pvVar37 = (void *)0x0;
  pvVar35 = (void *)app_obj_factory((int *)(param_1->field_0x4),(void *)0x18f0072,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar35,pvVar1,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar2,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar3,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar4,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar5,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar6,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar7,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar8,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar9,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar10,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar11,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar12,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar13,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar14,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar18,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar20,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar21,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar22,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar23,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar24,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar25,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar19,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar26,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar27,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar28,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar29,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar30,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar31,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar32,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar33,pvVar36,pvVar37);
  iterate_and_remove_list_entry(pvVar35,pvVar34,pvVar36,pvVar37);
  graph_link_nextprev((int)pvVar14,(int)pvVar18,0xf,pvVar37);
  graph_link_nextprev((int)pvVar14,(int)pvVar26,0x10,pvVar37);
  graph_link_nextprev((int)pvVar18,(int)pvVar26,0xf,pvVar37);
  graph_link_nextprev((int)pvVar18,(int)pvVar14,0x10,pvVar37);
  graph_link_nextprev((int)pvVar26,(int)pvVar14,0xf,pvVar37);
  graph_link_nextprev((int)pvVar26,(int)pvVar18,0x10,pvVar37);
  set_object_field_at_offset_0x10((void *)(param_1->field_0x0),(void *)(pvVar35));
  return;
}
