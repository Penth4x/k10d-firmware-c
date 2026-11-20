/* @k10d compare_two_memory_blocks @ 0x1047038c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Allocates two 1 MiB buffers, fills them with sequential indices, and compares their
 *   contents via a helper.
 * summary:
 *   The function allocates two 0x100000-byte blocks from the system memory pool. It
 *   initializes the first buffer with a repeating sequence of integers (0,1,2,3) and zeros
 *   the second. It calls split_copy_by_alignment to process or compare the buffers. If the
 *   result is non-zero, it iterates through the buffers to find the first mismatch, logging
 *   the index and values via sr_dma_command. Finally, it releases both memory blocks and
 *   returns the comparison result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_two_memory_blocks(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint32_t uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  void *pvVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_90 [8];
  uint8_t auStack_60 [80];
  uint16_t auStack_10 [2];
  uint32_t uStack_c;
  
  puVar13 = auStack_90;
  pvVar4 = (void *)get_or_init_sram_buffer_104277bc();
  uVar5 = read_table_entry_field(pvVar4,0x9c);
  pvVar4 = (void *)get_system_heap();
  pvVar4 = (void *)mempool_get_block(pvVar4,(void *)0x100000,0);
  pvVar6 = (void *)get_system_heap();
  pvVar6 = (void *)mempool_get_block(pvVar6,(void *)0x100000,0);
  iVar2 = 0;
  iVar3 = 0xffff;
  iVar12 = 0;
  do {
    *(int *)(iVar12 + (int)pvVar4) = iVar2;
    *(uint32_t *)(iVar12 + (int)pvVar6) = 0;
    *(int *)(iVar12 + 4 + (int)pvVar4) = iVar2 + 1;
    *(uint32_t *)(iVar12 + 4 + (int)pvVar6) = 0;
    *(int *)(iVar12 + 8 + (int)pvVar4) = iVar2 + 2;
    *(uint32_t *)(iVar12 + 8 + (int)pvVar6) = 0;
    *(int *)(iVar12 + 0xc + (int)pvVar4) = iVar2 + 3;
    *(uint32_t *)(iVar12 + 0xc + (int)pvVar6) = 0;
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
    iVar12 = iVar12 + 0x10;
  } while (-1 < iVar3);
  iVar2 = get_or_create_singleton_object_1046d20c();
  uVar1 = *(uint32_t *)(iVar2 + 4);
  auStack_10[0] = 0;
  uStack_c = 0;
  call_single_helper_1046cadc((uint32_t)(uVar1),(uint32_t)(auStack_10));
  pvVar8 = (void *)0x100000;
  pvVar11 = pvVar6;
  iVar2 = split_copy_by_alignment(uVar5,(uint)pvVar4,(uint)pvVar6,0x100000);
  pvVar7 = (void *)init_and_process_param_pair(uVar1,auStack_10);
  if (iVar2 == 0) {
    puVar10 = auStack_60;
    format_string_to_buffer_10545140(puVar10,(char *)0x105a96b4/*ROM*/,pvVar11,pvVar8);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    sr_dma_command(param_1,4,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
  }
  else {
    puVar9 = auStack_60;
    format_string_to_buffer_10545140(puVar9,(char *)0x105a9678/*ROM*/,pvVar11,pvVar8);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    sr_dma_command(param_1,3,1,puVar9,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    pvVar11 = (void *)0x0;
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + (int)pvVar4) != *(int *)(iVar3 + (int)pvVar6)) {
        puVar10 = auStack_60;
        format_string_to_buffer_10545140(puVar10,(char *)0x105a9688/*ROM*/,pvVar11,puVar9);
        *(uint16_t *)(puVar13 + 2) = 7;
        *(uint16_t *)(puVar13 + 6) = 0xff;
        sr_dma_command(param_1,4,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                      );
        format_string_to_buffer_10545140(puVar10,(char *)0x105a969c/*ROM*/,*(void **)((int)pvVar11 * 4 + (int)pvVar4),
                     *(void **)((int)pvVar11 * 4 + (int)pvVar6));
        *(uint16_t *)(puVar13 + 2) = 7;
        *(uint16_t *)(puVar13 + 6) = 0xff;
        sr_dma_command(param_1,5,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6)
                      );
        iVar2 = 0;
        break;
      }
      iVar3 = iVar3 + 4;
      pvVar11 = (void *)((int)pvVar11 + 1);
      puVar10 = puVar9;
    } while (iVar3 < 0x100000);
  }
  if (iVar2 != 0) {
    format_string_to_buffer_10545140(auStack_60,(char *)0x105a96bc/*ROM*/,pvVar7,puVar10);
    *(uint16_t *)(puVar13 + 2) = 7;
    *(uint16_t *)(puVar13 + 6) = 0xff;
    sr_dma_command(param_1,4,3,auStack_60,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6))
    ;
  }
  pvVar11 = (void *)get_system_heap();
  mempool_release_block(pvVar11,pvVar4);
  pvVar4 = (void *)get_system_heap();
  mempool_release_block(pvVar4,pvVar6);
  return iVar2;
}
