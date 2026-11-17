/* @k10d read_entry_or_zero_outputs @ 0x104985aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from an array and either zeros three output pointers or passes the
 *   value to a helper.
 * summary:
 *   The function indexes an array at param_1 + param_2*4. If the fetched value is zero, it
 *   writes zero to the three output pointers param_3, param_4, and param_5 and returns 0.
 *   Otherwise, it calls acquire_sem_and_invoke_virtual with the fetched value and the three
 *   output pointers, returning the helper's result. The caller is
 *   update_settings_status_flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
read_entry_or_zero_outputs(int param_1,int param_2,uint32_t *param_3,uint32_t *param_4,uint32_t *param_5)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    uVar2 = 0;
    *param_5 = 0;
  }
  else {
    uVar2 = acquire_sem_and_invoke_virtual(iVar1,param_3,param_4,param_5);
  }
  return uVar2;
}
