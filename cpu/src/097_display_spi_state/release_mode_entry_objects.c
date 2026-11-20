/* @k10d release_mode_entry_objects @ 0x10419ea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Releases heap blocks and invokes virtual destructors for up to nine mode-entry objects
 *   stored in a table at param_1+0x1588.
 * summary:
 *   The function checks state flags at param_1+0x150f/0x1510 and, if active, waits for
 *   counters at 0x1504/0x1500 to clear and a bit in 0x1530 to be set. It then iterates over
 *   a table of 9 entries (param_2 selects one or all if negative), and for each valid entry
 *   (flag at +0x1c == 4) it calls six virtual methods (slots 2,3,4,5,7,8) on the object,
 *   releases three heap blocks (at offsets 0x34, 0x38, 0x3c) via mempool_release_block, and
 *   marks the entry as released. It also handles a special object at param_1+0x84
 *   similarly. Finally it clears a bit in 0x1530 and sets a value at 0x15d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10419ec2) overlaps instruction at (ram,0x10419ec0)
    */

uint32_t release_mode_entry_objects(int param_1,int param_2,int param_3)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint32_t *puVar8;
  int iVar9;
  uint uVar10;
  int iStack_60;
  uint32_t uStack_44;
  int iStack_20;
  
  uStack_44 = 0;
  if (param_2 < 9) {
    iStack_20 = param_3;
    if (*(char *)(param_1 + 0x1510) == '\0') {
      iStack_20 = 0;
    }
    if (*(char *)(param_1 + 0x150f) != '\0') {
      return 0;
    }
    if (iStack_20 != 0) {
      if ((*(char *)(param_1 + 0x92) != '\0') || (*(char *)(param_1 + 0x93) != '\0')) {
        return 0;
      }
      set_flg_obj((uint32_t *)(param_1 + 0x1538));
      iVar9 = *(int *)(param_1 + 0x1504);
      while (iVar9 != 0) {
        check_kernel_call_success_10459fea();
        iVar9 = *(int *)(param_1 + 0x1504);
      }
      uVar10 = *(uint *)(param_1 + 0x1530);
      while ((uVar10 & 0x200000) == 0) {
        check_kernel_call_success_10459fea();
        uVar10 = *(uint *)(param_1 + 0x1530);
      }
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1538),0x200);
      iVar9 = *(int *)(param_1 + 0x1500);
      while (iVar9 != 0) {
        check_kernel_call_success_10459fea();
        iVar9 = *(int *)(param_1 + 0x1500);
      }
      iVar9 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
      while (iVar9 != 0) {
        check_kernel_call_success_10459fea();
        iVar9 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
      }
    }
    piVar7 = (int *)(param_1 + 0x1588 + param_2 * 8);
    iVar9 = *piVar7;
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1558));
    if (param_2 < 0) {
      if ((*(int *)(param_1 + 0x84) != 0) &&
         (iVar9 = find_index_in_struct_array(param_1,*(uint32_t *)(param_1 + 0x84)), iVar9 != -1)) {
        iVar6 = *(int *)(param_1 + 0x84);
        pvVar2 = *(void **)(iVar6 + 0x34);
        pvVar3 = *(void **)(iVar6 + 0x3c);
        pvVar4 = *(void **)(iVar6 + 0x38);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].adj + iVar6,0);
        call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
        if (pvVar2 != 0) {
          pvVar5 = (void *)get_system_heap();
          mempool_release_block(pvVar5,pvVar2);
        }
        if (pvVar3 != 0) {
          pvVar2 = (void *)get_system_heap();
          mempool_release_block(pvVar2,pvVar3);
        }
        if (pvVar4 != 0) {
          pvVar2 = (void *)get_system_heap();
          mempool_release_block(pvVar2,pvVar4);
        }
        check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
        *(uint32_t *)(iVar6 + 0x1c) = 1;
        *(uint8_t *)(param_1 + iVar9 * 8 + 0x158d) = 0;
        *(uint32_t *)(param_1 + 0x84) = 0;
      }
      iStack_60 = 9;
      iVar9 = 0;
      do {
        piVar7 = (int *)(param_1 + 0x1588 + iVar9);
        if (((*piVar7 != 0) && (*(char *)(piVar7 + 1) != '\0')) &&
           (iVar6 = *piVar7, *(int *)(iVar6 + 0x1c) == 4)) {
          pvVar4 = *(void **)(iVar6 + 0x34);
          pvVar2 = *(void **)(iVar6 + 0x3c);
          pvVar3 = *(void **)(iVar6 + 0x38);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].adj + iVar6,0);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].adj + iVar6,0);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].adj + iVar6,0);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].adj + iVar6,0);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].adj + iVar6,0);
          (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].fn)
                    (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].adj + iVar6,0);
          call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
          if (pvVar4 != 0) {
            pvVar5 = (void *)get_system_heap();
            mempool_release_block(pvVar5,pvVar4);
          }
          if (pvVar2 != 0) {
            pvVar4 = (void *)get_system_heap();
            mempool_release_block(pvVar4,pvVar2);
          }
          if (pvVar3 != 0) {
            pvVar2 = (void *)get_system_heap();
            mempool_release_block(pvVar2,pvVar3);
          }
          check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
          *(uint32_t *)(iVar6 + 0x1c) = 1;
          *(uint8_t *)(param_1 + iVar9 + 0x158d) = 0;
        }
        iVar9 = iVar9 + 8;
        iVar6 = iStack_60 + -1;
        bVar1 = 0 < iStack_60;
        iStack_60 = iVar6;
      } while (bVar1 && iVar6 != 0);
      uStack_44 = 1;
    }
    else if (((iVar9 != 0) && (*(char *)(piVar7 + 1) != '\0')) && (*(int *)(iVar9 + 0x1c) == 4)) {
      pvVar2 = *(void **)(iVar9 + 0x34);
      pvVar3 = *(void **)(iVar9 + 0x3c);
      pvVar4 = *(void **)(iVar9 + 0x38);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[2].adj + iVar9,0);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[4].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[4].adj + iVar9,0);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[3].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[3].adj + iVar9,0);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[6].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[6].adj + iVar9,0);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[10].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[10].adj + iVar9,0);
      (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[11].fn)
                (((vtbl_entry*)(*(int *)(iVar9 + 0x8d4)))[11].adj + iVar9,0);
      puVar8 = (uint32_t *)(param_1 + 0x1550);
      call_kernel_with_short_id(puVar8);
      if (pvVar2 != 0) {
        pvVar5 = (void *)get_system_heap();
        mempool_release_block(pvVar5,pvVar2);
      }
      if (pvVar3 != 0) {
        pvVar2 = (void *)get_system_heap();
        mempool_release_block(pvVar2,pvVar3);
      }
      if (pvVar4 != 0) {
        pvVar2 = (void *)get_system_heap();
        mempool_release_block(pvVar2,pvVar4);
      }
      check_kernel_call_success_10459d88(puVar8);
      *(uint32_t *)(iVar9 + 0x1c) = 1;
      *(uint8_t *)(param_2 * 8 + param_1 + 0x1588 + 5) = 0;
      if ((*(int *)(param_1 + 0x84) != 0) &&
         (iVar9 = find_index_in_struct_array(param_1,*(uint32_t *)(param_1 + 0x84)), iVar9 != -1)) {
        iVar6 = *(int *)(param_1 + 0x84);
        pvVar2 = *(void **)(iVar6 + 0x34);
        pvVar3 = *(void **)(iVar6 + 0x3c);
        pvVar4 = *(void **)(iVar6 + 0x38);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[2].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[4].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[3].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[6].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[10].adj + iVar6,0);
        (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].fn)
                  (((vtbl_entry*)(*(int *)(iVar6 + 0x8d4)))[11].adj + iVar6,0);
        call_kernel_with_short_id(puVar8);
        if (pvVar2 != 0) {
          pvVar5 = (void *)get_system_heap();
          mempool_release_block(pvVar5,pvVar2);
        }
        if (pvVar3 != 0) {
          pvVar2 = (void *)get_system_heap();
          mempool_release_block(pvVar2,pvVar3);
        }
        if (pvVar4 != 0) {
          pvVar2 = (void *)get_system_heap();
          mempool_release_block(pvVar2,pvVar4);
        }
        check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
        *(uint32_t *)(iVar6 + 0x1c) = 1;
        *(uint8_t *)(iVar9 * 8 + param_1 + 0x1588 + 5) = 0;
        *(uint32_t *)(param_1 + 0x84) = 0;
      }
      uStack_44 = 1;
    }
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1558));
    if (iStack_20 != 0) {
      uVar10 = *(uint *)(param_1 + 0x1530);
      while ((uVar10 & 0x200000) != 0) {
        *(uint *)(param_1 + 0x1530) = uVar10 & 0xffdfffff;
        check_kernel_call_success_10459fea();
        uVar10 = *(uint *)(param_1 + 0x1530);
      }
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffdfffff;
      set_flg_obj((uint32_t *)(param_1 + 0x1538));
    }
  }
  *(uint32_t *)(param_1 + 0x15d0) = 100;
  return uStack_44;
}
