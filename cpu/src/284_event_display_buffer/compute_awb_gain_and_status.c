/* @k10d compute_awb_gain_and_status @ 0x10528dc4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1052912a) overlaps instruction at (ram,0x10529128)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_awb_gain_and_status(int param_1,int *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint16_t uVar5;
  void *puVar6;
  uint uVar7;
  uint16_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  uintptr_t sp;
  int *piVar20;
  bool bVar21;
  bool bVar22;
  uint8_t local_64 [12];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint16_t uStack_10;
  uint8_t uStack_9;
  
  piVar20 = (int *)local_64;
  invoke_virtual_slot2_on_four_objects_105294d2(param_1);
  iStack_1c = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  uStack_10 = 0;
  bVar21 = false;
  bVar22 = false;
  iVar16 = (param_2[0x10] + *param_2) * 0x20;
  if (((iVar16 == -0x880) || (iVar14 = (param_2[0x11] + param_2[1]) * 0x20, iVar14 == -0x880)) ||
     (*(char *)((int)param_2 + 0x79) != '\0')) {
    *(uint8_t *)(param_1 + 0x3114) = 1;
  }
  else {
    iVar16 = iVar16 + iVar14 + (param_2[0x12] + param_2[2]) * -0x20 + 0x500;
    *(int *)(param_1 + 4) = (int)(((uint)(iVar16 >> 7) >> 0x18) + iVar16) >> 8;
  }
  iVar16 = param_2[8];
  iVar14 = param_2[9];
  iVar9 = param_2[10];
  iVar10 = param_2[0xb];
  iVar11 = param_2[0xe];
  iVar12 = param_2[0xf];
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pvVar17 = (void *)return_pentax_corp_string_ptr((int)&uStack_9);
  iVar18 = compare_buffer_bytes(pvVar17,&DAT_105f9a5c/*ROM*/,6);
  if (iVar18 == 0) {
    puVar6 = &DAT_105e9180/*ROM*/;
  }
  else {
    puVar6 = &DAT_105d9180/*ROM*/;
  }
  *(void **)(param_1 + 0x3118) = puVar6;
  iVar18 = 0;
  if (0 < param_2[4] * param_2[5]) {
    iVar19 = 0;
    do {
      iVar18 = iVar18 + 1;
      iVar1 = (uint)*(ushort *)(iVar16 + iVar19) * (uint)*(ushort *)(param_2 + 6);
      iVar2 = (uint)*(ushort *)(iVar14 + iVar19) * (uint)*(ushort *)((int)param_2 + 0x1a);
      iVar3 = (uint)*(ushort *)(iVar9 + iVar19) * (uint)*(ushort *)(param_2 + 7);
      iVar4 = (uint)*(ushort *)(iVar10 + iVar19) * (uint)*(ushort *)((int)param_2 + 0x1e);
      uVar8 = *(uint16_t *)(iVar19 + iVar11);
      uVar5 = *(uint16_t *)(iVar19 + iVar12);
      *piVar20 = (int)(((uint)(iVar4 >> 7) >> 0x18) + iVar4) >> 8;
      *(uint16_t *)((int)piVar20 + 6) = uVar8;
      *(uint16_t *)((int)piVar20 + 10) = uVar5;
      compute_and_dispatch_metering_zone(param_1,(int)(((uint)(iVar1 >> 7) >> 0x18) + iVar1) >> 8,
                   (int)(((uint)(iVar2 >> 7) >> 0x18) + iVar2) >> 8,
                   (int)(((uint)(iVar3 >> 7) >> 0x18) + iVar3) >> 8,*piVar20,
                   *(short *)((int)piVar20 + 6),*(short *)((int)piVar20 + 10));
      iVar19 = iVar19 + 2;
    } while (iVar18 < param_2[4] * param_2[5]);
  }
  if (*(char *)((int)param_2 + 0x79) == '\0') {
    if (*(char *)(param_1 + 0x3114) == '\0') {
      iVar16 = evaluate_weighted_threshold(param_1,&DAT_105f9a24/*ROM*/,0x100);
      if (iVar16 == 0) {
        uVar7 = sum_virtual_method_results((void *)(param_1 + 0x4b0));
        if (250000 < uVar7) {
          *(uint32_t *)(param_1 + 0x914) = 0x40;
          *(uint32_t *)(param_1 + 0x46c) = 0;
          *(uint32_t *)(param_1 + 0x6c0) = 0;
          *(uint32_t *)(param_1 + 0xdbc) = 0;
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x46c) = 0xa0;
        *(uint32_t *)(param_1 + 0x6c0) = 0xa0;
        *(uint32_t *)(param_1 + 0xdbc) = 0xa0;
      }
    }
    iVar16 = return_zero_stub_105295be(param_1);
    bVar21 = iVar16 != 0;
    iVar16 = check_value_above_threshold(param_1);
    bVar22 = iVar16 != 0;
    if (bVar22) {
      *(uint32_t *)(param_1 + 0x46c) = 0;
      *(uint32_t *)(param_1 + 0x6c0) = 0;
      *(uint32_t *)(param_1 + 0x914) = 0;
      *(uint32_t *)(param_1 + 0xb68) = 0;
      *(uint32_t *)(param_1 + 0xdbc) = 0;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x46c) = 0x40;
    *(uint32_t *)(param_1 + 0x914) = 0x40;
    *(uint32_t *)(param_1 + 0x6c0) = 0;
    *(uint32_t *)(param_1 + 0xb68) = 0;
    *(uint32_t *)(param_1 + 0xdbc) = 0;
  }
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 8);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0x704);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0x958);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0xbac);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0x25c);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0x4b0);
  accumulate_three_virtual_offsets(param_1,&iStack_1c,param_1 + 0xe00);
  uVar15 = (uint)(_DAT_105f9784/*ROM*/ * iStack_1c + _DAT_105f9788/*ROM*/ * iStack_18 + _DAT_105f978c/*ROM*/ * iStack_14)
           >> 8;
  uVar7 = (uint)(_DAT_105f9790/*ROM*/ * iStack_1c + _DAT_105f9794/*ROM*/ * iStack_18 + _DAT_105f9798/*ROM*/ * iStack_14)
          >> 8;
  uVar13 = (uint)(_DAT_105f979c/*ROM*/ * iStack_1c + _DAT_105f97a0/*ROM*/ * iStack_18 + _DAT_105f97a4/*ROM*/ * iStack_14)
           >> 8;
  if (((uVar15 == 0) || (uVar7 == 0)) || (uVar13 == 0)) {
    *(uint16_t *)((int)param_3 + 8) = *(uint16_t *)(param_2 + 6);
    *(uint16_t *)((int)param_3 + 10) = *(uint16_t *)((int)param_2 + 0x1a);
    *(uint16_t *)((int)param_3 + 0xc) = *(uint16_t *)(param_2 + 7);
    *(uint16_t *)((int)param_3 + 0xe) = *(uint16_t *)((int)param_2 + 0x1e);
    uVar8 = 0xfffe;
  }
  else {
    *(short *)((int)param_3 + 8) = (short)((*(ushort *)(param_2 + 6) * uVar7) / uVar15);
    *(uint16_t *)((int)param_3 + 10) = *(uint16_t *)((int)param_2 + 0x1a);
    *(uint16_t *)((int)param_3 + 0xc) = *(uint16_t *)(param_2 + 7);
    *(short *)((int)param_3 + 0xe) = (short)((*(ushort *)((int)param_2 + 0x1e) * uVar7) / uVar13);
    uVar15 = (uVar15 << 8) / uVar7 & 0xffff;
    uVar7 = (uVar13 << 8) / uVar7 & 0xffff;
    iVar16 = _DAT_105f9760/*ROM*/ * uVar15 + _DAT_105f9764/*ROM*/ * 0x100 + _DAT_105f9768/*ROM*/ * uVar7;
    iVar9 = (int)(((uint)(iVar16 >> 0xb) >> 0x14) + iVar16) >> 0xc;
    iVar16 = _DAT_105f976c/*ROM*/ * uVar15 + _DAT_105f9770/*ROM*/ * 0x100 + _DAT_105f9774/*ROM*/ * uVar7;
    iVar14 = _DAT_105f9778/*ROM*/ * uVar15 + _DAT_105f977c/*ROM*/ * 0x100 + _DAT_105f9780/*ROM*/ * uVar7;
    uVar8 = (uint16_t)
            *(uint32_t *)
             (&DAT_105f99a8/*ROM*/ +
             (uint)*(byte *)(*(int *)(param_1 + 0x3118) +
                            (((int)(((uint)(iVar16 >> 0xb) >> 0x14) + iVar16) >> 0xc) * 0x36) /
                            iVar9 + ((((int)(((uint)(iVar14 >> 0xb) >> 0x14) + iVar14) >> 0xc) *
                                     0x36) / iVar9) * 0x100 + 0x8080) * 4);
  }
  *(uint16_t *)((int)param_3 + 0x10) = uVar8;
  if (bVar21) {
    *(uint16_t *)((int)param_3 + 0x10) = 6;
  }
  else if (bVar22) {
    *(uint16_t *)((int)param_3 + 0x10) = 0;
  }
  heap_free_if_flagged(&uStack_9,2);
  return;
}
