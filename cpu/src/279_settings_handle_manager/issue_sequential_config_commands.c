/* @k10d issue_sequential_config_commands @ 0x10520bc6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Issues a sequence of configuration commands via dispatch_virtual_call_via_vtable based
 *   on object state and a dynamic list.
 * summary:
 *   The function checks a flag at offset 4 of the object. If set, it calls
 *   dispatch_virtual_call_via_vtable multiple times with fixed offsets and parameters. It
 *   then iterates over a list pointed to by offset 0x12, adjusting parameters based on bit
 *   flags in the list items, and issues further commands for each item. The specific
 *   subsystem (display, sensor, etc.) is not identifiable from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void issue_sequential_config_commands(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStackY_24 [2];
  
  puVar9 = auStackY_24;
  if (*(int *)(param_1 + 2) != 0) {
    dispatch_virtual_call_via_vtable((int)param_1,(uint)*param_1,(uint)param_1[1],0x120,0x78,0);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    *(uint16_t *)(puVar9 + 2) = 0x78;
    *(uint16_t *)(puVar9 + 6) = 0xe;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar6 + 0x48),(uint)uVar5,0x48,
                 *(uint16_t *)(puVar9 + 2),*(uint16_t *)(puVar9 + 6));
    uVar6 = *param_1;
    uVar5 = param_1[1];
    *(uint16_t *)(puVar9 + 2) = 0x78;
    *(uint16_t *)(puVar9 + 6) = 0xe;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar6 + 0xd8),(uint)uVar5,0x48,
                 *(uint16_t *)(puVar9 + 2),*(uint16_t *)(puVar9 + 6));
    uVar6 = *param_1;
    uVar5 = param_1[1];
    *(uint16_t *)(puVar9 + 2) = 2;
    *(uint16_t *)(puVar9 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar6,(uint)uVar5,0x120,*(uint16_t *)(puVar9 + 2),
                 *(uint16_t *)(puVar9 + 6));
    uVar5 = param_1[1];
    uVar6 = *param_1;
    *(uint16_t *)(puVar9 + 2) = 2;
    *(uint16_t *)(puVar9 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar6,(uint)(ushort)(uVar5 + 0x76),0x120,
                 *(uint16_t *)(puVar9 + 2),*(uint16_t *)(puVar9 + 6));
    uVar6 = *param_1;
    uVar5 = param_1[1];
    *(uint16_t *)(puVar9 + 2) = 0x78;
    *(uint16_t *)(puVar9 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar6,(uint)uVar5,2,*(uint16_t *)(puVar9 + 2),
                 *(uint16_t *)(puVar9 + 6));
    uVar6 = *param_1;
    uVar5 = param_1[1];
    *(uint16_t *)(puVar9 + 2) = 0x78;
    *(uint16_t *)(puVar9 + 6) = 8;
    dispatch_virtual_call_via_vtable((int)param_1,(uint)(ushort)(uVar6 + 0x11e),(uint)uVar5,2,
                 *(uint16_t *)(puVar9 + 2),*(uint16_t *)(puVar9 + 6));
    uVar4 = (uint)*(ushort *)((int)*(uint32_t **)(param_1 + 0x12) + 6);
    pbVar7 = (byte *)**(uint32_t **)(param_1 + 0x12);
    iVar8 = 0;
    uVar6 = *param_1 + 4;
    if (uVar4 != 0) {
      do {
        bVar3 = *pbVar7;
        uVar5 = (ushort)bVar3;
        pbVar7 = pbVar7 + 1;
        if ((bVar3 & 1) != 0) {
          uVar5 = uVar5 + 1;
        }
        uVar1 = param_1[1];
        uVar2 = param_1[0x16];
        *(ushort *)(puVar9 + 2) = uVar5;
        *(ushort *)(puVar9 + 6) = uVar2;
        dispatch_virtual_call_via_vtable((int)param_1,(uint)uVar6,(uint)(ushort)((uVar1 - uVar5) + 0x74),2,
                     *(uint16_t *)(puVar9 + 2),*(uint16_t *)(puVar9 + 6));
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar4);
    }
  }
  return;
}
