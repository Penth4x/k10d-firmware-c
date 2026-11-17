/* @k10d read_sensor_data_via_cpucom @ 0x10461e76
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_sensor_data_via_cpucom(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar4;
  void *pvVar3;
  uint8_t uVar5;
  void *pvVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uintptr_t sp;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_30;
  uint8_t uStack_e;
  uint8_t uStack_d;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  iStack_30 = 0;
  bVar4 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar4) {
    uStack_3c = (uint)*(ushort *)(param_3 + 1);
    iStack_40 = *param_3;
    iVar2 = param_3[2];
    iVar1 = (int)uStack_3c >> 6;
    if (uStack_3c != iVar1 * 0x40) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != 0) {
      iStack_38 = 0;
      do {
        uStack_e = (uint8_t)((uint)iStack_40 >> 0x18);
        uStack_d = (uint8_t)((uint)iStack_40 >> 0x10);
        uStack_c = (uint8_t)((uint)iStack_40 >> 8);
        uStack_b = (uint8_t)iStack_40;
        uVar9 = uStack_3c;
        if (0x3f < uStack_3c) {
          uStack_3c = uStack_3c - 0x40 & 0xffff;
          uVar9 = 0x40;
        }
        uStack_a = (uint8_t)(uVar9 >> 8);
        uStack_9 = (uint8_t)uVar9;
        (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1,&uStack_e,6);
        cpucom_msg_set_cmd((void *)param_1[6],DAT_105a72fc/*ROM*/);
        cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a72fd/*ROM*/);
        pvVar6 = (void *)param_1[6];
        pvVar3 = (void *)(**(code **)(*param_1 + 0x6c))
                                   ((int)*(short *)(*param_1 + 0x68) + (int)param_1);
        set_ptr_if_field_is_null(pvVar6,pvVar3);
        set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
        write_word_at_offset_16((void *)param_1[6],0x1050001);
        eventflag_clr_flg(param_1 + 0xd,3);
        iStack_30 = get_registered_reply_code(param_1);
        if (iStack_30 == 0) break;
        twai_flg_obj(param_1 + 0xd,3,(void *)0x0,_DAT_105a2af0/*ROM*/);
        cVar8 = '\0';
        if (uVar9 != 0) {
          iVar10 = uVar9 - 3;
          iVar7 = iStack_38;
          if (2 < iVar10) {
            do {
              uVar5 = (**(code **)(*param_1 + 0x3c))
                                ((int)*(short *)(*param_1 + 0x38) + (int)param_1,
                                 DAT_105a72fd/*ROM*/ + cVar8,0xff);
              *(uint8_t *)(iVar2 + iVar7) = uVar5;
              uVar5 = (**(code **)(*param_1 + 0x3c))
                                ((int)*(short *)(*param_1 + 0x38) + (int)param_1,
                                 DAT_105a72fd/*ROM*/ + cVar8 + '\x01',0xff);
              *(uint8_t *)(iVar2 + iVar7 + 1) = uVar5;
              uVar5 = (**(code **)(*param_1 + 0x3c))
                                ((int)*(short *)(*param_1 + 0x38) + (int)param_1,
                                 DAT_105a72fd/*ROM*/ + cVar8 + '\x02',0xff);
              cVar8 = cVar8 + '\x03';
              *(uint8_t *)(iVar2 + iVar7 + 2) = uVar5;
              iVar10 = iVar10 + -3;
              iVar7 = iVar7 + 3;
            } while (-1 < iVar10);
          }
          for (iVar10 = iVar10 + 2; -1 < iVar10; iVar10 = iVar10 + -1) {
            uVar5 = (**(code **)(*param_1 + 0x3c))
                              ((int)*(short *)(*param_1 + 0x38) + (int)param_1,DAT_105a72fd/*ROM*/ + cVar8,
                               0xff);
            cVar8 = cVar8 + '\x01';
            *(uint8_t *)(iVar2 + iVar7) = uVar5;
            iVar7 = iVar7 + 1;
          }
        }
        iStack_38 = iStack_38 + 0x40;
        iStack_40 = iStack_40 + 0x40;
      } while (iStack_38 < iVar1 << 6);
    }
    invoke_listener_slot_two(param_1 + 7);
  }
  return iStack_30;
}
