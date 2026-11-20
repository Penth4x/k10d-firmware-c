/* @k10d process_event_sequence_with_callbacks @ 0x104e6f68
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Processes a sequence of event IDs, invoking virtual callbacks and updating state based
 *   on results.
 * summary:
 *   The function first calls accumulate_value_if_valid to initialize or check a state. It
 *   then iterates through a series of event IDs (0x8769, 0x927c, 0xa005, 0x8825) using
 *   find_entry_by_ushort_key and read_array_element_by_index. For specific events, it
 *   invokes a virtual method on an object found at param_1+0xc and calls a virtual method
 *   on param_2. Finally, it checks a virtual method on param_2 and updates a local flag if
 *   a subsequent call to accumulate_value_if_valid succeeds.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_sequence_with_callbacks(void *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar2 = accumulate_value_if_valid(param_1,param_2,param_3);
  if (((iVar2 != 0) && (iVar2 = (uint32_t)(find_entry_by_ushort_key(param_3,0x8769)), iVar2 != 0)) &&
     (iVar2 = read_array_element_by_index(iVar2,0), iVar2 != 0)) {
    accumulate_value_if_valid(param_1,param_2,iVar2);
    iVar3 = (uint32_t)(find_entry_by_ushort_key(iVar2,0x927c));
    if ((iVar3 != 0) &&
       (piVar1 = *(int **)(*(int *)((int)param_1 + 0xc) + 0xc), piVar1 != (int *)0x0)) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,0);
    }
    iVar3 = (uint32_t)(find_entry_by_ushort_key(iVar2,0xa005));
    if (iVar3 != 0) {
      iVar3 = read_array_element_by_index(iVar3,0);
      accumulate_value_if_valid(param_1,param_2,iVar3);
    }
    iVar2 = (uint32_t)(find_entry_by_ushort_key(iVar2,0x8825));
    if (iVar2 != 0) {
      iVar2 = read_array_element_by_index(iVar2,0);
      accumulate_value_if_valid(param_1,param_2,iVar2);
    }
    iVar2 = (((vtbl_entry*)(*param_2))[9].fn)((int)((vtbl_entry*)(*param_2))[9].adj + (int)param_2);
    if ((iVar2 == 0) && (iVar2 = accumulate_value_if_valid(param_1,param_2,*(int *)(param_3 + 0x2c)), iVar2 != 0)
       ) {
      uStack_c = 1;
    }
  }
  return uStack_c;
}
