/* @k10d process_event_with_fallback @ 0x104c530e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Attempts to process an event via a primary handler, falling back to a secondary handler
 *   with extended parameters if the first fails.
 * summary:
 *   The function initializes a local structure and calls init_struct_and_call_two_helpers
 *   with parameters derived from param_1 and param_2. If this call succeeds, it invokes
 *   write_two_words_to_struct_104c3ec4 and compute_buffer_size_and_init; if
 *   compute_buffer_size_and_init returns 0 and a specific field in param_3 is 2, it sets a
 *   flag at param_1+0x219. If the initial call fails or the secondary path fails, it
 *   constructs a larger parameter array from fields in param_3 and calls
 *   build_and_send_command_packet_104c2df6. It cleans up the local structure via
 *   free_heap_if_flagged_1045c402 before returning the success status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool process_event_with_fallback(int param_1,int param_2,void *param_3)

{
  uint uVar1;
  uint32_t uVar2;
  bool bVar4;
  int iVar3;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_48 [20];
  uint32_t auStack_14 [2];
  uint32_t uStack_c;
  
  piVar8 = (int *)auStack_48;
  alloc_and_zero_two_words_1045c3bc(auStack_14);
  uStack_c = 2;
  *(uint8_t *)(param_1 + 0x219) = 0;
  uVar5 = *(uint32_t *)(param_1 + 0x4c);
  uVar1 = get_aligned_next_pointer(param_2);
  uVar2 = (*(code *)0x104bcd52/*ROM*/)(param_2);
  *piVar8 = (int)&uStack_c;
  bVar4 = init_struct_and_call_two_helpers(uVar5,uVar1,uVar2,auStack_14,(uint32_t *)*piVar8);
  if (bVar4) {
    write_two_words_to_struct_104c3ec4(param_2,auStack_14);
    iVar3 = compute_buffer_size_and_init(param_3,auStack_14,2);
    if (iVar3 == 0) {
      if (*(int *)((int)param_3 + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
      free_heap_if_flagged_1045c402(auStack_14,2);
      bVar4 = false;
    }
    else {
      uVar6 = *(uint32_t *)(param_1 + 0x4c);
      uVar1 = get_aligned_next_pointer(param_2);
      uVar5 = (*(code *)0x104bcd52/*ROM*/)(param_2);
      uVar2 = *(uint32_t *)((int)param_3 + 0x24);
      uVar7 = *(uint32_t *)((int)param_3 + 0x28);
      *piVar8 = *(uint32_t *)((int)param_3 + 0x20);
      piVar8[2] = uVar7;
      piVar8[3] = uStack_c;
      piVar8[1] = uVar2;
      piVar8[4] = 2;
      bVar4 = build_and_send_command_packet_104c2df6(uVar6,uVar1,uVar5,auStack_14,*piVar8,piVar8[1],piVar8[2],piVar8[3],
                           piVar8[4]);
      free_heap_if_flagged_1045c402(auStack_14,2);
    }
  }
  else {
    free_heap_if_flagged_1045c402(auStack_14,2);
    bVar4 = false;
  }
  return bVar4;
}
