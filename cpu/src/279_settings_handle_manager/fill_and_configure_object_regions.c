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

void fill_and_configure_object_regions(cls_105d722c *param_1)

{
  short sVar1;
  short sVar2;
  uint16_t uVar3;
  byte bVar4;
  uint8_t *puVar5;
  uint uVar6;
  int iVar7;
  uint8_t *puVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  byte *pbVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStackY_28 [2];
  
  puVar13 = auStackY_28;
  if (param_1->field_0x4 != 0) {
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)param_1->field_0x0,(uint)(ushort)param_1->field_0x2,
                 0x1e0,0xa8,0);
    if (param_1->field_0x18 != '\0') {
      iVar7 = (int)(uint)(ushort)param_1->field_0x14 >> 1;
      iVar10 = 0;
      puVar8 = (uint8_t *)
               (((int)(uint)(ushort)param_1->field_0x0 >> 1) +
                (uint)(ushort)param_1->field_0x14 * (uint)(ushort)param_1->field_0x16 +
                iVar7 * ((int)(uint)(ushort)param_1->field_0x16 >> 1) * 2 +
               (uint)(ushort)param_1->field_0x2 * iVar7 + param_1->field_0x4);
      do {
        iVar7 = 0x2f;
        puVar5 = puVar8;
        do {
          *puVar5 = 0x66;
          puVar5[1] = 0x66;
          puVar5[2] = 0x66;
          puVar5[3] = 0x66;
          puVar5[4] = 0x66;
          iVar7 = iVar7 + -1;
          puVar5 = puVar5 + 5;
        } while (-1 < iVar7);
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + ((int)(uint)(ushort)param_1->field_0x14 >> 1);
      } while (iVar10 < 0xa8);
    }
    uVar11 = param_1->field_0x0;
    uVar9 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 4;
    *(uint16_t *)(puVar13 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar11,(uint)uVar9,0x1e0,*(uint16_t *)(puVar13 + 2),
                 *(uint16_t *)(puVar13 + 6));
    sVar1 = param_1->field_0x2;
    uVar11 = param_1->field_0x0;
    *(uint16_t *)(puVar13 + 2) = 4;
    *(uint16_t *)(puVar13 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar11,(uint)(ushort)(sVar1 + 0xa4),0x1e0,
                 *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    uVar11 = param_1->field_0x0;
    uVar9 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 0xa8;
    *(uint16_t *)(puVar13 + 6) = 6;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar11,(uint)uVar9,8,*(uint16_t *)(puVar13 + 2),
                 *(uint16_t *)(puVar13 + 6));
    sVar1 = param_1->field_0x0;
    uVar11 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 0xa8;
    *(uint16_t *)(puVar13 + 6) = 4;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(sVar1 + 0x1d8),(uint)uVar11,8,
                 *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    sVar1 = param_1->field_0x0;
    sVar2 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 0xa0;
    *(uint16_t *)(puVar13 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(sVar1 + 0x78),(uint)(ushort)(sVar2 + 4),2,
                 *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    sVar1 = param_1->field_0x0;
    sVar2 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 0xa0;
    *(uint16_t *)(puVar13 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(sVar1 + 0xf0),(uint)(ushort)(sVar2 + 4),2,
                 *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    sVar1 = param_1->field_0x0;
    sVar2 = param_1->field_0x2;
    *(uint16_t *)(puVar13 + 2) = 0xa0;
    *(uint16_t *)(puVar13 + 6) = 0;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(sVar1 + 0x168),(uint)(ushort)(sVar2 + 4),2,
                 *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
    uVar6 = (uint)*(ushort *)((int)*(uint32_t **)&param_1->field_0x24 + 6);
    pbVar12 = (byte *)**(uint32_t **)&param_1->field_0x24;
    iVar7 = 0;
    uVar11 = param_1->field_0x0 + 0xc;
    if (uVar6 != 0) {
      do {
        bVar4 = *pbVar12;
        uVar9 = (ushort)bVar4;
        pbVar12 = pbVar12 + 1;
        if ((bVar4 & 1) != 0) {
          uVar9 = uVar9 + 1;
        }
        sVar1 = param_1->field_0x2;
        uVar3 = param_1->field_0x2c;
        *(ushort *)(puVar13 + 2) = uVar9;
        *(uint16_t *)(puVar13 + 6) = uVar3;
        dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar11,(uint)(ushort)((sVar1 - uVar9) + 0xa0),2,
                     *(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6));
        uVar11 = uVar11 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar6);
    }
  }
  return;
}
