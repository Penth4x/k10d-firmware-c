/* @k10d dispatch_event_by_type_1050411a @ 0x1050411a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Dispatches an event object based on its type field, calling type-specific handlers and
 *   notifying the source.
 * summary:
 *   The function checks param_2[2] for values 0x700001 through 0x700004 and executes a
 *   corresponding block of code. For 0x700003, it performs a complex sequence involving
 *   multiple helper calls (build_and_send_two_param_blocks_105044a6,
 *   send_three_mmio_blocks_10504ad2, compute_centered_range_bounds) and virtual method
 *   invocations. Other types trigger simpler helper calls. Each branch concludes by calling
 *   a virtual method (slot 2) on the event object to signal completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10504130) overlaps instruction at (ram,0x1050412e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_1050411a(cls_105d4ed8 *param_1,int *param_2)

{
  struct {
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
  } _cfg_30;
  struct {
    uint8_t uStack_11;
    uint32_t uStack_10;
    uint16_t uStack_c;
    ushort uStack_a;
  } _cfg_11;
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  uint32_t *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uintptr_t sp;
  int *piVar11;
  uint8_t auStack_58 [3];
  piVar11 = (int *)auStack_58;
  if (param_2 != (int *)0x0) {
    if (param_2[2] == 0x700003) {
      puVar6 = (uint32_t *)param_2[1];
      piVar8 = (int *)*puVar6;
      piVar9 = (int *)puVar6[1];
      piVar7 = (int *)puVar6[2];
      piVar10 = (int *)puVar6[3];
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar4,0xd,1);
      if (*(char *)(puVar6 + 4) != '\0') {
        *(uint8_t *)((int)piVar11 + 3) = 1;
        build_and_send_two_param_blocks_105044a6((int)param_1,piVar8,piVar9,0,*(uint8_t *)((int)piVar11 + 3));
      }
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700004,param_2[3]);
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar4,0xd,2);
      if (*(char *)((int)puVar6 + 0x11) != '\0') {
        *(uint16_t *)((int)piVar11 + 2) = 0x80;
        send_three_mmio_blocks_10504ad2((int)param_1,(int)piVar7,4,0x80,*(uint16_t *)((int)piVar11 + 2));
        _cfg_30.iStack_2c = 0;
        _cfg_30.iStack_28 = 0;
        _cfg_30.iStack_24 = 0;
        _cfg_30.uStack_1e = 0;
        _cfg_30.uStack_1a = 0;
        _cfg_30.uStack_18 = 0;
        _cfg_30.iStack_30 = *piVar7;
        _cfg_30.uStack_20 = *(uint16_t *)(piVar7 + 4);
        _cfg_30.uStack_1c = *(uint16_t *)(piVar7 + 5);
        _cfg_11.uStack_c = 0;
        _cfg_11.uStack_a = 0;
        piVar5 = piVar8;
        if (*(char *)(puVar6 + 4) != '\0') {
          piVar5 = piVar9;
        }
        *piVar11 = (int)&_cfg_11.uStack_c;
        compute_centered_range_bounds(&_cfg_11.uStack_11,(int)piVar5,(int)piVar7,(short *)&_cfg_11.uStack_a,(short *)*piVar11);
        _cfg_30.uStack_1e = _cfg_11.uStack_c;
        uVar2 = (uint)_cfg_11.uStack_a;
        _cfg_30.iStack_2c = piVar7[1] + uVar2 * *(ushort *)(piVar7 + 5);
        _cfg_30.iStack_28 = piVar7[2] + (int)(uVar2 * *(ushort *)(piVar7 + 5)) / 2;
        _cfg_30.iStack_24 = piVar7[3] + (int)(uVar2 * *(ushort *)(piVar7 + 5)) / 2;
        piVar5 = piVar8;
        if (*(char *)(puVar6 + 4) != '\0') {
          piVar5 = piVar9;
        }
        *(uint8_t *)((int)piVar11 + 3) = 1;
        build_and_send_two_param_blocks_105044a6((int)param_1,piVar5,&_cfg_30.iStack_30,0,*(uint8_t *)((int)piVar11 + 3));
        send_three_parameter_blocks((int)param_1,&_cfg_30.iStack_30,(int)&_cfg_30.iStack_30);
      }
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700005,param_2[3]);
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar4,0xd,3);
      if (*(char *)((int)puVar6 + 0x12) != '\0') {
        if (*(char *)((int)puVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(puVar6 + 4);
          *(uint8_t *)((int)piVar11 + 3) = 1;
          if (cVar1 != '\0') {
            piVar8 = piVar9;
          }
        }
        else {
          *(uint8_t *)((int)piVar11 + 3) = 1;
          piVar8 = piVar7;
        }
        build_and_send_two_param_blocks_105044a6((int)param_1,piVar8,piVar10,0,*(uint8_t *)((int)piVar11 + 3));
        pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
        update_camera_state_flags(pvVar4,0xd,4);
        if (*(char *)(puVar6 + 6) != '\0') {
          build_and_send_command_packet_10504730((int)param_1,piVar10,puVar6[5]);
        }
      }
      if (*(char *)(puVar6 + 8) != '\0') {
        send_three_mmio_blocks_10504c18((int)(param_1),(int)(puVar6[2]),(int)(puVar6[7]));
      }
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700003,param_2[3]);
      pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar4,0xd,0);
    }
    else if (param_2[2] == 0x700001) {
      iVar3 = param_2[1];
      puVar6 = &param_1->field_0x2c;
      eventflag_clr_flg(puVar6,1);
      build_sensor_readout_params((int)(param_1->field_0x24),(int)(0),(void *)(&param_1->field_0x4),(int *)(iVar3));
      eventflag_wai_flg(puVar6,1,&_cfg_11.uStack_10,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      configure_timer_channel_state(param_1->field_0x24,0);
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700001,param_2[3]);
    }
    else if (param_2[2] == 0x700002) {
      build_and_send_two_param_blocks_105044a6((int)param_1,*(int **)param_2[1],(int *)((uint32_t *)param_2[1])[1],0,0);
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700002,param_2[3]);
    }
    else if (param_2[2] == 0x700004) {
      build_and_send_command_packet_10504730((int)param_1,*(void **)param_2[1],((uint32_t *)param_2[1])[1]);
      iVar3 = *(int *)*param_2;
      (((vtbl_entry*)(iVar3))[2].fn)(*param_2 + (int)((vtbl_entry*)(iVar3))[2].adj,0x700006,param_2[3]);
    }
  }
  return;
}
