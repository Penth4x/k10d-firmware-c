/* @k10d dispatch_event_900001 @ 0x10508dc2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Processes event ID 0x900001 by comparing two data structures and dispatching a virtual
 *   callback.
 * summary:
 *   The function checks if param_2[2] equals 0x900001. It retrieves two pointers from
 *   param_2[1] and compares specific fields (offsets 4 and 0x12). Based on the comparison
 *   results and other flags, it constructs a stack buffer with data from these structures
 *   and calls helper functions (imgp_c_program_and_start_104fe5ce or
 *   build_sensor_readout_params) to process the data. Finally, it invokes a virtual method
 *   (slot 2) on the object pointed to by *param_2, passing the event ID 0x900001.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10508dde) overlaps instruction at (ram,0x10508ddc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_900001(cls_105d5300 *param_1,int *param_2)

{
  bool bVar1;
  uint32_t *puVar2;
  void *pvVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint32_t *puVar7;
  int iVar8;
  uintptr_t sp;
  int iStack_b4;
  int iStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint16_t uStack_a8;
  uint16_t uStack_a6;
  uint16_t uStack_a4;
  uint16_t uStack_a2;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint32_t uStack_9c;
  int iStack_98;
  uint16_t uStack_94;
  uint16_t uStack_92;
  uint16_t uStack_90;
  int iStack_8c;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint8_t uStack_78;
  uint8_t uStack_77;
  uint32_t uStack_74;
  uint8_t uStack_70;
  uint8_t uStack_6f;
  uint8_t uStack_6e;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint8_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  int iStack_60;
  int iStack_5c;
  uint16_t uStack_58;
  uint16_t uStack_56;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint32_t uStack_48;
  int iStack_44;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  int iStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint8_t uStack_24;
  uint8_t uStack_23;
  uint32_t uStack_20;
  uint8_t uStack_1c;
  uint8_t uStack_1b;
  uint8_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint8_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint32_t uStack_c;
  
  if (param_2 != (int *)0x0) {
    if (param_2[2] == 0x900001) {
      pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar3,0x14,1);
      puVar7 = (uint32_t *)param_2[1];
      piVar6 = (int *)*puVar7;
      piVar5 = (int *)puVar7[1];
      if ((*(short *)(piVar6 + 4) == *(short *)(piVar5 + 4)) &&
         (*(short *)((int)piVar6 + 0x12) == *(short *)((int)piVar5 + 0x12))) {
        iStack_b4 = piVar6[1];
        iStack_b0 = piVar5[1];
        uStack_ac = *(uint16_t *)(piVar5 + 4);
        uStack_aa = *(uint16_t *)((int)piVar5 + 0x12);
        uStack_a8 = *(uint16_t *)(piVar6 + 5);
        uStack_a6 = *(uint16_t *)(piVar5 + 5);
        uStack_a4 = *(uint16_t *)((int)piVar6 + 0x16);
        uStack_a2 = *(uint16_t *)(piVar6 + 6);
        uStack_a0 = *(uint16_t *)((int)piVar5 + 0x16);
        uStack_9e = *(uint16_t *)(piVar5 + 6);
        puVar2 = &param_1->field_0x2c;
        eventflag_clr_flg(puVar2,1);
        imgp_c_program_and_start_104fe5ce(param_1->field_0x24,&param_1->field_0x4,&iStack_b4);
        eventflag_wai_flg(puVar2,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,1);
        imgp_a_stop_and_reset(param_1->field_0x24);
        bVar1 = false;
      }
      else {
        uStack_78 = 0;
        uStack_77 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6f = 0;
        uStack_6e = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        uStack_68 = 0;
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_9c = 0;
        iStack_98 = piVar6[1];
        uStack_94 = *(uint16_t *)(piVar6 + 5);
        uStack_92 = *(uint16_t *)(piVar6 + 4);
        uStack_90 = *(uint16_t *)((int)piVar6 + 0x12);
        iStack_8c = piVar5[1];
        uStack_88 = *(uint16_t *)(piVar5 + 5);
        uStack_86 = *(uint16_t *)(piVar5 + 4);
        uStack_84 = *(uint16_t *)((int)piVar5 + 0x12);
        uStack_82 = *(uint16_t *)((int)piVar6 + 0x16);
        uStack_80 = *(uint16_t *)(piVar6 + 6);
        uStack_7e = *(uint16_t *)((int)piVar5 + 0x16);
        uStack_7c = *(uint16_t *)(piVar5 + 6);
        uStack_7a = *(uint16_t *)(puVar7 + 2);
        puVar2 = &param_1->field_0x2c;
        eventflag_clr_flg(puVar2,1);
        build_sensor_readout_params(param_1->field_0x28,1,&param_1->field_0x4,&uStack_9c);
        eventflag_wai_flg(puVar2,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,1);
        configure_timer_channel_state(param_1->field_0x28,1);
        bVar1 = true;
      }
      if ((bVar1) || (*piVar6 != *piVar5)) {
        uStack_24 = 0;
        uStack_23 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_1b = 0;
        uStack_1a = 0;
        uStack_18 = 0;
        uStack_16 = 0;
        uStack_14 = 0;
        uStack_12 = 0;
        uStack_10 = 0;
        uStack_48 = 0;
        iStack_44 = piVar6[2];
        iStack_38 = piVar5[2];
        uStack_40 = (uint16_t)((int)(uint)*(ushort *)(piVar6 + 5) >> 1);
        uStack_34 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 5) >> 1);
        uStack_3e = (uint16_t)((int)(uint)*(ushort *)(piVar6 + 4) >> 1);
        if (*piVar6 == 1) {
          uStack_3c = *(uint16_t *)((int)piVar6 + 0x12);
        }
        else {
          uStack_3c = (uint16_t)((int)(uint)*(ushort *)((int)piVar6 + 0x12) >> 1);
        }
        uStack_32 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 4) >> 1);
        if (*piVar5 == 1) {
          uStack_30 = *(uint16_t *)((int)piVar5 + 0x12);
        }
        else {
          uStack_30 = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x12) >> 1);
        }
        uStack_2e = (uint16_t)((int)(uint)*(ushort *)((int)piVar6 + 0x16) >> 1);
        if (*piVar6 == 1) {
          uStack_2c = *(uint16_t *)(piVar6 + 6);
        }
        else {
          uStack_2c = (uint16_t)((int)(uint)*(ushort *)(piVar6 + 6) >> 1);
        }
        uStack_2a = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x16) >> 1);
        if (*piVar5 == 1) {
          uStack_28 = *(uint16_t *)(piVar5 + 6);
        }
        else {
          uStack_28 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 6) >> 1);
        }
        uStack_26 = *(uint16_t *)((int)puVar7 + 10);
        uVar4 = (*(code *)0x1050a63a/*ROM*/)(piVar6);
        if ((uVar4 & 1) != 0) {
          uStack_1c = 1;
        }
        if ((*piVar6 == 2) && ((*(ushort *)(piVar6 + 6) & 1) != 0)) {
          uStack_1b = 1;
        }
        puVar2 = &param_1->field_0x2c;
        eventflag_clr_flg(puVar2,1);
        build_sensor_readout_params(param_1->field_0x28,1,&param_1->field_0x4,&uStack_48);
        eventflag_wai_flg(puVar2,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,1);
        configure_timer_channel_state(param_1->field_0x28,1);
        iStack_44 = piVar6[3];
        iStack_38 = piVar5[3];
        uStack_26 = *(uint16_t *)(puVar7 + 3);
        eventflag_clr_flg(puVar2,1);
        build_sensor_readout_params(param_1->field_0x28,1,&param_1->field_0x4,&uStack_48);
        eventflag_wai_flg(puVar2,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar2,1);
        configure_timer_channel_state(param_1->field_0x28,1);
      }
      else {
        iStack_60 = piVar6[2];
        iStack_5c = piVar5[2];
        uStack_58 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 4) >> 1);
        if (*piVar6 == 1) {
          uStack_56 = *(uint16_t *)((int)piVar5 + 0x12);
        }
        else {
          uStack_56 = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x12) >> 1);
        }
        uStack_54 = (uint16_t)((int)(uint)*(ushort *)(piVar6 + 5) >> 1);
        uStack_52 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 5) >> 1);
        uStack_50 = (uint16_t)((int)(uint)*(ushort *)((int)piVar6 + 0x16) >> 1);
        if (*piVar6 == 1) {
          uStack_4e = *(uint16_t *)(piVar6 + 6);
        }
        else {
          uStack_4e = (uint16_t)((int)(uint)*(ushort *)(piVar6 + 6) >> 1);
        }
        uStack_4c = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x16) >> 1);
        if (*piVar5 == 1) {
          uStack_4a = *(uint16_t *)(piVar5 + 6);
        }
        else {
          uStack_4a = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 6) >> 1);
        }
        puVar7 = &param_1->field_0x2c;
        eventflag_clr_flg(puVar7,1);
        imgp_c_program_and_start_104fe5ce(param_1->field_0x24,&param_1->field_0x4,&iStack_60);
        eventflag_wai_flg(puVar7,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar7,1);
        imgp_a_stop_and_reset(param_1->field_0x24);
        iStack_60 = piVar6[3];
        iStack_5c = piVar5[3];
        eventflag_clr_flg(puVar7,1);
        imgp_c_program_and_start_104fe5ce(param_1->field_0x24,&param_1->field_0x4,&iStack_60);
        eventflag_wai_flg(puVar7,1,&uStack_c,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar7,1);
        imgp_a_stop_and_reset(param_1->field_0x24);
      }
      iVar8 = *(int *)*param_2;
      (((vtbl_entry*)(iVar8))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar8))[2].adj,0x900001,param_2[3]);
    }
    pvVar3 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar3,0x14,0);
    return;
  }
  return;
}
