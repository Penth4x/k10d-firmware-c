/* @k10d check_and_update_state_flag @ 0x10435462
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 125_display_sync_init (unit names are model-proposed)
 * purpose:
 *   Checks a state value from a global object and conditionally updates or resets it based
 *   on a parameter.
 * summary:
 *   Retrieves a pointer from get_or_create_singleton_object_1046d20c and reads an integer
 *   at offset 4. Initializes a local 16-byte buffer and calls
 *   alloc_and_init_small_struct_1045c524 with it. Calls
 *   call_helper_with_second_arg_1046c8d6 with the read integer; if the result is non-zero
 *   or param_2 is non-zero, it calls process_param_with_helper, otherwise
 *   query_and_apply_param_state. Finally calls free_heap_if_flag_set_1045c56c and returns a
 *   boolean-like value (0 or 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int check_and_update_state_flag(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_2c [16];
  uint16_t auStack_10 [4];
  
  puVar3 = auStack_2c;
  iVar1 = get_or_create_singleton_object_1046d20c();
  iVar2 = *(int *)(iVar1 + 4);
  puVar3[3] = 0;
  puVar3[7] = 0;
  puVar3[0xb] = 0;
  puVar3[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar3[3],puVar3[7],puVar3[0xb],puVar3[0xf]);
  iVar1 = call_helper_with_second_arg_1046c8d6(iVar2);
  if ((iVar1 == 0) || (param_2 != 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    query_and_apply_param_state(iVar2,auStack_10);
  }
  else {
    process_param_with_helper(param_1);
  }
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return iVar1;
}
