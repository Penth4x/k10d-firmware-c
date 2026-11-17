/* @k10d fill_and_configure_object_regions @ 0x10520dea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Fills a computed memory region with 0x66 and calls dispatch_virtual_call_via_vtable
 *   multiple times with varying offsets and sizes.
 * summary:
 *   The function checks a flag at param_1+2 and, if set, calls
 *   dispatch_virtual_call_via_vtable once. If another flag is set, it calculates a pointer
 *   and fills a region with the byte 0x66 in a loop. It then calls
 *   dispatch_virtual_call_via_vtable seven more times with hardcoded offsets and sizes, and
 *   finally loops over a count stored in the object to call
 *   dispatch_virtual_call_via_vtable for each entry, adjusting parameters based on byte
 *   values from a pointer array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_and_configure_object_regions(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint8_t *puVar4;
  uint uVar5;
  int iVar6;
  uint8_t *puVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  byte *pbVar11;
  uintptr_t sp;
  uint8_t *puVar12;
  uint8_t auStackY_28 [2];
  
  puVar12 = auStackY_28;
  if (*(int *)(param_1 + 2) != 0) {
    dispatch_virtual_call_via_vtable((int)param_1,(uint)*param_1,(uint)param_1[1],0x1e0,0xa8,0);
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar6 = (int)(uint)param_1[10] >> 1;
      iVar9 = 0;
      puVar7 = (uint8_t *)
               (((int)(uint)*param_1 >> 1) +
                (uint)param_1[10] * (uint)param_1[0xb] + iVar6 * ((int)(uint)param_1[0xb] >> 1) * 2
               + (uint)param_1[1] * iVar6 + *(int *)(param_1 + 2));
      do {
        iVar6 = 0x2f;
        puVar4 = puVar7;
        do {
          *puVar4 = 0x66;
          puVar4[1] = 0x66;
          puVar4[2] = 0x66;
          puVar4[3] = 0x66;
          puVar4[4] = 0x66;
          iVar6 = iVar6 + -1;
          puVar4 = puVar4 + 5;
        } while (-1 < iVar6);
        iVar9 = iVar9 + 1;
        puVar7 = puVar7 + ((int)(uint)param_1[10] >> 1);
      } while (iVar9 < 0xa8);
    }
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 4;
    *(uint16_t *)(puVar12 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar10,(uint)uVar8,0x1e0,*(uint16_t *)(puVar12 + 2),
                 *(uint16_t *)(puVar12 + 6));
    uVar8 = param_1[1];
    uVar10 = *param_1;
    *(uint16_t *)(puVar12 + 2) = 4;
    *(uint16_t *)(puVar12 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar10,(uint)(ushort)(uVar8 + 0xa4),0x1e0,
                 *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 0xa8;
    *(uint16_t *)(puVar12 + 6) = 6;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar10,(uint)uVar8,8,*(uint16_t *)(puVar12 + 2),
                 *(uint16_t *)(puVar12 + 6));
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 0xa8;
    *(uint16_t *)(puVar12 + 6) = 4;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar10 + 0x1d8),(uint)uVar8,8,
                 *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 0xa0;
    *(uint16_t *)(puVar12 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar10 + 0x78),(uint)(ushort)(uVar8 + 4),2,
                 *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 0xa0;
    *(uint16_t *)(puVar12 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar10 + 0xf0),(uint)(ushort)(uVar8 + 4),2,
                 *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
    uVar10 = *param_1;
    uVar8 = param_1[1];
    *(uint16_t *)(puVar12 + 2) = 0xa0;
    *(uint16_t *)(puVar12 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar10 + 0x168),(uint)(ushort)(uVar8 + 4),2,
                 *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
    uVar5 = (uint)*(ushort *)((int)*(uint32_t **)(param_1 + 0x12) + 6);
    pbVar11 = (byte *)**(uint32_t **)(param_1 + 0x12);
    iVar6 = 0;
    uVar10 = *param_1 + 0xc;
    if (uVar5 != 0) {
      do {
        bVar3 = *pbVar11;
        uVar8 = (ushort)bVar3;
        pbVar11 = pbVar11 + 1;
        if ((bVar3 & 1) != 0) {
          uVar8 = uVar8 + 1;
        }
        uVar1 = param_1[1];
        uVar2 = param_1[0x16];
        *(ushort *)(puVar12 + 2) = uVar8;
        *(ushort *)(puVar12 + 6) = uVar2;
        dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar10,(uint)(ushort)((uVar1 - uVar8) + 0xa0),2,
                     *(uint16_t *)(puVar12 + 2),*(uint16_t *)(puVar12 + 6));
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar5);
    }
  }
  return;
}
