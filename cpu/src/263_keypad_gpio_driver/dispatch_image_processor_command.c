/* @k10d dispatch_image_processor_command @ 0x104ff48e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Handles incoming image processor commands by switching on the command ID and executing
 *   the corresponding pipeline operation.
 * summary:
 *   The function checks the command ID in param_2[2] and branches on values 0xc00001
 *   through 0xc00004. For each case, it processes parameters from param_2[1], calls helper
 *   functions like adjust_image_processor_gain_104ffb94 or
 *   adjust_image_processor_gain_104ff85c, and invokes a virtual method (slot 2) on the
 *   object pointed to by *param_2 to signal completion. The module context indicates this
 *   drives the image processor block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ff4b2) overlaps instruction at (ram,0x104ff4b0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_image_processor_command(int param_1,int *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t *puVar7;
  uint32_t uVar8;
  uint32_t *puVar9;
  uintptr_t sp;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  int iStack_10;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  uStack_14 = 0;
  if (param_2 != (int *)0x0) {
    iVar6 = param_2[2];
    if (iVar6 == 0xc00003) {
      puVar7 = (uint32_t *)param_2[1];
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      uVar4 = puVar7[5];
      uVar5 = puVar7[6];
      uVar8 = puVar7[7];
      if (*(char *)(puVar7 + 8) != '\0') {
        adjust_image_processor_gain_104ffb94(param_1,*puVar7,puVar7[4]);
      }
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00004,param_2[3]);
      if (*(char *)((int)puVar7 + 0x23) != '\0') {
        adjust_image_processor_gain_104ffb94(param_1,uVar3,uVar8);
      }
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00008,param_2[3]);
      if (*(char *)((int)puVar7 + 0x21) != '\0') {
        adjust_image_processor_gain_104ffb94(param_1,uVar1,uVar4);
      }
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00005,param_2[3]);
      if (*(char *)((int)puVar7 + 0x22) != '\0') {
        adjust_image_processor_gain_104ffb94(param_1,uVar2,uVar5);
      }
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00003,param_2[3]);
    }
    else if (iVar6 == 0xc00001) {
      iVar6 = param_2[1];
      adjust_image_processor_gain_104ff85c(param_1,iVar6);
      *(uint32_t *)(iVar6 + 0x2c) = *(uint32_t *)(param_1 + 0x24);
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00001,param_2[3]);
    }
    else if (iVar6 == 0xc00002) {
      puVar7 = (uint32_t *)param_2[1];
      uStack_40 = 0;
      uStack_44 = puVar7[6];
      uStack_4c = puVar7[4];
      uStack_54 = puVar7[2];
      uStack_50 = puVar7[3];
      uStack_58 = puVar7[1];
      uStack_3c = puVar7[8];
      uStack_5c = *puVar7;
      uStack_48 = *(uint16_t *)(puVar7 + 5);
      uStack_46 = *(uint16_t *)((int)puVar7 + 0x16);
      iVar6 = (*(code *)0x104fff0a/*ROM*/)
                        (param_1,*(uint16_t *)(puVar7 + 5),*(uint16_t *)((int)puVar7 + 0x16),
                         puVar7[8]);
      if (iVar6 == 0) {
        puVar9 = (uint32_t *)(param_1 + 0x3c);
        eventflag_clr_flg(puVar9,1);
        init_object_and_dispatch_mode(*(int *)(param_1 + 0x30),param_1 + 4,&uStack_5c);
        eventflag_wai_flg(puVar9,1,&uStack_14,_DAT_105a2af0/*ROM*/);
        eventflag_clr_flg(puVar9,1);
        iVar6 = (*(code *)0x104fff62/*ROM*/)(param_1,*(uint32_t *)(param_1 + 0x28));
      }
      puVar7[7] = iVar6;
      reset_object_fields_and_call_vtable(*(uint32_t *)(param_1 + 0x30));
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00002,param_2[3]);
    }
    else if (iVar6 == 0xc00004) {
      puVar9 = (uint32_t *)param_2[1];
      uStack_1c = 0;
      uStack_20 = puVar9[6];
      uStack_28 = puVar9[4];
      uStack_30 = puVar9[2];
      uStack_2c = puVar9[3];
      uStack_34 = puVar9[1];
      uStack_18 = puVar9[8];
      uStack_38 = *puVar9;
      uStack_24 = *(uint16_t *)(puVar9 + 5);
      uStack_22 = *(uint16_t *)((int)puVar9 + 0x16);
      puVar7 = (uint32_t *)(param_1 + 0x3c);
      eventflag_clr_flg(puVar7,1);
      configure_sensor_readout_sequence(*(uint32_t *)(param_1 + 0x30),param_1 + 4,&uStack_38);
      eventflag_wai_flg(puVar7,1,&uStack_14,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar7,1);
      uVar1 = func_0x104fff62(param_1,*(uint32_t *)(param_1 + 0x28));
      puVar9[7] = uVar1;
      uStack_c = 0;
      iStack_10 = 3;
      uStack_a = uStack_c;
      (*(code *)0x1050166a/*ROM*/)(*(uint32_t *)(param_1 + 0x30),&uStack_c,&uStack_a,&iStack_10);
      *(uint16_t *)(puVar9 + 5) = uStack_c;
      *(uint16_t *)((int)puVar9 + 0x16) = uStack_a;
      if (iStack_10 == 1) {
        puVar9[6] = 1;
      }
      else {
        if (iStack_10 == 2) {
          uVar1 = 2;
        }
        else if (iStack_10 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 3;
        }
        puVar9[6] = uVar1;
      }
      reset_object_fields_and_call_vtable(__frv_reg_unset(4));
      iVar6 = *(int *)*param_2;
      (**(code **)(iVar6 + 0x14))(*param_2 + (int)*(short *)(iVar6 + 0x10),0xc00006,param_2[3]);
    }
  }
  return;
}
