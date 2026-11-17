/* @k10d allocate_and_configure_buffer_104f6c38 @ 0x104f6c38
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from the system heap and initializes a local descriptor
 *   structure with specific flags and parameters.
 * summary:
 *   The function first calls call_helper_with_128_128 with the input parameters. It then
 *   calculates a size based on fields in param_2 and allocates a block from the system heap
 *   using mempool_get_block. If allocation succeeds, it initializes a local stack structure
 *   with hardcoded values (0xff00, 0x100) and fields from param_2. It then calls
 *   init_event_struct_and_dispatch_104f8314 and register_event_handler_104f80dc, passing
 *   the allocated buffer and the initialized structure, before releasing the memory block
 *   via mempool_release_block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_configure_buffer_104f6c38(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint16_t uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_4c [32];
  uint16_t local_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  puVar7 = auStack_4c;
  call_helper_with_128_128(param_1,param_2);
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = *(ushort *)((int)param_2 + 0x12);
  pvVar4 = (void *)get_system_heap();
  pvVar4 = (void *)mempool_get_block(pvVar4,(void *)((uint)uVar1 * (uint)uVar2),0);
  if (pvVar4 != (void *)0x0) {
    local_1a = 0xff00;
    uStack_18 = 0;
    uStack_16 = 0x100;
    uStack_14 = 0xff00;
    uStack_12 = 0;
    uStack_10 = 0x100;
    uStack_e = 0xff00;
    uStack_c = 0;
    uStack_a = 0x100;
    iVar6 = param_2[1];
    uVar3 = *(uint16_t *)(param_2 + 4);
    *(uint16_t *)(puVar7 + 2) = *(uint16_t *)((int)param_2 + 0x12);
    *(uint16_t **)(puVar7 + 4) = &local_1a;
    *(uint16_t *)(puVar7 + 10) = 0;
    *(uint16_t *)(puVar7 + 0xe) = 0;
    *(uint16_t *)(puVar7 + 0x12) = 0;
    *(uint16_t *)(puVar7 + 0x16) = 0;
    puVar7[0x1b] = 1;
    *(uint16_t *)(puVar7 + 0x1e) = 0x80;
    init_event_struct_and_dispatch_104f8314(param_1,iVar6,pvVar4,uVar3,*(uint16_t *)(puVar7 + 2),*(uint32_t *)(puVar7 + 4),
                 *(uint16_t *)(puVar7 + 10),*(uint16_t *)(puVar7 + 0xe),
                 *(uint16_t *)(puVar7 + 0x12),*(uint16_t *)(puVar7 + 0x16),puVar7[0x1b],
                 *(uint16_t *)(puVar7 + 0x1e));
    iVar6 = param_2[1];
    uVar3 = *(uint16_t *)(param_2 + 4);
    *(uint16_t *)(puVar7 + 2) = *(uint16_t *)((int)param_2 + 0x12);
    register_event_handler_104f80dc(param_1,pvVar4,iVar6,uVar3,*(uint16_t *)(puVar7 + 2));
    pvVar5 = (void *)get_system_heap();
    mempool_release_block(pvVar5,pvVar4);
  }
  return;
}
