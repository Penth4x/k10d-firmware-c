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

void dispatch_b00001_event(int param_1,uint32_t *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint32_t *puVar6;
  int *piVar7;
  uintptr_t sp;
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
  
  if (param_2 != (uint32_t *)0x0) {
    if (param_2[2] == 0xb00001) {
      pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
      update_camera_state_flags(pvVar2,0x15,1);
      piVar7 = (int *)param_2[1];
      piVar4 = (int *)piVar7[1];
      piVar5 = (int *)piVar7[2];
      uStack_28 = 0;
      iVar1 = *piVar7;
      if (iVar1 == 0) {
        uStack_28 = 0;
      }
      else if (iVar1 == 1) {
        uStack_28 = 3;
      }
      else if (iVar1 == 2) {
        uStack_28 = 0xc;
      }
      iStack_24 = piVar4[1];
      iStack_20 = piVar5[1];
      uStack_1c = *(uint16_t *)(piVar4 + 4);
      uStack_1a = *(uint16_t *)((int)piVar4 + 0x12);
      uStack_18 = *(uint16_t *)(piVar4 + 5);
      puVar6 = (uint32_t *)(param_1 + 0x28);
      uStack_16 = *(uint16_t *)(piVar5 + 5);
      uStack_14 = *(uint16_t *)((int)piVar4 + 0x16);
      uStack_12 = *(uint16_t *)(piVar4 + 6);
      uStack_10 = *(uint16_t *)((int)piVar5 + 0x16);
      uStack_e = *(uint16_t *)(piVar5 + 6);
      eventflag_clr_flg(puVar6,1);
      iVar1 = param_1 + 4;
      imgp_b_program_and_start(*(uint32_t *)(param_1 + 0x24),(void *)iVar1,&uStack_28);
      eventflag_wai_flg(puVar6,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(*(uint32_t *)(param_1 + 0x24));
      iVar3 = *piVar7;
      if (iVar3 == 2) {
        uStack_28 = 0xc;
      }
      else if (*piVar4 == 1) {
        if (*piVar5 == 1) {
          if (iVar3 != 0) {
            uStack_28 = 4;
          }
          else {
            uStack_28 = 1;
          }
        }
        else if (iVar3 != 0) {
          uStack_28 = 4;
        }
        else {
          uStack_28 = 1;
        }
      }
      else if (*piVar5 == 1) {
        if (iVar3 != 0) {
          uStack_28 = 5;
        }
        else {
          uStack_28 = 2;
        }
      }
      else {
        uStack_28 = 0;
        if (iVar3 != 0) {
          uStack_28 = 3;
        }
      }
      iStack_24 = piVar4[2];
      iStack_20 = piVar5[2];
      uStack_1c = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 4) >> 1);
      if (*piVar4 == 1) {
        uStack_1a = *(uint16_t *)((int)piVar4 + 0x12);
      }
      else {
        uStack_1a = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x12) >> 1);
      }
      uStack_18 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 5) >> 1);
      uStack_16 = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 5) >> 1);
      uStack_14 = (uint16_t)((int)(uint)*(ushort *)((int)piVar4 + 0x16) >> 1);
      if (*piVar4 == 1) {
        uStack_12 = *(uint16_t *)(piVar4 + 6);
      }
      else {
        uStack_12 = (uint16_t)((int)(uint)*(ushort *)(piVar4 + 6) >> 1);
      }
      uStack_10 = (uint16_t)((int)(uint)*(ushort *)((int)piVar5 + 0x16) >> 1);
      if (*piVar5 == 1) {
        uStack_e = *(uint16_t *)(piVar5 + 6);
      }
      else {
        uStack_e = (uint16_t)((int)(uint)*(ushort *)(piVar5 + 6) >> 1);
      }
      eventflag_clr_flg(puVar6,1);
      imgp_b_program_and_start(*(uint32_t *)(param_1 + 0x24),(void *)iVar1,&uStack_28);
      eventflag_wai_flg(puVar6,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(*(uint32_t *)(param_1 + 0x24));
      iStack_24 = piVar4[3];
      iStack_20 = piVar5[3];
      eventflag_clr_flg(puVar6,1);
      imgp_b_program_and_start(*(uint32_t *)(param_1 + 0x24),(void *)iVar1,&uStack_28);
      eventflag_wai_flg(puVar6,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar6,1);
      imgp_b_start_and_notify(*(uint32_t *)(param_1 + 0x24));
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))((int)*param_2 + (int)*(short *)(iVar1 + 0x10),0xb00001,param_2[3])
      ;
    }
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0x15,0);
  }
  return;
}
