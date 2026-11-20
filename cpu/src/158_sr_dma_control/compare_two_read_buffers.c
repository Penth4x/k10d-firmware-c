/* @k10d compare_two_read_buffers @ 0x1046e95c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Reads two 0x800-byte buffers via helper calls, compares them byte-by-byte, and logs any
 *   mismatch.
 * summary:
 *   The function allocates two 0x800-byte heap buffers and calls
 *   call_subroutine_and_flag_on_error to populate each. It then iterates through the 2048
 *   bytes, comparing the contents of the two buffers. If a mismatch is found, it logs the
 *   offset and differing values using format_string_to_buffer_10545140 and sr_dma_command,
 *   and returns false. If all bytes match, it returns true. The function also manages a C++
 *   object (cls_105ab468) and calls sr_dma_command for logging at various stages.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046e9d6) overlaps instruction at (ram,0x1046e9d4)
    */

bool compare_two_read_buffers(int param_1,void *param_2)

{
  int iVar1;
  uint8_t *puVar2;
  bool bVar4;
  int iVar3;
  uint8_t *puVar5;
  int *piVar6;
  void *pvVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStackY_cc [2];
  uint8_t auStack_88 [80];
  uint32_t uStack_38;
  uint16_t uStack_34;
  int iStack_30;
  cls_105ab468 cStack_2c;
  uint32_t uStack_c;
  
  puVar8 = auStackY_cc;
  uStack_34 = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  sr_dma_command(param_1,3,5,(void*)(0x105a9558/*ROM*/),7,0xff);
  iVar1 = get_or_create_camera_object();
  piVar6 = *(int **)(iVar1 + 0xc);
  cls_105ab468_new(&cStack_2c);
  iVar1 = call_with_offset_lock_1048101c(piVar6,param_2,&cStack_2c);
  if (iVar1 == 0) {
    bVar4 = false;
  }
  else {
    uStack_c = 0;
    iVar1 = (((vtbl_entry*)(*piVar6))[5].fn)
                      ((int)((vtbl_entry*)(*piVar6))[5].adj + (int)piVar6,param_2,1,&uStack_c);
    if (iVar1 == 0) {
      bVar4 = false;
    }
    else {
      puVar2 = (uint8_t *)heap_alloc_2(cStack_2c.field_0x10 + 1);
      (((vtbl_entry*)(*piVar6))[7].fn)
                ((int)((vtbl_entry*)(*piVar6))[7].adj + (int)piVar6,uStack_c,puVar2,cStack_2c.field_0x10)
      ;
      (((vtbl_entry*)(*piVar6))[6].fn)((int)((vtbl_entry*)(*piVar6))[6].adj + (int)piVar6,uStack_c);
      reset_subobject_at_offset_0x2c_104706a0(param_1);
      puVar2[cStack_2c.field_0x10] = 0;
      iVar1 = heap_alloc_2(0x800);
      uStack_38 = 0;
      uStack_34 = 0x800;
      iStack_30 = iVar1;
      call_subroutine_and_flag_on_error(param_1,&uStack_38,1);
      puVar5 = puVar2;
      bVar4 = parse_quoted_token_stream(param_1,iVar1,0x800,(int)puVar2);
      if (bVar4) {
        uStack_38 = 0;
        uStack_34 = 0x800;
        iStack_30 = iVar1;
        call_subroutine_and_set_flag(param_1,&uStack_38,1);
        iVar3 = heap_alloc_2(0x800);
        uStack_38 = 0;
        uStack_34 = 0x800;
        iStack_30 = iVar3;
        call_subroutine_and_flag_on_error(param_1,&uStack_38,1);
        pvVar7 = (void *)0x0;
        do {
          format_string_to_buffer_10545140(auStack_88,(char *)0x105a9560/*ROM*/,pvVar7,puVar5);
          *(uint16_t *)(puVar8 + 2) = 7;
          *(uint16_t *)(puVar8 + 6) = 0xff;
          puVar5 = auStack_88;
          sr_dma_command(param_1,3,1,auStack_88,*(uint16_t *)(puVar8 + 2),
                         *(uint16_t *)(puVar8 + 6));
          if (*(char *)((int)pvVar7 + iVar1) != *(char *)((int)pvVar7 + iVar3)) {
            format_string_to_buffer_10545140(auStack_88,(char *)0x105a9574/*ROM*/,pvVar7,puVar5);
            *(uint16_t *)(puVar8 + 2) = 7;
            *(uint16_t *)(puVar8 + 6) = 0xff;
            sr_dma_command(param_1,4,1,auStack_88,*(uint16_t *)(puVar8 + 2),
                           *(uint16_t *)(puVar8 + 6));
            format_string_to_buffer_10545140(auStack_88,(char *)0x105a9588/*ROM*/,(void *)(uint)*(byte *)((int)pvVar7 + iVar3),
                         (void *)(uint)*(byte *)((int)pvVar7 + iVar1));
            *(uint16_t *)(puVar8 + 2) = 7;
            *(uint16_t *)(puVar8 + 6) = 0xff;
            sr_dma_command(param_1,5,1,auStack_88,*(uint16_t *)(puVar8 + 2),
                           *(uint16_t *)(puVar8 + 6));
            bVar4 = false;
            break;
          }
          pvVar7 = (void *)((int)pvVar7 + 1);
        } while ((int)pvVar7 < 0x800);
        heap_free_2(iVar3);
      }
      else {
        format_string_to_buffer_10545140(auStack_88,(char *)0x105a959c/*ROM*/,(void *)0x800,puVar5);
        *(uint16_t *)(puVar8 + 2) = 4;
        *(uint16_t *)(puVar8 + 6) = 7;
        sr_dma_command(param_1,5,3,auStack_88,*(uint16_t *)(puVar8 + 2),
                       *(uint16_t *)(puVar8 + 6));
      }
      heap_free_2(iVar1);
      heap_free_2((int)puVar2);
      reset_subobject_at_offset_0x2c_104706b2(param_1);
      if (bVar4 != false) {
        *(uint16_t *)(puVar8 + 2) = 0;
        *(uint16_t *)(puVar8 + 6) = 0xff;
        sr_dma_command(param_1,4,5,(void*)(0x105a95b4/*ROM*/),*(uint16_t *)(puVar8 + 2),
                       *(uint16_t *)(puVar8 + 6));
      }
    }
  }
  check_kernel_call_success_10459fea();
  update_field_at_offset_0x20(param_1);
  cls_105ab468_delete(&cStack_2c,2);
  return bVar4;
}
