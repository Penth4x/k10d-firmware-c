/* @k10d compute_sensor_region_offsets @ 0x1051272e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_sensor_region_offsets(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x108) * (uint)*(ushort *)(param_1 + 0x10a);
  uVar9 = uVar1 >> 1;
  iVar2 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x50));
  iVar3 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar2 + uVar1);
  iVar4 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar3 + uVar9);
  iVar5 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar4 + uVar9);
  uVar6 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar2);
  *(uint32_t *)(param_1 + 0xac) = uVar6;
  uVar6 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar3);
  *(uint32_t *)(param_1 + 0xb0) = uVar6;
  uVar6 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x7c) + iVar4);
  *(uint32_t *)(param_1 + 0xb4) = uVar6;
  if (*(char *)(param_1 + 0x2e) == '\0') {
    iVar7 = compare_two_short_pairs_10511af8(param_1);
    if (iVar7 == 0) {
      *(uint32_t *)(param_1 + 0xb8) = *(uint32_t *)(param_1 + 0xac);
      *(uint32_t *)(param_1 + 0xbc) = *(uint32_t *)(param_1 + 0xb0);
      *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xb4);
    }
    else {
      *(int *)(param_1 + 0xb8) = iVar2;
      *(int *)(param_1 + 0xbc) = iVar3;
      *(int *)(param_1 + 0xc0) = iVar4;
    }
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x124) * (uint)*(ushort *)(param_1 + 0x126);
    iVar2 = align_down_to_32_bytes(param_1,*(uint32_t *)(param_1 + 0x5c));
    *(int *)(param_1 + 0xb8) = iVar2;
    iVar2 = align_down_to_32_bytes(param_1,iVar2 + uVar1);
    *(int *)(param_1 + 0xbc) = iVar2;
    uVar6 = align_down_to_32_bytes(param_1,iVar2 + (uVar1 >> 1));
    *(uint32_t *)(param_1 + 0xc0) = uVar6;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x848) * (uint)*(ushort *)(param_1 + 0x84a);
  uVar8 = uVar1 >> 1;
  uVar9 = (uint)*(ushort *)(param_1 + 0x84c) * (uint)*(ushort *)(param_1 + 0x84e);
  *(int *)(param_1 + 0xc4) = iVar5;
  iVar2 = align_down_to_32_bytes(param_1,uVar1 + iVar5);
  *(int *)(param_1 + 200) = iVar2;
  iVar2 = align_down_to_32_bytes(param_1,iVar2 + uVar8);
  *(int *)(param_1 + 0xcc) = iVar2;
  iVar2 = align_down_to_32_bytes(param_1,iVar2 + uVar8);
  *(int *)(param_1 + 0xd0) = iVar2;
  iVar2 = align_down_to_32_bytes(param_1,iVar2 + uVar9);
  *(int *)(param_1 + 0xd4) = iVar2;
  uVar6 = align_down_to_32_bytes(param_1,iVar2 + (uVar9 >> 1));
  *(uint32_t *)(param_1 + 0xd8) = uVar6;
  *(uint32_t *)(param_1 + 0x6cc) = 1;
  *(uint32_t *)(param_1 + 0x6d0) = *(uint32_t *)(param_1 + 0xac);
  *(uint32_t *)(param_1 + 0x6d4) = *(uint32_t *)(param_1 + 0xb0);
  *(uint32_t *)(param_1 + 0x6d8) = *(uint32_t *)(param_1 + 0xb4);
  *(uint16_t *)(param_1 + 0x6dc) = *(uint16_t *)(param_1 + 0x108);
  *(uint16_t *)(param_1 + 0x6de) = *(uint16_t *)(param_1 + 0x10a);
  *(uint16_t *)(param_1 + 0x6e0) = *(uint16_t *)(param_1 + 0x108);
  *(uint16_t *)(param_1 + 0x6e2) = 0;
  *(uint16_t *)(param_1 + 0x6e4) = 0;
  *(uint32_t *)(param_1 + 0x6e8) = 1;
  *(uint32_t *)(param_1 + 0x6ec) = *(uint32_t *)(param_1 + 0xb8);
  *(uint32_t *)(param_1 + 0x6f0) = *(uint32_t *)(param_1 + 0xbc);
  *(uint32_t *)(param_1 + 0x6f4) = *(uint32_t *)(param_1 + 0xc0);
  *(uint16_t *)(param_1 + 0x6f8) = *(uint16_t *)(param_1 + 0x124);
  *(uint16_t *)(param_1 + 0x6fa) = *(uint16_t *)(param_1 + 0x126);
  *(uint16_t *)(param_1 + 0x6fc) = *(uint16_t *)(param_1 + 0x124);
  *(uint16_t *)(param_1 + 0x6fe) = 0;
  *(uint16_t *)(param_1 + 0x700) = 0;
  *(uint32_t *)(param_1 + 0x704) = 1;
  *(uint32_t *)(param_1 + 0x708) = *(uint32_t *)(param_1 + 0xc4);
  *(uint32_t *)(param_1 + 0x70c) = *(uint32_t *)(param_1 + 200);
  *(uint32_t *)(param_1 + 0x710) = *(uint32_t *)(param_1 + 0xcc);
  *(uint16_t *)(param_1 + 0x714) = *(uint16_t *)(param_1 + 0x848);
  *(uint16_t *)(param_1 + 0x716) = *(uint16_t *)(param_1 + 0x84a);
  *(uint16_t *)(param_1 + 0x718) = *(uint16_t *)(param_1 + 0x848);
  *(uint16_t *)(param_1 + 0x71a) = 0;
  *(uint16_t *)(param_1 + 0x71c) = 0;
  *(uint32_t *)(param_1 + 0x720) = 1;
  *(uint32_t *)(param_1 + 0x724) = *(uint32_t *)(param_1 + 0xd0);
  *(uint32_t *)(param_1 + 0x728) = *(uint32_t *)(param_1 + 0xd4);
  *(uint32_t *)(param_1 + 0x72c) = *(uint32_t *)(param_1 + 0xd8);
  *(uint16_t *)(param_1 + 0x730) = *(uint16_t *)(param_1 + 0x84c);
  *(uint16_t *)(param_1 + 0x732) = *(uint16_t *)(param_1 + 0x84e);
  *(uint16_t *)(param_1 + 0x734) = *(uint16_t *)(param_1 + 0x84c);
  *(uint16_t *)(param_1 + 0x736) = 0;
  *(uint16_t *)(param_1 + 0x738) = 0;
  *(uint32_t *)(param_1 + 0x73c) = 1;
  *(uint32_t *)(param_1 + 0x740) = *(uint32_t *)(param_1 + 0xac);
  *(uint32_t *)(param_1 + 0x744) = *(uint32_t *)(param_1 + 0xb0);
  *(uint32_t *)(param_1 + 0x748) = *(uint32_t *)(param_1 + 0xb4);
  *(uint16_t *)(param_1 + 0x74c) = *(uint16_t *)(param_1 + 0x128);
  *(uint16_t *)(param_1 + 0x74e) = *(uint16_t *)(param_1 + 0x12a);
  *(uint16_t *)(param_1 + 0x750) = *(uint16_t *)(param_1 + 0x128);
  *(uint16_t *)(param_1 + 0x752) = 0;
  *(uint16_t *)(param_1 + 0x754) = 0;
  return;
}
