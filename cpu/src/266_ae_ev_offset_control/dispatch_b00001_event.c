/* @k10d dispatch_b00001_event @ 0x10506174
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Processes a specific event type (0xb00001) by executing a sequence of helper calls and
 *   invoking a virtual method.
 * summary:
 *   The function checks if the second argument's third field equals 0xb00001. If so, it
 *   calls update_camera_state_flags with arguments 0x15 and 1, then performs a complex
 *   sequence of operations involving eventflag_clr_flg, imgp_b_program_and_start,
 *   eventflag_wai_flg, and imgp_b_start_and_notify. It manipulates local stack variables
 *   based on values from pointers in param_2. Finally, it invokes a virtual function (slot
 *   2) on the object pointed to by param_2[0] with the event ID and param_2[3]. If the
 *   event ID does not match, it calls update_camera_state_flags with 0x15 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10506190) overlaps instruction at (ram,0x1050618e)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_b00001_event(cls_105d5094 *param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_28;
    int iStack_24;
    int iStack_20;
    uint16_t uStack_1c;
    uint16_t uStack_1a;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_28;
  int iVar1;
  void *pvVar2;
  uint32_t *puVar3;
  int *piVar4;
  int *piVar5;
  uint32_t *puVar6;
  int *piVar7;
  uintptr_t sp;
  if (param_2 != (uint32_t *)0x0) {
    if (param_2[2] == 0xb00001) {
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar2,0x15,1);
      piVar7 = (int *)param_2[1];
      piVar4 = (int *)piVar7[1];
      piVar5 = (int *)piVar7[2];
      _cfg_28.uStack_28 = 0;
      iVar1 = *piVar7;
      if (iVar1 == 0) {
        _cfg_28.uStack_28 = 0;
      }
      else if (iVar1 == 1) {
        _cfg_28.uStack_28 = 3;
      }
      else if (iVar1 == 2) {
        _cfg_28.uStack_28 = 0xc;
      }
      _cfg_28.iStack_24 = piVar4[1];
      _cfg_28.iStack_20 = piVar5[1];
      _cfg_28.uStack_1c = *(uint16_t *)(piVar4 + 4);
      _cfg_28.uStack_1a = *(uint16_t *)((int)piVar4 + 0x12);
      _cfg_28.uStack_18 = *(uint16_t *)(piVar4 + 5);
      puVar6 = &param_1->field_0x28;
      _cfg_28.uStack_16 = *(uint16_t *)(piVar5 + 5);
      _cfg_28.uStack_14 = *(uint16_t *)((int)piVar4 + 0x16);
      _cfg_28.uStack_12 = *(uint16_t *)(piVar4 + 6);
      _cfg_28.uStack_10 = *(uint16_t *)((int)piVar5 + 0x16);
      _cfg_28.uStack_e = *(uint16_t *)(piVar5 + 6);
      eventflag_clr_flg(puVar6,1);
      puVar3 = &param_1->field_0x4;
      imgp_b_program_and_start_104fe72c(param_1->field_0x24,puVar3,&_cfg_28.uStack_28);
      eventflag_wai_flg(puVar6,1,&_cfg_28.uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(param_1->field_0x24);
      iVar1 = *piVar7;
      if (iVar1 == 2) {
        _cfg_28.uStack_28 = 0xc;
      }
      else if (*piVar4 == 1) {
        if (*piVar5 == 1) {
          if (iVar1 != 0) {
            _cfg_28.uStack_28 = 4;
          }
          else {
            _cfg_28.uStack_28 = 1;
          }
        }
        else if (iVar1 != 0) {
          _cfg_28.uStack_28 = 4;
        }
        else {
          _cfg_28.uStack_28 = 1;
        }
      }
      else if (*piVar5 == 1) {
        if (iVar1 != 0) {
          _cfg_28.uStack_28 = 5;
        }
        else {
          _cfg_28.uStack_28 = 2;
        }
      }
      else {
        _cfg_28.uStack_28 = 0;
        if (iVar1 != 0) {
          _cfg_28.uStack_28 = 3;
        }
      }
      _cfg_28.iStack_24 = piVar4[2];
      _cfg_28.iStack_20 = piVar5[2];
      _cfg_28.uStack_1c = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 4) >> 1);
      if (*piVar4 == 1) {
        _cfg_28.uStack_1a = *(uint16_t *)((int)piVar4 + 0x12);
      }
      else {
        _cfg_28.uStack_1a = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x12) >> 1);
      }
      _cfg_28.uStack_18 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 5) >> 1);
      _cfg_28.uStack_16 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 5) >> 1);
      _cfg_28.uStack_14 = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x16) >> 1);
      if (*piVar4 == 1) {
        _cfg_28.uStack_12 = *(uint16_t *)(piVar4 + 6);
      }
      else {
        _cfg_28.uStack_12 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 6) >> 1);
      }
      _cfg_28.uStack_10 = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x16) >> 1);
      if (*piVar5 == 1) {
        _cfg_28.uStack_e = *(uint16_t *)(piVar5 + 6);
      }
      else {
        _cfg_28.uStack_e = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 6) >> 1);
      }
      eventflag_clr_flg(puVar6,1);
      imgp_b_program_and_start_104fe72c(param_1->field_0x24,puVar3,&_cfg_28.uStack_28);
      eventflag_wai_flg(puVar6,1,&_cfg_28.uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(param_1->field_0x24);
      _cfg_28.iStack_24 = piVar4[3];
      _cfg_28.iStack_20 = piVar5[3];
      eventflag_clr_flg(puVar6,1);
      imgp_b_program_and_start_104fe72c(param_1->field_0x24,puVar3,&_cfg_28.uStack_28);
      eventflag_wai_flg(puVar6,1,&_cfg_28.uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(param_1->field_0x24);
      iVar1 = *(int *)*param_2;
      (((vtbl_entry*)(iVar1))[2].fn)((int)*param_2 + (int)((vtbl_entry*)(iVar1))[2].adj,0xb00001,param_2[3])
      ;
    }
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0x15,0);
  }
  return;
}
