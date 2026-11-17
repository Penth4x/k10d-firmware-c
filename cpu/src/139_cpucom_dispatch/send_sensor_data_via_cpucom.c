/* @k10d send_sensor_data_via_cpucom @ 0x10462642
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046266a) overlaps instruction at (ram,0x10462668)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_sensor_data_via_cpucom(int *param_1,void *param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar5;
  void *pvVar4;
  void *pvVar6;
  int iVar7;
  char cVar8;
  uintptr_t sp;
  int iStack_3c;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_24;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  bVar5 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar5) {
    iVar7 = 0;
    uVar3 = *param_3;
    uStack_30 = (uint)*(ushort *)(param_3 + 1);
    uVar2 = param_3[2];
    iVar1 = (int)uStack_30 >> 6;
    if (uStack_30 != iVar1 * 0x40) {
      iVar1 = iVar1 + 1;
    }
    iStack_2c = 0;
    if (iVar1 != 0) {
      iStack_24 = 0;
      do {
        bVar5 = param_4 == 0;
        iVar7 = iStack_2c * (0x40 >> (uint)bVar5) + (uVar3 & 0xffff);
        uStack_c = (uint8_t)((uint)iVar7 >> 8);
        uStack_b = (uint8_t)iVar7;
        if (uStack_30 < 0x40) {
          uStack_34 = uStack_30;
        }
        else {
          uStack_34 = 0x40;
          uStack_30 = uStack_30 - 0x40 & 0xffff;
        }
        uStack_a = (uint8_t)((uint)((int)uStack_34 >> (uint)bVar5) >> 8);
        uStack_9 = (uint8_t)((int)uStack_34 >> (uint)bVar5);
        (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1,&uStack_c,4);
        if (uStack_34 != 0) {
          cVar8 = '\x04';
          iStack_3c = uStack_34 - 3;
          iVar7 = iStack_24;
          if (2 < iStack_3c) {
            do {
              (**(code **)(*param_1 + 0x4c))
                        ((int)*(short *)(*param_1 + 0x48) + (int)param_1,cVar8,
                         *(uint8_t *)(uVar2 + iVar7),0xff);
              (**(code **)(*param_1 + 0x4c))
                        ((int)*(short *)(*param_1 + 0x48) + (int)param_1,cVar8 + '\x01',
                         *(uint8_t *)(uVar2 + iVar7 + 1),0xff);
              (**(code **)(*param_1 + 0x4c))
                        ((int)*(short *)(*param_1 + 0x48) + (int)param_1,cVar8 + '\x02',
                         *(uint8_t *)(uVar2 + iVar7 + 2),0xff);
              iVar7 = iVar7 + 3;
              cVar8 = cVar8 + '\x03';
              iStack_3c = iStack_3c + -3;
            } while (-1 < iStack_3c);
          }
          for (iStack_3c = iStack_3c + 2; -1 < iStack_3c; iStack_3c = iStack_3c + -1) {
            (**(code **)(*param_1 + 0x4c))
                      ((int)*(short *)(*param_1 + 0x48) + (int)param_1,cVar8,
                       *(uint8_t *)(uVar2 + iVar7),0xff);
            iVar7 = iVar7 + 1;
            cVar8 = cVar8 + '\x01';
          }
        }
        iVar7 = 3;
        if (param_4 != 0) {
          iVar7 = 8;
        }
        cpucom_msg_set_cmd((void *)param_1[6],(&DAT_105a72fc/*ROM*/)[iVar7 * 2]);
        cpucom_resp_set_insize((void *)param_1[6],uStack_34 + 4);
        pvVar6 = (void *)param_1[6];
        pvVar4 = (void *)(**(code **)(*param_1 + 0x6c))
                                   ((int)*(short *)(*param_1 + 0x68) + (int)param_1);
        set_ptr_if_field_is_null(pvVar6,pvVar4);
        set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
        write_word_at_offset_16((void *)param_1[6],0x1050004);
        eventflag_clr_flg(param_1 + 0xd,3);
        iVar7 = get_registered_reply_code(param_1);
        if (iVar7 == 0) break;
        twai_flg_obj(param_1 + 0xd,3,(void *)0x0,_DAT_105a2af0/*ROM*/);
        iStack_2c = iStack_2c + 1;
        iStack_24 = iStack_24 + 0x40;
      } while (iStack_2c < iVar1);
    }
    invoke_listener_slot_two(param_1 + 7);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}
