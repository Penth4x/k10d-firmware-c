/* @k10d build_and_send_16_byte_command @ 0x1046e46e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Constructs a 16-byte command buffer from a template and data, then transmits it via a
 *   virtual interface.
 * summary:
 *   Allocates two heap buffers (0x400 and 0x200 bytes) and a 0x800-byte data buffer. It
 *   iterates 16 times, using format_string_to_buffer_10545140 and copy_string_to_buffer to
 *   assemble a command structure from fixed ROM strings and data bytes, then calls a
 *   virtual method (slot at offset 0x44) to send the result. Finally, it frees the
 *   allocated buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046e4f2) overlaps instruction at (ram,0x1046e4f0)
    */

int build_and_send_16_byte_command(int param_1,void *param_2)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint8_t *puVar6;
  int iVar7;
  int iVar8;
  uint32_t *puVar9;
  int iVar10;
  char *pcVar11;
  uintptr_t sp;
  uint uStack_7c;
  void *pvStack_6c;
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
  int iStack_28;
  uint32_t uStack_18;
  uint16_t uStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  pvStack_6c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  pcVar5 = (char *)heap_alloc_2(0x400);
  puVar6 = (uint8_t *)heap_alloc_2(0x200);
  iVar7 = get_or_create_camera_object();
  piVar3 = *(int **)(iVar7 + 0xc);
  uStack_c = 0;
  call_with_offset_lock_10480e32(piVar3,param_2);
  puVar9 = &uStack_c;
  iVar7 = (((vtbl_entry*)(*piVar3))[5].fn)((int)((vtbl_entry*)(*piVar3))[5].adj + (int)piVar3,param_2,0);
  if (iVar7 != 0) {
    iVar8 = heap_alloc_2(0x800);
    uStack_18 = 0;
    uStack_14 = 0x800;
    iStack_10 = iVar8;
    reset_subobject_at_offset_0x2c_104706a0(param_1);
    pcVar11 = (char *)0x1;
    call_subroutine_and_flag_on_error(param_1,&uStack_18,1);
    reset_subobject_at_offset_0x2c_104706b2(param_1);
    iStack_2c = 0;
    uStack_7c = 0;
    iStack_28 = 0x80;
    iStack_68 = 1;
    iStack_64 = 2;
    iStack_60 = 3;
    iStack_5c = 4;
    iStack_58 = 5;
    iStack_54 = 6;
    iStack_50 = 7;
    iStack_4c = 8;
    iStack_48 = 9;
    iStack_44 = 10;
    iStack_40 = 0xb;
    iStack_3c = 0xc;
    iStack_38 = 0xd;
    iStack_34 = 0xe;
    iStack_30 = 0xf;
    do {
      if (uStack_7c == (((uint)((int)uStack_7c >> 3) >> 0x1c) + uStack_7c & 0xfffffff0)) {
        format_string_to_buffer_10545140(pcVar5,(char *)0x105a93b0/*ROM*/,pcVar11,puVar9);
        format_string_to_buffer_10545140(puVar6,(char *)0x105a940c/*ROM*/,pcVar11,puVar9);
        copy_string_to_buffer(pcVar5,puVar6);
        format_string_to_buffer_10545140(puVar6,(char *)0x105a9468/*ROM*/,pcVar11,puVar9);
        copy_string_to_buffer(pcVar5,puVar6);
        iVar4 = *piVar3;
        sVar1 = *(short *)(iVar4 + 0x40);
        puVar9 = (uint32_t *)count_string_bytes(pcVar5);
        (((vtbl_entry*)(iVar4))[8].fn)((int)sVar1 + (int)piVar3,uStack_c,pcVar5);
      }
      format_string_to_buffer_10545140(pcVar5,(char *)0x105a94c4/*ROM*/,pvStack_6c,puVar9);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94d0/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_2c),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94d8/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_68),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94e0/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_64),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94e8/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_60),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94f0/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_5c),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a94f8/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_58),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9500/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_54),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9508/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_50),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9510/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_4c),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9518/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_48),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9520/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_44),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9528/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_40),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9530/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_3c),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9538/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_38),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9540/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_34),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      format_string_to_buffer_10545140(puVar6,(char *)0x105a9548/*ROM*/,(void *)(uint)*(byte *)(iVar8 + iStack_30),puVar9);
      copy_string_to_buffer(pcVar5,puVar6);
      iVar4 = *piVar3;
      sVar1 = *(short *)(iVar4 + 0x40);
      puVar9 = (uint32_t *)count_string_bytes(pcVar5);
      pcVar11 = pcVar5;
      (((vtbl_entry*)(iVar4))[8].fn)((int)sVar1 + (int)piVar3,uStack_c);
      iStack_2c = iStack_2c + 0x10;
      iStack_30 = iStack_30 + 0x10;
      iStack_34 = iStack_34 + 0x10;
      iStack_38 = iStack_38 + 0x10;
      iStack_3c = iStack_3c + 0x10;
      iStack_40 = iStack_40 + 0x10;
      iStack_44 = iStack_44 + 0x10;
      iStack_48 = iStack_48 + 0x10;
      iStack_4c = iStack_4c + 0x10;
      iStack_50 = iStack_50 + 0x10;
      iStack_54 = iStack_54 + 0x10;
      iStack_58 = iStack_58 + 0x10;
      iStack_5c = iStack_5c + 0x10;
      iStack_60 = iStack_60 + 0x10;
      iStack_64 = iStack_64 + 0x10;
      iStack_68 = iStack_68 + 0x10;
      pvStack_6c = (void *)((int)pvStack_6c + 0x10);
      uStack_7c = uStack_7c + 1;
      iVar4 = iStack_28 + -1;
      bVar2 = 0 < iStack_28;
      iStack_28 = iVar4;
    } while (bVar2 && iVar4 != 0);
    format_string_to_buffer_10545140(pcVar5,(char *)0x105a9554/*ROM*/,pcVar11,puVar9);
    iVar4 = *piVar3;
    sVar1 = *(short *)(iVar4 + 0x40);
    iVar10 = count_string_bytes(pcVar5);
    (((vtbl_entry*)(iVar4))[8].fn)((int)sVar1 + (int)piVar3,uStack_c,pcVar5,iVar10);
    heap_free_2(iVar8);
    (((vtbl_entry*)(*piVar3))[6].fn)((int)((vtbl_entry*)(*piVar3))[6].adj + (int)piVar3,uStack_c);
  }
  heap_free_2((int)pcVar5);
  heap_free_2((int)puVar6);
  return iVar7;
}
