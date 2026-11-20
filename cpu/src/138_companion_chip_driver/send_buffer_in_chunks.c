/* @k10d send_buffer_in_chunks @ 0x104620e6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Sends a data buffer in 64-byte chunks using virtual method calls on the object in
 *   param_1.
 * summary:
 *   The function iterates through a data buffer (param_3) in 64-byte blocks. For each
 *   block, it constructs a 6-byte header and sends it via a virtual call (slot 10),
 *   followed by the data bytes via another virtual call (slot 9). It then invokes several
 *   helper functions (cpucom_resp_set_insize, set_ptr_if_field_is_null, etc.) likely to
 *   manage the communication state or wait for acknowledgment. The loop continues until the
 *   entire buffer is processed or an error occurs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046210c) overlaps instruction at (ram,0x1046210a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_buffer_in_chunks(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar4;
  void *pvVar3;
  void *pvVar5;
  int iVar6;
  char cVar7;
  uintptr_t sp;
  int iStack_44;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  uint8_t uStack_e;
  uint8_t uStack_d;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  bVar4 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar4) {
    iVar6 = 0;
    uStack_34 = (uint)*(ushort *)(param_3 + 1);
    iStack_38 = *param_3;
    iVar2 = param_3[2];
    iVar1 = (int)uStack_34 >> 6;
    if (uStack_34 != iVar1 * 0x40) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != 0) {
      iStack_30 = 0;
      do {
        uStack_e = (uint8_t)((uint)iStack_38 >> 0x18);
        uStack_d = (uint8_t)((uint)iStack_38 >> 0x10);
        uStack_c = (uint8_t)((uint)iStack_38 >> 8);
        uStack_b = (uint8_t)iStack_38;
        if (uStack_34 < 0x40) {
          uStack_3c = uStack_34;
        }
        else {
          uStack_3c = 0x40;
          uStack_34 = uStack_34 - 0x40 & 0xffff;
        }
        uStack_a = (uint8_t)(uStack_3c >> 8);
        uStack_9 = (uint8_t)uStack_3c;
        (((vtbl_entry*)(*param_1))[10].fn)((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1,&uStack_e,6);
        if (uStack_3c != 0) {
          cVar7 = '\x06';
          iStack_44 = uStack_3c - 3;
          iVar6 = iStack_30;
          if (2 < iStack_44) {
            do {
              (((vtbl_entry*)(*param_1))[9].fn)
                        ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,cVar7,
                         *(uint8_t *)(iVar2 + iVar6),0xff);
              (((vtbl_entry*)(*param_1))[9].fn)
                        ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,cVar7 + '\x01',
                         *(uint8_t *)(iVar2 + iVar6 + 1),0xff);
              (((vtbl_entry*)(*param_1))[9].fn)
                        ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,cVar7 + '\x02',
                         *(uint8_t *)(iVar2 + iVar6 + 2),0xff);
              iVar6 = iVar6 + 3;
              cVar7 = cVar7 + '\x03';
              iStack_44 = iStack_44 + -3;
            } while (-1 < iStack_44);
          }
          for (iStack_44 = iStack_44 + 2; -1 < iStack_44; iStack_44 = iStack_44 + -1) {
            (((vtbl_entry*)(*param_1))[9].fn)
                      ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,cVar7,
                       *(uint8_t *)(iVar2 + iVar6),0xff);
            iVar6 = iVar6 + 1;
            cVar7 = cVar7 + '\x01';
          }
        }
        cpucom_msg_set_cmd((void*)(param_1[6]),uRam105a72fe);
        cpucom_resp_set_insize((void *)param_1[6],uStack_3c + 6);
        pvVar5 = (void *)param_1[6];
        pvVar3 = (void *)(((vtbl_entry*)(*param_1))[13].fn)
                                   ((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
        set_ptr_if_field_is_null(pvVar5,pvVar3);
        set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
        write_word_at_offset_16((void *)param_1[6],0x1050002);
        eventflag_clr_flg(param_1 + 0xd,3);
        iVar6 = get_registered_reply_code(param_1);
        if (iVar6 == 0) break;
        twai_flg_obj(param_1 + 0xd,3,(void *)0x0,_DAT_105a2af0/*ROM*/);
        iStack_30 = iStack_30 + 0x40;
        iStack_38 = iStack_38 + 0x40;
      } while (iStack_30 < iVar1 << 6);
    }
    invoke_listener_slot_two(param_1 + 7);
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}
