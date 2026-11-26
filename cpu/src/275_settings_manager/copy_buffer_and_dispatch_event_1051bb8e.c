/* @k10d copy_buffer_and_dispatch_event_1051bb8e @ 0x1051bb8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 275_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_buffer_and_dispatch_event_1051bb8e(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint16_t uStack_5e;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint16_t uStack_56;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint32_t uStack_4c;
  int iStack_48;
  uint16_t uStack_44;
  int iStack_40;
  uint16_t uStack_3c;
  uint16_t uStack_3a;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t *puStack_2c;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint32_t uStack_24;
  int iStack_20;
  uint32_t *puStack_1c;
  uint32_t uStack_18;
  uint32_t *puStack_14;
  void *puStack_10;
  uint32_t uStack_c;
  
  iVar3 = get_or_create_singleton_object_104fb12e();
  iVar7 = *(int *)(iVar3 + 100);
  iVar3 = 0;
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x26);
    do {
      uVar1 = *(ushort *)(param_1 + 0x14);
      iVar4 = 0;
      iVar5 = iVar3 * uVar2;
      if ((int)uVar2 >> 2 != 0) {
        iVar6 = 0;
        do {
          *(uint32_t *)(iVar6 + iVar5 + param_3) =
               *(uint32_t *)(iVar6 + iVar3 * (uint)uVar1 + param_2);
          uVar2 = (uint)*(ushort *)(param_1 + 0x26);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar4 < (int)uVar2 >> 2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x28));
  }
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_4c = 0;
  uStack_44 = *(uint16_t *)(param_1 + 0x26);
  puStack_1c = &uStack_4c;
  uStack_3c = *(uint16_t *)(param_1 + 0x26);
  uStack_3a = *(uint16_t *)(param_1 + 0x26);
  uStack_38 = *(uint16_t *)(param_1 + 0x28);
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  uStack_58 = 0;
  uStack_56 = 0x100;
  uStack_54 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  puStack_2c = &uStack_5e;
  uStack_24 = 0x105d68fc/*ROM*/;
  puStack_10 = &DAT_1059e4d0/*ROM*/;
  uStack_26 = 1;
  uStack_18 = 0x10f0001;
  iStack_20 = param_1 + 0x2c;
  uStack_c = 0;
  iStack_48 = param_3;
  iStack_40 = param_3;
  puStack_14 = puStack_1c;
  eventflag_clr_flg((uint32_t *)(0x8005a15c/*SDRAM*/),(uint)(1));
  reg_framework_send(iVar7 + 8, &iStack_20, 0x2);
  eventflag_wai_flg((uint32_t *)0x8005a15c/*SDRAM*/,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x8005a15c/*SDRAM*/),(uint)(1));
  iVar3 = 0;
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x26);
    do {
      iVar7 = iVar3 * uVar2;
      uVar1 = *(ushort *)(param_1 + 0x14);
      iVar5 = 0;
      if ((int)uVar2 >> 2 != 0) {
        iVar4 = 0;
        do {
          *(uint32_t *)(iVar4 + iVar3 * (uint)uVar1 + param_2) =
               *(uint32_t *)(iVar4 + iVar7 + param_3);
          uVar2 = (uint)*(ushort *)(param_1 + 0x26);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < (int)uVar2 >> 2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x28));
  }
  virtual_destructor_free_10428222(&iStack_20,2);
  return;
}
