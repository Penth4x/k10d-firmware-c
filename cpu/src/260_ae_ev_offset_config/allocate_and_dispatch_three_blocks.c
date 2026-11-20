/* @k10d allocate_and_dispatch_three_blocks @ 0x104f4faa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Allocates three memory blocks of a computed size, passes them to two handler functions,
 *   then releases them.
 * summary:
 *   The function calculates a block size from two 16-bit fields in param_2 (offsets 0x12
 *   and 0x14) and allocates three blocks of that size from the system heap via
 *   mempool_get_block. If all three allocations succeed, it builds a local struct
 *   containing the pointers and fields from param_2, calls init_event_queue_struct_104f84b4
 *   with that struct, then calls init_event_queue_struct_104f8648 with the pointers and an
 *   additional value selected from a table based on param_3 (0x74/0x78/0x7c). Finally, it
 *   releases all three blocks via mempool_release_block. On allocation failure, it releases
 *   any blocks that were successfully obtained.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_dispatch_three_blocks(int param_1,int param_2,int param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int iVar11;
  uintptr_t sp;
  uint32_t *puVar12;
  uint8_t local_48 [36];
  
  puVar12 = (uint32_t *)local_48;
  pvVar6 = (void *)((uint)*(ushort *)(param_2 + 0x14) * (uint)*(ushort *)(param_2 + 0x12));
  pvVar3 = (void *)get_system_heap();
  pvVar3 = (void *)mempool_get_block(pvVar3,pvVar6,0);
  pvVar4 = (void *)get_system_heap();
  pvVar4 = (void *)mempool_get_block(pvVar4,pvVar6,0);
  pvVar5 = (void *)get_system_heap();
  pvVar6 = (void *)mempool_get_block(pvVar5,pvVar6,0);
  if (pvVar3 != 0) {
    if ((pvVar4 != 0) && (pvVar6 != 0)) {
      uVar8 = *(uint32_t *)(param_2 + 4);
      uVar9 = *(uint32_t *)(param_2 + 8);
      uVar10 = *(uint32_t *)(param_2 + 0xc);
      uVar1 = *(uint16_t *)(param_2 + 0x10);
      uVar2 = *(uint16_t *)(param_2 + 0x12);
      *puVar12 = (uintptr_t)(pvVar3);
      puVar12[1] = (uintptr_t)(pvVar4);
      puVar12[2] = (uintptr_t)(pvVar6);
      *(uint16_t *)((int)puVar12 + 0xe) = uVar1;
      *(uint16_t *)((int)puVar12 + 0x12) = uVar2;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      init_event_queue_struct_104f84b4(param_1,uVar8,uVar9,uVar10,*puVar12,puVar12[1],puVar12[2],
                   *(ushort *)((int)puVar12 + 0xe),*(uint16_t *)((int)puVar12 + 0x12),puVar12[5],
                   puVar12[6],puVar12[7]);
      iVar7 = get_or_init_sram_buffer_1052c5b8();
      if (param_3 == 1) {
        iVar11 = 0x74;
      }
      else if (param_3 == 2) {
        iVar11 = 0x78;
      }
      else if (param_3 == 3) {
        iVar11 = 0x7c;
      }
      else {
        iVar11 = 0x74;
      }
      uVar8 = *(uint32_t *)(iVar11 + iVar7);
      uVar10 = *(uint32_t *)(param_2 + 8);
      uVar9 = *(uint32_t *)(param_2 + 0xc);
      uVar1 = *(uint16_t *)(param_2 + 0x10);
      uVar2 = *(uint16_t *)(param_2 + 0x12);
      *puVar12 = *(uint32_t *)(param_2 + 4);
      puVar12[1] = uVar10;
      puVar12[2] = uVar9;
      *(uint16_t *)((int)puVar12 + 0xe) = uVar1;
      *(uint16_t *)((int)puVar12 + 0x12) = uVar2;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = uVar8;
      init_event_queue_struct_104f8648(param_1,pvVar3,pvVar4,pvVar6,*puVar12,puVar12[1],puVar12[2],
                   *(ushort *)((int)puVar12 + 0xe),*(uint16_t *)((int)puVar12 + 0x12),puVar12[5],
                   puVar12[6],puVar12[7],(uint16_t *)puVar12[8]);
      pvVar5 = (void *)get_system_heap();
      mempool_release_block(pvVar5,pvVar3);
      pvVar3 = (void *)get_system_heap();
      mempool_release_block(pvVar3,pvVar4);
      pvVar3 = (void *)get_system_heap();
      mempool_release_block(pvVar3,pvVar6);
      return;
    }
    pvVar5 = (void *)get_system_heap();
    mempool_release_block(pvVar5,pvVar3);
  }
  if (pvVar4 != 0) {
    pvVar3 = (void *)get_system_heap();
    mempool_release_block(pvVar3,pvVar4);
  }
  if (pvVar6 != 0) {
    pvVar3 = (void *)get_system_heap();
    mempool_release_block(pvVar3,pvVar6);
  }
  return;
}
