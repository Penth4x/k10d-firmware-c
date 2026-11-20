/* @k10d dispatch_virtual_method_sequence_104d056e @ 0x104d056e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a chain of virtual methods on an object, passing results to helper functions.
 * summary:
 *   Retrieves an object pointer from param_1 and calls virtual slot 3 (offset 0x1c). If
 *   successful, it calls virtual slot 4 (offset 0x24) and stores the result in a global
 *   structure. It then sequentially calls helper functions
 *   call_helper_if_param2_nonzero_104d06ba, invoke_callback_if_param2_set,
 *   set_flag_bit_2_on_param, and increment_counter_if_nonzero with parameters derived from
 *   find_entry_by_ushort_key and find_entry_by_id_in_table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_sequence_104d056e(int param_1, int param_2, uint32_t param_x2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(*(int *)(param_1 + 8) + 0xc);
  uVar1 = 1;
  if ((param_2 != 0) && (piVar4 != (int *)0x0)) {
    (((vtbl_entry*)(*piVar4))[3].fn)
              ((int)((vtbl_entry*)(*piVar4))[3].adj + (int)piVar4,*(uint32_t *)(param_2 + 8));
    iVar3 = piVar4[1];
    uVar1 = (uint32_t)(find_entry_by_ushort_key(iVar3,3));
    iVar2 = find_entry_by_id_in_table(iVar3,3);
    iVar2 = call_helper_if_param2_nonzero_104d06ba(param_1,uVar1,iVar2);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_2 + 8);
      iVar2 = (((vtbl_entry*)(*piVar4))[4].fn)((int)((vtbl_entry*)(*piVar4))[4].adj + (int)piVar4);
      *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x30) = iVar5 + iVar2;
      uVar1 = (uint32_t)(find_entry_by_ushort_key(iVar3,4));
      iVar2 = find_entry_by_id_in_table(iVar3,4);
      iVar2 = invoke_callback_if_param2_set(param_1,uVar1,iVar2);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint32_t)(find_entry_by_ushort_key(iVar3,0x32));
        iVar2 = find_entry_by_id_in_table(iVar3,0x32);
        iVar2 = set_flag_bit_2_on_param(param_1,uVar1,iVar2);
        uVar1 = 0;
        if (iVar2 != 0) {
          uVar1 = (uint32_t)(find_entry_by_ushort_key(iVar3,0x41));
          iVar2 = find_entry_by_id_in_table(iVar3,0x41);
          uVar1 = increment_counter_if_nonzero(param_1,uVar1,iVar2);
        }
      }
    }
  }
  return uVar1;
}
