/* @k10d allocate_and_configure_three_buffers_104f7774 @ 0x104f7774
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_configure_three_buffers_104f7774(int param_1,int param_2,int param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uintptr_t sp;
  uint32_t *puVar13;
  uint8_t local_78 [36];
  short local_38 [24];
  
  puVar13 = (uint32_t *)local_78;
  pvVar8 = (void *)((uint)*(ushort *)(param_2 + 0x14) * (uint)*(ushort *)(param_2 + 0x12));
  pvVar5 = (void *)get_system_heap();
  pvVar5 = (void *)mempool_get_block(pvVar5,pvVar8,0);
  pvVar6 = (void *)get_system_heap();
  pvVar6 = (void *)mempool_get_block(pvVar6,pvVar8,0);
  pvVar7 = (void *)get_system_heap();
  pvVar8 = (void *)mempool_get_block(pvVar7,pvVar8,0);
  if (pvVar5 != (void *)0x0) {
    if ((pvVar6 != (void *)0x0) && (pvVar8 != (void *)0x0)) {
      uVar10 = *(uint32_t *)(param_2 + 4);
      uVar11 = *(uint32_t *)(param_2 + 8);
      uVar12 = *(uint32_t *)(param_2 + 0xc);
      uVar1 = *(uint16_t *)(param_2 + 0x10);
      uVar2 = *(uint16_t *)(param_2 + 0x12);
      *puVar13 = (uint32_t)(uintptr_t)pvVar5;
      puVar13[1] = (uint32_t)(uintptr_t)pvVar6;
      puVar13[2] = (uint32_t)(uintptr_t)pvVar8;
      *(uint16_t *)((int)puVar13 + 0xe) = uVar1;
      *(uint16_t *)((int)puVar13 + 0x12) = uVar2;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      init_event_queue_struct_104f84b4(param_1,uVar10,uVar11,uVar12,*puVar13,puVar13[1],puVar13[2],
                   *(ushort *)((int)puVar13 + 0xe),*(uint16_t *)((int)puVar13 + 0x12),puVar13[5],
                   puVar13[6],puVar13[7]);
      iVar9 = get_or_init_sram_buffer_1052c5b8();
      local_38[0] = 0x100;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0x100;
      local_38[6] = 0;
      local_38[7] = 0x100;
      local_38[8] = 0;
      local_38[9] = 0;
      local_38[10] = 0x100;
      local_38[0xb] = 0x100;
      local_38[0xc] = 0x4c;
      local_38[0xd] = 0x96;
      local_38[0xe] = 0x1e;
      local_38[0xf] = 0;
      local_38[0x10] = 0xffd5;
      local_38[0x11] = 0xffab;
      local_38[0x12] = 0x80;
      local_38[0x14] = 0x80;
      local_38[0x13] = 0x100;
      local_38[0x17] = 0x100;
      local_38[0x15] = 0xff95;
      local_38[0x16] = 0xffeb;
      param_3 = param_3 * 2;
      uVar4 = 0;
      do {
        uVar3 = uVar4 + 1 & 0xff;
        local_38[uVar4] =
             (short)((int)local_38[uVar4 + 0xc] *
                     (uint)*(ushort *)(*(int *)(iVar9 + 0x9c) + param_3) >> 8);
        uVar4 = uVar3;
      } while (uVar3 < 3);
      uVar4 = 4;
      do {
        uVar3 = uVar4 + 1 & 0xff;
        local_38[uVar4] =
             (short)((int)local_38[uVar4 + 0xc] *
                     (uint)*(ushort *)(*(int *)(iVar9 + 0xa0) + param_3) >> 8);
        uVar4 = uVar3;
      } while (uVar3 < 7);
      uVar4 = 8;
      do {
        uVar3 = uVar4 + 1 & 0xff;
        local_38[uVar4] =
             (short)((int)local_38[uVar4 + 0xc] *
                     (uint)*(ushort *)(*(int *)(iVar9 + 0xa0) + param_3) >> 8);
        uVar4 = uVar3;
      } while (uVar3 < 0xb);
      uVar10 = *(uint32_t *)(param_2 + 8);
      uVar11 = *(uint32_t *)(param_2 + 0xc);
      uVar1 = *(uint16_t *)(param_2 + 0x10);
      uVar2 = *(uint16_t *)(param_2 + 0x12);
      *puVar13 = *(uint32_t *)(param_2 + 4);
      puVar13[1] = uVar10;
      puVar13[2] = uVar11;
      *(uint16_t *)((int)puVar13 + 0xe) = uVar1;
      *(uint16_t *)((int)puVar13 + 0x12) = uVar2;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = (uint32_t)(uintptr_t)local_38;
      init_event_queue_struct_104f8648(param_1,pvVar5,pvVar6,pvVar8,*puVar13,puVar13[1],puVar13[2],
                   *(ushort *)((int)puVar13 + 0xe),*(uint16_t *)((int)puVar13 + 0x12),puVar13[5],
                   puVar13[6],puVar13[7],(uint16_t *)puVar13[8]);
      pvVar7 = (void *)get_system_heap();
      mempool_release_block(pvVar7,pvVar5);
      pvVar5 = (void *)get_system_heap();
      mempool_release_block(pvVar5,pvVar6);
      pvVar5 = (void *)get_system_heap();
      mempool_release_block(pvVar5,pvVar8);
      return;
    }
    pvVar7 = (void *)get_system_heap();
    mempool_release_block(pvVar7,pvVar5);
  }
  if (pvVar6 != (void *)0x0) {
    pvVar5 = (void *)get_system_heap();
    mempool_release_block(pvVar5,pvVar6);
  }
  if (pvVar8 != (void *)0x0) {
    pvVar5 = (void *)get_system_heap();
    mempool_release_block(pvVar5,pvVar8);
  }
  return;
}
