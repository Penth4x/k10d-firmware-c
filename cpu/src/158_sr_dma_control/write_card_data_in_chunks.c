/* @k10d write_card_data_in_chunks @ 0x1046da70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Writes a block of data to a storage card in 32-byte chunks using a command/response
 *   protocol.
 * summary:
 *   Allocates two buffers (0x400 and 0x200 bytes) and a data buffer sized by
 *   map_index_to_bitmask. It iterates over the data in 32-byte (0x20) increments, sending
 *   each chunk via a sequence of calls to format_string_to_buffer_10545140 (command) and
 *   copy_string_to_buffer (response/ack) with specific command codes (0x105a9xxx). It uses
 *   a virtual call (slot 5) to send the data and a virtual call (slot 6) to finalize. The
 *   caller service_op_dispatch suggests this is part of a card write operation (e.g.,
 *   EEPROM or ROM store).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046daf4) overlaps instruction at (ram,0x1046daf2)
    */

int write_card_data_in_chunks(int param_1,void *param_2)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  uint8_t *puVar5;
  int iVar6;
  int iVar7;
  uint32_t *puVar8;
  int iVar9;
  char *pcVar10;
  uintptr_t sp;
  uint uStack_c0;
  void *pvStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_20;
  uint32_t uStack_18;
  uint16_t uStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  pvStack_b0 = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  pcVar4 = (char *)heap_alloc_2(0x400);
  puVar5 = (uint8_t *)heap_alloc_2(0x200);
  iVar6 = get_or_create_camera_object();
  piVar3 = *(int **)(iVar6 + 0xc);
  uStack_c = 0;
  call_with_offset_lock_10480e32(piVar3,param_2);
  puVar8 = &uStack_c;
  iStack_20 = (**(code **)(*piVar3 + 0x2c))((int)*(short *)(*piVar3 + 0x28) + (int)piVar3,param_2,0)
  ;
  if (iStack_20 != 0) {
    iVar6 = map_index_to_bitmask(param_1);
    if ((iVar6 < 1) || (0x800 < iVar6)) {
      iStack_20 = 0;
    }
    else {
      iVar7 = heap_alloc_2(iVar6);
      uStack_18 = 0;
      uStack_14 = (uint16_t)iVar6;
      iStack_10 = iVar7;
      reset_subobject_at_offset_0x2c_104706a0(param_1);
      pcVar10 = (char *)0x0;
      call_subroutine_and_flag_on_error(param_1,&uStack_18,0);
      reset_subobject_at_offset_0x2c_104706b2(param_1);
      iStack_30 = 0;
      iStack_2c = (int)(((uint)(iVar6 >> 4) >> 0x1b) + iVar6) >> 5;
      if (0 < iStack_2c) {
        uStack_c0 = 0;
        iStack_ac = 1;
        iStack_a8 = 2;
        iStack_a4 = 3;
        iStack_a0 = 4;
        iStack_9c = 5;
        iStack_98 = 6;
        iStack_94 = 7;
        iStack_90 = 8;
        iStack_8c = 9;
        iStack_88 = 10;
        iStack_84 = 0xb;
        iStack_80 = 0xc;
        iStack_7c = 0xd;
        iStack_78 = 0xe;
        iStack_74 = 0xf;
        iStack_70 = 0x10;
        iStack_6c = 0x11;
        iStack_68 = 0x12;
        iStack_64 = 0x13;
        iStack_60 = 0x14;
        iStack_5c = 0x15;
        iStack_58 = 0x16;
        iStack_54 = 0x17;
        iStack_50 = 0x18;
        iStack_4c = 0x19;
        iStack_48 = 0x1a;
        iStack_44 = 0x1b;
        iStack_40 = 0x1c;
        iStack_3c = 0x1d;
        iStack_38 = 0x1e;
        iStack_34 = 0x1f;
        do {
          if (uStack_c0 == (((uint)((int)uStack_c0 >> 3) >> 0x1c) + uStack_c0 & 0xfffffff0)) {
            format_string_to_buffer_10545140(pcVar4,(char *)0x105a90f8/*ROM*/,pcVar10,puVar8);
            format_string_to_buffer_10545140(puVar5,(char *)0x105a9174/*ROM*/,pcVar10,puVar8);
            copy_string_to_buffer(pcVar4,puVar5);
            format_string_to_buffer_10545140(puVar5,(char *)0x105a91f0/*ROM*/,pcVar10,puVar8);
            copy_string_to_buffer(pcVar4,puVar5);
            iVar6 = *piVar3;
            sVar1 = *(short *)(iVar6 + 0x40);
            puVar8 = (uint32_t *)count_string_bytes(pcVar4);
            (**(code **)(iVar6 + 0x44))((int)sVar1 + (int)piVar3,uStack_c,pcVar4);
          }
          format_string_to_buffer_10545140(pcVar4,(char *)0x105a926c/*ROM*/,pvStack_b0,puVar8);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9278/*ROM*/,(void *)(uint)*(byte *)(iStack_30 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_ac));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9284/*ROM*/,(void *)(uint)*(byte *)(iStack_a8 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_a4));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9290/*ROM*/,(void *)(uint)*(byte *)(iStack_a0 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_9c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a929c/*ROM*/,(void *)(uint)*(byte *)(iStack_98 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_94));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92a8/*ROM*/,(void *)(uint)*(byte *)(iStack_90 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_8c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92b4/*ROM*/,(void *)(uint)*(byte *)(iStack_88 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_84));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92c0/*ROM*/,(void *)(uint)*(byte *)(iStack_80 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_7c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92cc/*ROM*/,(void *)(uint)*(byte *)(iStack_78 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_74));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92d8/*ROM*/,(void *)(uint)*(byte *)(iStack_70 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_6c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92e4/*ROM*/,(void *)(uint)*(byte *)(iStack_68 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_64));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92f0/*ROM*/,(void *)(uint)*(byte *)(iStack_60 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_5c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a92fc/*ROM*/,(void *)(uint)*(byte *)(iStack_58 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_54));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9308/*ROM*/,(void *)(uint)*(byte *)(iStack_50 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_4c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9314/*ROM*/,(void *)(uint)*(byte *)(iStack_48 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_44));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a9320/*ROM*/,(void *)(uint)*(byte *)(iStack_40 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_3c));
          copy_string_to_buffer(pcVar4,puVar5);
          format_string_to_buffer_10545140(puVar5,(char *)0x105a932c/*ROM*/,(void *)(uint)*(byte *)(iStack_38 + iVar7),
                       (void *)(uint)*(byte *)(iVar7 + iStack_34));
          copy_string_to_buffer(pcVar4,puVar5);
          iVar6 = *piVar3;
          sVar1 = *(short *)(iVar6 + 0x40);
          puVar8 = (uint32_t *)count_string_bytes(pcVar4);
          pcVar10 = pcVar4;
          (**(code **)(iVar6 + 0x44))((int)sVar1 + (int)piVar3,uStack_c);
          iStack_30 = iStack_30 + 0x20;
          iStack_34 = iStack_34 + 0x20;
          iStack_38 = iStack_38 + 0x20;
          iStack_3c = iStack_3c + 0x20;
          iStack_40 = iStack_40 + 0x20;
          iStack_44 = iStack_44 + 0x20;
          iStack_48 = iStack_48 + 0x20;
          iStack_4c = iStack_4c + 0x20;
          iStack_50 = iStack_50 + 0x20;
          iStack_54 = iStack_54 + 0x20;
          iStack_58 = iStack_58 + 0x20;
          iStack_5c = iStack_5c + 0x20;
          iStack_60 = iStack_60 + 0x20;
          iStack_64 = iStack_64 + 0x20;
          iStack_68 = iStack_68 + 0x20;
          iStack_6c = iStack_6c + 0x20;
          iStack_70 = iStack_70 + 0x20;
          iStack_74 = iStack_74 + 0x20;
          iStack_78 = iStack_78 + 0x20;
          iStack_7c = iStack_7c + 0x20;
          iStack_80 = iStack_80 + 0x20;
          iStack_84 = iStack_84 + 0x20;
          iStack_88 = iStack_88 + 0x20;
          iStack_8c = iStack_8c + 0x20;
          iStack_90 = iStack_90 + 0x20;
          iStack_94 = iStack_94 + 0x20;
          iStack_98 = iStack_98 + 0x20;
          iStack_9c = iStack_9c + 0x20;
          iStack_a0 = iStack_a0 + 0x20;
          iStack_a4 = iStack_a4 + 0x20;
          iStack_a8 = iStack_a8 + 0x20;
          iStack_ac = iStack_ac + 0x20;
          pvStack_b0 = (void *)((int)pvStack_b0 + 0x10);
          uStack_c0 = uStack_c0 + 1;
          iVar6 = iStack_2c + -1;
          bVar2 = 0 < iStack_2c;
          iStack_2c = iVar6;
        } while (bVar2 && iVar6 != 0);
      }
      format_string_to_buffer_10545140(pcVar4,(char *)0x105a933c/*ROM*/,pcVar10,puVar8);
      iVar6 = *piVar3;
      sVar1 = *(short *)(iVar6 + 0x40);
      iVar9 = count_string_bytes(pcVar4);
      (**(code **)(iVar6 + 0x44))((int)sVar1 + (int)piVar3,uStack_c,pcVar4,iVar9);
      heap_free_2(iVar7);
    }
    (**(code **)(*piVar3 + 0x34))((int)*(short *)(*piVar3 + 0x30) + (int)piVar3,uStack_c);
  }
  heap_free_2((int)pcVar4);
  heap_free_2((int)puVar5);
  return iStack_20;
}
