/* @k10d configure_pipeline_with_settings @ 0x1050b958
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Locks a context, configures a sub-object's geometry and four parameter values from a
 *   settings block, and dispatches a command via a virtual call.
 * summary:
 *   The function acquires a lock (call_kernel_with_short_id), retrieves an object via a
 *   vtable call, and configures its geometry based on width/height fields (offsets
 *   0x22/0x24). It updates a settings working copy (settings_refresh_working_copy) and
 *   writes four values to offsets 0x120-0x126. Finally, it constructs a command structure
 *   with a 0x900001 ID and dispatches it via a virtual call
 *   (virtual_destructor_free_10428222).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050b97e) overlaps instruction at (ram,0x1050b97c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char configure_pipeline_with_settings(int param_1,char *param_2)

{
  struct {
    uint32_t uStack_6c;
    int iStack_68;
    int iStack_64;
    int iStack_60;
    uint16_t uStack_5c;
    uint16_t uStack_5a;
    uint16_t uStack_58;
    uint16_t uStack_56;
    uint16_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint16_t uStack_3c;
    uint16_t uStack_3a;
    short sStack_38;
    uint32_t * puStack_34;
    uint32_t * puStack_30;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    int iStack_24;
  } _cfg_6c;
  struct {
    uint8_t uStack_d;
    uint16_t uStack_c;
    short sStack_a;
  } _cfg_d;
  uint uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint32_t *puVar5;
  int iVar6;
  uint32_t *puVar7;
  void *pvVar8;
  int iVar9;
  uint32_t uVar10;
  uint16_t uVar11;
  uint uVar12;
  int iVar13;
  uintptr_t sp;
  int *piVar14;
  uint8_t auStack_e4 [4];
  uint32_t **ppuStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  void *puStack_14;
  piVar14 = (int *)auStack_e4;
  cVar3 = '\0';
  iVar9 = get_field_at_offset_0x28(param_1);
  if (iVar9 == 0) {
    puVar5 = (uint32_t *)(param_1 + 0x60);
    call_kernel_with_short_id(puVar5);
    *(uint8_t *)(param_1 + 0x81) = 1;
    iVar9 = (*(code *)0x10514e9c/*ROM*/)(*(uint32_t *)(param_1 + 0x28));
    if (iVar9 != 0) {
      if (*(char *)(iVar9 + 0x2d) != '\0') {
        *(uint8_t *)(param_1 + 0x81) = 0;
code_r0x1050b9be:
        check_kernel_call_success_10459d88(puVar5);
        goto code_r0x1050bf32;
      }
      uVar10 = test_mode_config_singleton();
      copy_settings_to_destination_buffer(uVar10,iVar9 + 0x148);
      iVar6 = *(int *)(iVar9 + 0x7f8);
      iVar13 = iVar9 + 0x2ac;
      uVar11 = read_two_byte_from_struct(iVar13,0,0);
      *(uint16_t *)(iVar6 + 0x120) = uVar11;
      iVar6 = *(int *)(iVar9 + 0x7f8);
      uVar11 = read_two_byte_from_struct(iVar13,0,2);
      *(uint16_t *)(iVar6 + 0x122) = uVar11;
      iVar6 = *(int *)(iVar9 + 0x7f8);
      uVar11 = read_two_byte_from_struct(iVar13,0,3);
      *(uint16_t *)(iVar6 + 0x124) = uVar11;
      iVar6 = *(int *)(iVar9 + 0x7f8);
      uVar11 = read_two_byte_from_struct(iVar13,0,1);
      *(uint16_t *)(iVar6 + 0x126) = uVar11;
      *(uint8_t *)(*(int *)(iVar9 + 0x7f8) + 0xe1) = 1;
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[24].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[24].adj + iVar9,0,1,1);
      *(uint8_t *)(*(int *)(iVar9 + 0x7f8) + 0xe1) = 1;
      if (*param_2 == '\x01') {
        *(uint8_t *)(*(int *)(iVar9 + 0x7f8) + 0xc0) = 1;
        *(char *)(*(int *)(iVar9 + 0x7f8) + 0xc1) = param_2[8];
        *(uint32_t *)(*(int *)(iVar9 + 0x7f8) + 0xc4) = *(uint32_t *)(param_2 + 0xc);
        *(uint32_t *)(*(int *)(iVar9 + 0x7f8) + 200) = *(uint32_t *)(param_2 + 0x10);
      }
      _cfg_6c.iStack_68 = 0;
      _cfg_6c.iStack_64 = 0;
      _cfg_6c.iStack_60 = 0;
      _cfg_6c.uStack_5c = 0;
      _cfg_6c.uStack_5a = 0;
      _cfg_6c.uStack_58 = 0;
      _cfg_6c.uStack_56 = 0;
      _cfg_6c.uStack_54 = 0;
      _cfg_6c.uStack_6c = 1;
      uVar12 = ((int)(uint)*(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x22) >> 3) + 0x3fU & 0xffc0;
      uVar4 = ((int)(uint)*(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x24) >> 3) + 0x3fU & 0xffc0;
      iVar6 = *(int *)(iVar9 + 0x50);
      if (iVar6 != 0) {
        uVar1 = uVar12 * uVar4;
        _cfg_6c.iStack_64 = iVar6 + uVar1;
        _cfg_6c.iStack_60 = uVar1 / 2 + _cfg_6c.iStack_64;
        _cfg_6c.uStack_5c = (uint16_t)uVar12;
        _cfg_6c.uStack_5a = (uint16_t)uVar4;
        _cfg_6c.uStack_56 = 0;
        _cfg_6c.uStack_54 = 0;
        *(uint8_t *)(*(int *)(iVar9 + 0x7f8) + 0x26) = 1;
        *(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x28) = 7;
        *(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x2a) = 7;
        *(uint32_t *)(*(int *)(iVar9 + 0x7f8) + 0x2c) = 0x8001331c/*SDRAM*/;
        *(uint32_t *)(*(int *)(iVar9 + 0x7f8) + 0x30) = 0x8001331c/*SDRAM*/;
        *(int *)(*(int *)(iVar9 + 0x7f8) + 0x14) = iVar6;
        *(int *)(*(int *)(iVar9 + 0x7f8) + 0x18) = _cfg_6c.iStack_64;
        *(int *)(*(int *)(iVar9 + 0x7f8) + 0x1c) = _cfg_6c.iStack_60;
        *(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x20) = _cfg_6c.uStack_5c;
        *(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x34) = _cfg_6c.uStack_5c;
        *(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x36) = _cfg_6c.uStack_5a;
        *(uint32_t *)(*(int *)(iVar9 + 0x7f8) + 8) = 1;
        *(uint32_t *)(iVar9 + 0x10) = 0x600001;
        *(int *)(iVar9 + 8) = param_1 + 4;
        *(uint32_t *)(iVar9 + 0xc) = *(uint32_t *)(iVar9 + 0x7f8);
        *(int *)(iVar9 + 0x14) = iVar9;
        _cfg_6c.iStack_68 = iVar6;
        _cfg_6c.uStack_58 = _cfg_6c.uStack_5c;
        iVar6 = (*(code *)0x10514e9c/*ROM*/)(*(uint32_t *)(param_1 + 0x28));
        if (iVar9 != iVar6) {
          *(uint8_t *)(param_1 + 0x81) = 0;
          goto code_r0x1050b9be;
        }
        puVar7 = (uint32_t *)(param_1 + 0x68);
        eventflag_clr_flg(puVar7,0x10000);
        reg_framework_send(*(int *)(param_1 + 0x30) + 8);
        eventflag_wai_flg(puVar7,0x10000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar7,0x10000);
        cVar3 = '\x01';
        if ((*param_2 == '\x01') &&
           (cVar3 = *(char *)(*(int *)(iVar9 + 0x7f8) + 0x216c), cVar3 != '\0')) {
          iVar6 = get_or_create_singleton_object_10485138();
          pvVar8 = *(void **)(iVar6 + 8);
          settings_refresh_working_copy(pvVar8);
          iVar6 = *(int *)(iVar9 + 0x244);
          iVar6 = (((vtbl_entry*)(iVar6))[2].fn)(iVar9 + 0x244 + (int)((vtbl_entry*)(iVar6))[2].adj,0x19);
          if (iVar6 == 0x12) {
            uVar2 = *(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x120);
            *piVar14 = 0;
            call_helper_on_two_pointers_10484b60((int)pvVar8,0,0,(uint)uVar2,*piVar14);
            uVar2 = *(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x126);
            *piVar14 = 0;
            call_helper_on_two_pointers_10484b60((int)pvVar8,0,1,(uint)uVar2,*piVar14);
            uVar2 = *(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x122);
            *piVar14 = 0;
            call_helper_on_two_pointers_10484b60((int)pvVar8,0,2,(uint)uVar2,*piVar14);
            uVar2 = *(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x124);
            *piVar14 = 0;
            call_helper_on_two_pointers_10484b60((int)pvVar8,0,3,(uint)uVar2,*piVar14);
          }
          else {
            call_helper_on_two_pointers_10484b00(pvVar8,0,0,*(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x120));
            call_helper_on_two_pointers_10484b00(pvVar8,0,1,*(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x126));
            call_helper_on_two_pointers_10484b00(pvVar8,0,2,*(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x122));
            call_helper_on_two_pointers_10484b00(pvVar8,0,3,*(uint16_t *)(*(int *)(iVar9 + 0x7f8) + 0x124));
          }
        }
        _cfg_6c.uStack_5c = (short)((int)(uint)*(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x22) >> 3);
        _cfg_6c.uStack_5a = (short)((int)(uint)*(ushort *)(*(int *)(iVar9 + 0x7f8) + 0x24) >> 3);
        uVar10 = *(uint32_t *)(param_2 + 4);
        *(uint16_t *)((int)piVar14 + 2) = 0x80;
        initialize_sensor_readout_buffer(param_1,uVar10,4,0x80,*(uint16_t *)((int)piVar14 + 2));
        _cfg_6c.uStack_3e = 0;
        _cfg_6c.uStack_4c = 0;
        _cfg_6c.uStack_48 = 0;
        _cfg_6c.uStack_44 = 0;
        _cfg_6c.uStack_3a = 0;
        _cfg_6c.sStack_38 = 0;
        _cfg_6c.uStack_50 = **(uint32_t **)(param_2 + 4);
        _cfg_6c.uStack_40 = *(uint16_t *)(*(int *)(param_2 + 4) + 0x10);
        _cfg_d.uStack_c = 0;
        _cfg_6c.uStack_3c = *(uint16_t *)(*(int *)(param_2 + 4) + 0x14);
        _cfg_d.sStack_a = 0;
        iVar6 = *(int *)(param_2 + 4);
        *piVar14 = (int)&_cfg_d.uStack_c;
        compute_centered_range_bounds(&_cfg_d.uStack_d,(int)&_cfg_6c.uStack_6c,iVar6,&_cfg_d.sStack_a,(short *)*piVar14);
        _cfg_6c.uStack_3a = 0;
        _cfg_6c.uStack_3e = _cfg_d.uStack_c;
        _cfg_6c.sStack_38 = _cfg_d.sStack_a;
        _cfg_6c.uStack_4c = *(uint32_t *)(*(int *)(param_2 + 4) + 4);
        _cfg_6c.uStack_48 = *(uint32_t *)(*(int *)(param_2 + 4) + 8);
        _cfg_6c.uStack_44 = *(uint32_t *)(*(int *)(param_2 + 4) + 0xc);
        _cfg_6c.uStack_2a = 0x80;
        puStack_14 = &DAT_1059e4d0/*ROM*/;
        ppuStack_20 = &_cfg_6c.puStack_34;
        _cfg_6c.uStack_2c = 0;
        uStack_1c = 0x900001;
        uStack_18 = 0;
        _cfg_6c.puStack_34 = &_cfg_6c.uStack_6c;
        _cfg_6c.puStack_30 = &_cfg_6c.uStack_50;
        _cfg_6c.uStack_28 = _cfg_6c.uStack_2a;
        _cfg_6c.iStack_24 = param_1 + 4;
        iVar6 = (*(code *)0x10514e9c/*ROM*/)(*(uint32_t *)(param_1 + 0x28));
        if (iVar9 != iVar6) {
          *(uint8_t *)(param_1 + 0x81) = 0;
          check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
          virtual_destructor_free_10428222(&_cfg_6c.iStack_24,2);
          goto code_r0x1050bf32;
        }
        eventflag_clr_flg(puVar7,0x100000);
        reg_framework_send(*(int *)(param_1 + 0x54) + 8);
        eventflag_wai_flg(puVar7,0x100000,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar7,0x100000);
        virtual_destructor_free_10428222(&_cfg_6c.iStack_24,2);
      }
    }
    *(uint8_t *)(param_1 + 0x81) = 0;
    check_kernel_call_success_10459d88(puVar5);
  }
  else {
code_r0x1050bf32:
    cVar3 = '\0';
  }
  return cVar3;
}
