/* @k10d scan_directory_for_files @ 0x104e5b28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates through files in a directory, filters by extension, and registers matching
 *   entries.
 * summary:
 *   The function retrieves a directory path from an object at offset 0x40, initializes a
 *   file iterator, and loops through entries. It filters filenames by checking for a
 *   specific extension (after the last dot) and calls helper functions to process valid
 *   files. It updates a counter in param_3 and calls a finalization routine with the count
 *   of processed files.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t scan_directory_for_files(void *param_1,int param_2,int *param_3)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t auStack_178 [4];
  uint uStack_164;
  uint uStack_160;
  uint32_t uStack_150;
  char acStack_148 [256];
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint8_t uStack_40;
  char acStack_30 [32];
  int iStack_10;
  uint16_t uStack_a;
  
  puVar6 = (uint32_t *)auStack_178;
  fill_byte_array(acStack_148,0,0x100);
  iVar4 = (param_2 + -100) * 4;
  invoke_virtual_slot_14_104e6148(param_1,*(void **)(*(int *)((int)param_1 + 0x40) + iVar4));
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x40) + iVar4);
  iVar5 = *(int *)(iVar4 + 0x18);
  (**(code **)(iVar5 + 0x5c))(iVar4 + *(short *)(iVar5 + 0x58),acStack_148);
  iVar4 = count_string_bytes(acStack_148);
  if (iVar4 < 0x100) {
    acStack_148[iVar4] = '\\';
    uStack_150 = 1;
    uStack_48 = 0;
    uStack_44 = 0;
    cls_105ab468_new(acStack_30);
    uStack_40 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    iStack_10 = 0;
    iVar4 = *(int *)((int)param_1 + 0x4c);
    *puVar6 = &uStack_48;
    iVar4 = call_inner_with_lock_pair(iVar4,acStack_148,uRam80010b9c,0,*puVar6);
    if (iVar4 == 1) {
      uStack_164 = 0;
      uStack_160 = 0;
      do {
        uStack_a = 0;
        iVar4 = call_two_step_helper(param_1,acStack_30,&uStack_a);
        if (iVar4 == 1) {
          pvVar2 = (void *)get_or_create_sram_object_1047dd7a();
          iVar4 = 0;
          cVar1 = acStack_30[0];
          while (cVar1 != '.') {
            iVar4 = iVar4 + 1;
            cVar1 = acStack_30[iVar4];
          }
          iVar4 = search_linked_list_for_match(pvVar2,acStack_30 + iVar4 + 1);
          if (iVar4 == 0) {
            uVar3 = allocate_queue_slot((int)param_1);
            if (uVar3 == 0xffffffff) {
              uStack_150 = 0;
              break;
            }
            uStack_164 = uStack_164 + 1;
            if (uStack_160 == 0) {
              uStack_160 = uVar3;
            }
            iVar4 = allocate_and_link_entry(param_1,param_2,uVar3);
            *(uint16_t *)(iVar4 + 0x14) = uStack_a;
            (**(code **)(*(int *)(iVar4 + 0x18) + 0x44))
                      (*(short *)(*(int *)(iVar4 + 0x18) + 0x40) + iVar4,acStack_30);
            store_result_at_offset_0x1c(iVar4,acStack_30);
            invoke_virtual_slot_14_104e612e(param_1,iVar4);
            insert_sorted_list_entry(param_1,uStack_164,uVar3,&iStack_10);
          }
        }
        iVar4 = call_helper_with_lock_guard(*(int *)((int)param_1 + 0x4c),&uStack_48);
      } while (iVar4 != 0);
      call_three_helpers_on_param(*(int *)((int)param_1 + 0x4c),&uStack_48);
    }
    *param_3 = (*param_3 + uStack_164) - iStack_10;
    process_pending_event_list(param_1,param_2,uStack_160,uStack_164);
    cls_105ab468_delete(acStack_30,2);
  }
  else {
    uStack_150 = 0;
  }
  return uStack_150;
}
