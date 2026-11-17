/* @k10d dispatch_event_by_type_10503594 @ 0x10503594
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Dispatches an event object based on its type field, calling virtual handlers and
 *   updating state fields.
 * summary:
 *   Checks the type field at param_2[2] (1, 2, or 3) to determine the action. For types 1
 *   and 2, it initializes a local structure, calls helper functions to update state, and
 *   writes results back to the event object. For all types, it invokes a virtual method
 *   (slot 2) on the event object with the type as an argument. The function uses a mutex-
 *   like pattern (eventflag_clr_flg/eventflag_wai_flg) around state updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105035b0) overlaps instruction at (ram,0x105035ae)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_10503594(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint16_t *puVar4;
  uintptr_t sp;
  uint16_t uStack_b4;
  uint16_t uStack_b2;
  uint16_t uStack_b0;
  uint16_t uStack_ae;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint16_t uStack_a8;
  uint16_t uStack_a6;
  uint16_t uStack_a4;
  uint16_t uStack_a2;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint16_t uStack_96;
  uint16_t uStack_94;
  uint16_t uStack_92;
  uint16_t uStack_90;
  uint8_t uStack_8e;
  uint8_t uStack_8d;
  uint8_t uStack_8c;
  uint8_t uStack_8b;
  uint8_t uStack_8a;
  uint8_t uStack_89;
  uint8_t uStack_88;
  uint8_t uStack_87;
  uint8_t uStack_86;
  uint8_t uStack_85;
  uint8_t uStack_84;
  uint8_t uStack_83;
  uint8_t uStack_82;
  uint16_t uStack_80;
  uint16_t uStack_7e;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint8_t uStack_64;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint16_t uStack_56;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint16_t uStack_3e;
  uint16_t uStack_3c;
  uint8_t uStack_3a;
  uint8_t uStack_39;
  uint8_t uStack_38;
  uint8_t uStack_37;
  uint8_t uStack_36;
  uint8_t uStack_35;
  uint8_t uStack_34;
  uint8_t uStack_33;
  uint8_t uStack_32;
  uint8_t uStack_31;
  uint8_t uStack_30;
  uint8_t uStack_2f;
  uint8_t uStack_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2];
    if (iVar1 == 1) {
      puVar4 = (uint16_t *)param_2[1];
      alloc_and_zero_struct_1050398a(&uStack_b4);
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_74 = *(uint32_t *)(puVar4 + 0x20);
      uStack_78 = *(uint32_t *)(puVar4 + 0x1e);
      uStack_80 = puVar4[0x1a];
      uStack_7e = puVar4[0x1b];
      uStack_7c = *(uint32_t *)(puVar4 + 0x1c);
      puVar3 = (uint32_t *)(param_1 + 0x28);
      eventflag_clr_flg(puVar3,1);
      configure_device_from_params_10503b80(*(int *)(param_1 + 0x24),param_1 + 4,&uStack_b4);
      eventflag_wai_flg(puVar3,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar3,1);
      call_two_helpers_on_struct_10503d44(*(uint32_t *)(param_1 + 0x24));
      *puVar4 = uStack_b4;
      puVar4[1] = uStack_b2;
      puVar4[2] = uStack_b0;
      puVar4[3] = uStack_ae;
      puVar4[4] = uStack_ac;
      puVar4[5] = uStack_aa;
      puVar4[6] = uStack_a8;
      puVar4[7] = uStack_a6;
      puVar4[8] = uStack_a4;
      puVar4[9] = uStack_a2;
      puVar4[10] = uStack_a0;
      puVar4[0xb] = uStack_9e;
      puVar4[0xc] = uStack_9c;
      puVar4[0xd] = uStack_9a;
      puVar4[0xe] = uStack_98;
      puVar4[0xf] = uStack_96;
      puVar4[0x10] = uStack_94;
      puVar4[0x11] = uStack_92;
      puVar4[0x12] = uStack_90;
      *(uint8_t *)(puVar4 + 0x13) = uStack_8e;
      *(uint8_t *)((int)puVar4 + 0x27) = uStack_8d;
      *(uint8_t *)(puVar4 + 0x14) = uStack_8c;
      *(uint8_t *)((int)puVar4 + 0x29) = uStack_8b;
      *(uint8_t *)(puVar4 + 0x15) = uStack_8a;
      *(uint8_t *)((int)puVar4 + 0x2b) = uStack_89;
      *(uint8_t *)(puVar4 + 0x16) = uStack_88;
      *(uint8_t *)((int)puVar4 + 0x2d) = uStack_87;
      *(uint8_t *)(puVar4 + 0x17) = uStack_86;
      *(uint8_t *)((int)puVar4 + 0x2f) = uStack_85;
      *(uint8_t *)(puVar4 + 0x18) = uStack_84;
      *(uint8_t *)((int)puVar4 + 0x31) = uStack_83;
      *(uint8_t *)(puVar4 + 0x19) = uStack_82;
      uVar2 = call_subroutine_at_offset_c(*(int *)(param_1 + 0x24));
      *(uint32_t *)(puVar4 + 0x22) = uVar2;
      iVar1 = clamp_status_to_range(*(int *)(param_1 + 0x24));
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else if (iVar1 == 1) {
        uVar2 = 1;
      }
      else if (iVar1 == 2) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
        if (iVar1 != 3) {
          uVar2 = 0;
        }
      }
      *(uint32_t *)(puVar4 + 0x24) = uVar2;
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),1,param_2[3]);
      free_if_flag_set_10503a22(&uStack_b4,2);
    }
    else if (iVar1 == 2) {
      puVar4 = (uint16_t *)param_2[1];
      alloc_and_zero_struct_1050398a(&uStack_60);
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_20 = *(uint32_t *)(puVar4 + 0x20);
      uStack_24 = *(uint32_t *)(puVar4 + 0x1e);
      uStack_2c = puVar4[0x1a];
      uStack_2a = puVar4[0x1b];
      uStack_28 = *(uint32_t *)(puVar4 + 0x1c);
      uStack_10 = *(uint8_t *)(puVar4 + 0x28);
      uStack_60 = *puVar4;
      uStack_5e = puVar4[1];
      uStack_5c = puVar4[2];
      uStack_5a = puVar4[3];
      uStack_58 = puVar4[4];
      uStack_56 = puVar4[5];
      uStack_54 = puVar4[6];
      uStack_52 = puVar4[7];
      uStack_50 = puVar4[8];
      uStack_4e = puVar4[9];
      uStack_4c = puVar4[10];
      uStack_4a = puVar4[0xb];
      uStack_48 = puVar4[0xc];
      uStack_46 = puVar4[0xd];
      uStack_44 = puVar4[0xe];
      uStack_42 = puVar4[0xf];
      uStack_40 = puVar4[0x10];
      uStack_3e = puVar4[0x11];
      uStack_3c = puVar4[0x12];
      uStack_3a = *(uint8_t *)(puVar4 + 0x13);
      uStack_39 = *(uint8_t *)((int)puVar4 + 0x27);
      uStack_38 = *(uint8_t *)(puVar4 + 0x14);
      uStack_37 = *(uint8_t *)((int)puVar4 + 0x29);
      uStack_36 = *(uint8_t *)(puVar4 + 0x15);
      uStack_35 = *(uint8_t *)((int)puVar4 + 0x2b);
      uStack_34 = *(uint8_t *)(puVar4 + 0x16);
      uStack_33 = *(uint8_t *)((int)puVar4 + 0x2d);
      uStack_32 = *(uint8_t *)(puVar4 + 0x17);
      uStack_31 = *(uint8_t *)((int)puVar4 + 0x2f);
      uStack_30 = *(uint8_t *)(puVar4 + 0x18);
      uStack_2f = *(uint8_t *)((int)puVar4 + 0x31);
      uStack_2e = *(uint8_t *)(puVar4 + 0x19);
      puVar3 = (uint32_t *)(param_1 + 0x28);
      eventflag_clr_flg(puVar3,1);
      configure_device_from_params_10503c40(*(int *)(param_1 + 0x24),param_1 + 4,&uStack_60);
      eventflag_wai_flg(puVar3,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar3,1);
      call_two_helpers_on_struct_10503d44(*(uint32_t *)(param_1 + 0x24));
      uVar2 = call_subroutine_at_offset_c(*(int *)(param_1 + 0x24));
      *(uint32_t *)(puVar4 + 0x22) = uVar2;
      iVar1 = clamp_status_to_range(*(int *)(param_1 + 0x24));
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else if (iVar1 == 1) {
        uVar2 = 1;
      }
      else if (iVar1 == 2) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
        if (iVar1 != 3) {
          uVar2 = 0;
        }
      }
      *(uint32_t *)(puVar4 + 0x24) = uVar2;
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),2,param_2[3]);
      free_if_flag_set_10503a22(&uStack_60,2);
    }
    else if (iVar1 == 3) {
      iVar1 = *(int *)*param_2;
      (**(code **)(iVar1 + 0x14))(*param_2 + (int)*(short *)(iVar1 + 0x10),3,param_2[3]);
    }
  }
  return;
}
