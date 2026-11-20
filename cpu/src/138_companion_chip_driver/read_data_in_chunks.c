/* @k10d read_data_in_chunks @ 0x10462342
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Reads a specified number of bytes from a device in 64-byte chunks and stores them in a
 *   buffer.
 * summary:
 *   The function validates the input parameters and then iterates through the requested
 *   data size in 64-byte blocks. For each block, it sends a command via a virtual call,
 *   waits for a signal, and reads the data byte-by-byte into the destination buffer. It
 *   returns the number of bytes successfully read or an error code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104624ce) overlaps instruction at (ram,0x104624cc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_data_in_chunks(int *param_1,void *param_2,uint *param_3,int param_4)

{
  struct {
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
  } _cfg_c;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar7;
  int iVar5;
  void *pvVar6;
  uint8_t uVar8;
  int iVar9;
  void *pvVar10;
  char cVar11;
  uint uVar12;
  uintptr_t sp;
  uint uStack_30;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  iStack_20 = 0;
  bVar7 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  if (bVar7) {
    uVar4 = *param_3;
    uStack_30 = (uint)*(ushort *)(param_3 + 1);
    uVar3 = param_3[2];
    iVar1 = (int)uStack_30 >> 6;
    if (uStack_30 != iVar1 * 0x40) {
      iVar1 = iVar1 + 1;
    }
    iStack_2c = 0;
    if (iVar1 != 0) {
      iStack_24 = 0;
      do {
        bVar7 = param_4 == 0;
        iVar5 = iStack_2c * (0x40 >> (uint)bVar7) + (uVar4 & 0xffff);
        _cfg_c.uStack_b = (uint8_t)iVar5;
        _cfg_c.uStack_c = (uint8_t)((uint)iVar5 >> 8);
        uVar12 = uStack_30;
        if (0x3f < uStack_30) {
          uStack_30 = uStack_30 - 0x40 & 0xffff;
          uVar12 = 0x40;
        }
        _cfg_c.uStack_a = (uint8_t)((uint)((int)uVar12 >> (uint)bVar7) >> 8);
        _cfg_c.uStack_9 = (uint8_t)((int)uVar12 >> (uint)bVar7);
        (((vtbl_entry*)(*param_1))[10].fn)((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1,&_cfg_c.uStack_c,4);
        iVar5 = 2;
        if (param_4 == 0) {
          iVar9 = 2;
        }
        else {
          iVar5 = 7;
          iVar9 = 7;
        }
        cpucom_msg_set_cmd((void*)(param_1[6]),(&DAT_105a72fc/*ROM*/)[iVar5 * 2]);
        cpucom_resp_set_insize((void *)param_1[6],(uint)(byte)(&DAT_105a72fd/*ROM*/)[iVar9 * 2]);
        pvVar10 = (void *)param_1[6];
        pvVar6 = (void *)(((vtbl_entry*)(*param_1))[13].fn)
                                   ((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
        set_ptr_if_field_is_null(pvVar10,pvVar6);
        set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
        write_word_at_offset_16((void *)param_1[6],0x1050003);
        eventflag_clr_flg(param_1 + 0xd,3);
        iStack_20 = get_registered_reply_code(param_1);
        if (iStack_20 == 0) break;
        cVar11 = '\0';
        twai_flg_obj(param_1 + 0xd,3,(void *)0x0,_DAT_105a2af0/*ROM*/);
        if (uVar12 != 0) {
          iVar5 = uVar12 - 3;
          iVar9 = iStack_24;
          if (2 < iVar5) {
            do {
              if (param_4 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 7;
              }
              uVar8 = (((vtbl_entry*)(*param_1))[7].fn)
                                ((int)((vtbl_entry*)(*param_1))[7].adj + (int)param_1,
                                 (&DAT_105a72fd/*ROM*/)[iVar2 * 2] + cVar11,0xff);
              *(uint8_t *)(uVar3 + iVar9) = uVar8;
              if (param_4 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 7;
              }
              uVar8 = (((vtbl_entry*)(*param_1))[7].fn)
                                ((int)((vtbl_entry*)(*param_1))[7].adj + (int)param_1,
                                 (&DAT_105a72fd/*ROM*/)[iVar2 * 2] + cVar11 + '\x01',0xff);
              *(uint8_t *)(uVar3 + iVar9 + 1) = uVar8;
              if (param_4 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 7;
              }
              uVar8 = (((vtbl_entry*)(*param_1))[7].fn)
                                ((int)((vtbl_entry*)(*param_1))[7].adj + (int)param_1,
                                 (&DAT_105a72fd/*ROM*/)[iVar2 * 2] + cVar11 + '\x02',0xff);
              cVar11 = cVar11 + '\x03';
              *(uint8_t *)(uVar3 + iVar9 + 2) = uVar8;
              iVar5 = iVar5 + -3;
              iVar9 = iVar9 + 3;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            if (param_4 == 0) {
              iVar2 = 2;
            }
            else {
              iVar2 = 7;
            }
            uVar8 = (((vtbl_entry*)(*param_1))[7].fn)
                              ((int)((vtbl_entry*)(*param_1))[7].adj + (int)param_1,
                               (&DAT_105a72fd/*ROM*/)[iVar2 * 2] + cVar11,0xff);
            cVar11 = cVar11 + '\x01';
            *(uint8_t *)(uVar3 + iVar9) = uVar8;
            iVar9 = iVar9 + 1;
          }
        }
        iStack_2c = iStack_2c + 1;
        iStack_24 = iStack_24 + 0x40;
      } while (iStack_2c < iVar1);
    }
    invoke_listener_slot_two(param_1 + 7);
  }
  return iStack_20;
}
