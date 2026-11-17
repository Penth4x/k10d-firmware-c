/* @k10d verify_card_data_integrity @ 0x1046e07c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Reads a data block from storage, compares it against a reference buffer, and reports
 *   mismatches.
 * summary:
 *   The function allocates two buffers of a size determined by map_index_to_bitmask (capped
 *   at 0x800). It calls parse_quoted_token_stream to populate the first buffer, then
 *   iterates through the data comparing bytes in the first buffer against a second buffer
 *   (allocated via heap_alloc_2). If a mismatch is found, it logs the discrepancy using
 *   format_string_to_buffer_10545140 and sr_dma_command (likely debug/status output) and
 *   returns 0. If no mismatch is found, it returns the result of parse_quoted_token_stream.
 *   The caller service_op_dispatch suggests this is part of a card service operation,
 *   likely verifying data integrity after a write or read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046e0fa) overlaps instruction at (ram,0x1046e0f8)
    */

int verify_card_data_integrity(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint8_t *puVar5;
  void *pvVar6;
  bool bVar8;
  int iVar7;
  uint8_t *puVar9;
  uint8_t *puVar10;
  int *piVar11;
  uint16_t uVar13;
  void *pvVar12;
  int iVar14;
  uintptr_t sp;
  uint8_t *puVar15;
  uint *puVar16;
  uint8_t auStackY_c4 [2];
  uint uStack_9c;
  uint8_t auStack_88 [80];
  uint32_t uStack_38;
  uint16_t uStack_34;
  int iStack_30;
  uint8_t auStack_2c [16];
  int iStack_1c;
  uint32_t uStack_c;
  
  puVar15 = auStackY_c4;
  uStack_34 = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  puVar16 = (uint *)auStackY_c4;
  if (param_3 != 0) {
    sr_dma_command(param_1,3,5,&DAT_105a9340/*ROM*/,7,0xff);
    puVar16 = (uint *)puVar15;
  }
  iVar4 = get_or_create_camera_object();
  piVar11 = *(int **)(iVar4 + 0xc);
  cls_105ab468_new(auStack_2c);
  iVar4 = call_with_offset_lock_1048101c(piVar11,(void *)param_2,auStack_2c);
  if (iVar4 == 0) {
    uStack_9c = 0;
  }
  else {
    uStack_c = 0;
    iVar4 = (**(code **)(*piVar11 + 0x2c))
                      ((int)*(short *)(*piVar11 + 0x28) + (int)piVar11,param_2,1,&uStack_c);
    if (iVar4 == 0) {
      uStack_9c = 0;
    }
    else {
      puVar5 = (uint8_t *)heap_alloc_2(iStack_1c + 1);
      uStack_9c = (**(code **)(*piVar11 + 0x3c))
                            ((int)*(short *)(*piVar11 + 0x38) + (int)piVar11,uStack_c,puVar5,
                             iStack_1c);
      (**(code **)(*piVar11 + 0x34))((int)*(short *)(*piVar11 + 0x30) + (int)piVar11,uStack_c);
      pvVar6 = (void *)map_index_to_bitmask(param_1);
      if (((uStack_9c != 0) && (0 < (int)pvVar6)) && ((int)pvVar6 < 0x801)) {
        reset_subobject_at_offset_0x2c_104706a0(param_1);
        puVar5[iStack_1c] = 0;
        iVar4 = heap_alloc_2((int)pvVar6);
        uStack_38 = 0;
        uVar13 = SUB42(pvVar6,0);
        uStack_34 = uVar13;
        iStack_30 = iVar4;
        call_subroutine_and_flag_on_error(param_1,&uStack_38,0);
        puVar9 = puVar5;
        bVar8 = parse_quoted_token_stream(param_1,iVar4,(int)pvVar6,(int)puVar5);
        uStack_9c = (uint)bVar8;
        if (uStack_9c == 0) {
          if (param_3 != 0) {
            format_string_to_buffer_10545140(auStack_88,(char *)0x105a938c/*ROM*/,pvVar6,puVar9);
            *(uint16_t *)((int)puVar16 + 2) = 4;
            *(uint16_t *)((int)puVar16 + 6) = 7;
            sr_dma_command(param_1,5,3,auStack_88,*(uint16_t *)((int)puVar16 + 2),
                           *(uint16_t *)((int)puVar16 + 6));
          }
        }
        else {
          uStack_38 = 0;
          uStack_34 = uVar13;
          iStack_30 = iVar4;
          call_subroutine_and_set_flag(param_1,&uStack_38,0);
          request_twai_object(param_1);
          iVar7 = heap_alloc_2((int)pvVar6);
          uStack_38 = 0;
          uStack_34 = uVar13;
          iStack_30 = iVar7;
          call_subroutine_and_flag_on_error(param_1,&uStack_38,0);
          pvVar12 = (void *)0x0;
          if (0 < (int)pvVar6 / 2) {
            iVar14 = 1;
            do {
              puVar10 = puVar9;
              if (param_3 != 0) {
                puVar10 = auStack_88;
                format_string_to_buffer_10545140(puVar10,(char *)0x105a9348/*ROM*/,pvVar12,puVar9);
                *(uint16_t *)((int)puVar16 + 2) = 7;
                *(uint16_t *)((int)puVar16 + 6) = 0xff;
                sr_dma_command(param_1,3,1,puVar10,*(uint16_t *)((int)puVar16 + 2),
                               *(uint16_t *)((int)puVar16 + 6));
              }
              if ((*(char *)((int)pvVar12 + iVar4) != *(char *)((int)pvVar12 + iVar7)) ||
                 (*(char *)(iVar14 + iVar4) != *(char *)(iVar14 + iVar7))) {
                if (param_3 != 0) {
                  format_string_to_buffer_10545140(auStack_88,(char *)0x105a935c/*ROM*/,pvVar12,puVar10);
                  *(uint16_t *)((int)puVar16 + 2) = 7;
                  *(uint16_t *)((int)puVar16 + 6) = 0xff;
                  sr_dma_command(param_1,4,1,auStack_88,*(uint16_t *)((int)puVar16 + 2),
                                 *(uint16_t *)((int)puVar16 + 6));
                  bVar1 = *(byte *)(iVar7 + (int)pvVar12);
                  bVar2 = *(byte *)((int)pvVar12 + iVar7 + 1);
                  bVar3 = *(byte *)((int)pvVar12 + iVar4 + 1);
                  *puVar16 = (uint)*(byte *)(iVar4 + (int)pvVar12);
                  puVar16[1] = (uint)bVar3;
                  format_string_to_buffer_10545140(auStack_88,(char *)0x105a9370/*ROM*/,(void *)(uint)bVar1,(void *)(uint)bVar2
                              );
                  *(uint16_t *)((int)puVar16 + 2) = 7;
                  *(uint16_t *)((int)puVar16 + 6) = 0xff;
                  sr_dma_command(param_1,5,1,auStack_88,*(uint16_t *)((int)puVar16 + 2),
                                 *(uint16_t *)((int)puVar16 + 6));
                }
                uStack_9c = 0;
                break;
              }
              pvVar12 = (void *)((int)pvVar12 + 1);
              iVar14 = iVar14 + 1;
              puVar9 = puVar10;
            } while ((int)pvVar12 < (int)pvVar6 / 2);
          }
          heap_free_2(iVar7);
        }
        heap_free_2(iVar4);
        reset_subobject_at_offset_0x2c_104706b2(param_1);
      }
      heap_free_2((int)puVar5);
      if ((uStack_9c != 0) && (param_3 != 0)) {
        *(uint16_t *)((int)puVar16 + 2) = 0;
        *(uint16_t *)((int)puVar16 + 6) = 0xff;
        sr_dma_command(param_1,4,5,0x105a93a4/*ROM*/,*(uint16_t *)((int)puVar16 + 2),
                       *(uint16_t *)((int)puVar16 + 6));
      }
    }
  }
  check_kernel_call_success_10459fea();
  if (param_3 != 0) {
    update_field_at_offset_0x20(param_1);
  }
  cls_105ab468_delete(auStack_2c,2);
  return uStack_9c;
}
