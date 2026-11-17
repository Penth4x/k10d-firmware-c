/* @k10d poll_object_state_until_change @ 0x10468764
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Initializes an object, then polls its state in a loop until a specific condition is met
 *   or a timeout occurs.
 * summary:
 *   The function calls three initialization routines on param_1, then conditionally calls a
 *   setup routine based on param_2. It enters a loop that repeatedly calls
 *   poll_and_process_char_event until it returns non-zero. Inside the loop, it checks
 *   several state bits at offset 0x210 of param_1 using helper functions. If the state
 *   changes, it updates the object via write_two_config_entries_1046919e. The loop exits
 *   when a specific state bit is set, returning the final state value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_object_state_until_change(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  send_twenty_identical_entries(param_1);
  call_helper_with_incremented_value(param_1);
  write_two_config_entries_1046919e(param_1,0);
  iVar3 = 0;
  if (param_2 == 2) {
    write_exposure_param_blocks(param_1,7,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),0);
  }
  else if (param_2 == 0) {
    write_exposure_param_blocks(param_1,7,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),0);
  }
  else if (param_2 == 1) {
    write_sequential_data_entries(param_1,7,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),0);
  }
  while( true ) {
    do {
      iVar1 = poll_and_process_char_event(param_1);
    } while (iVar1 == 0);
    iVar2 = (int)param_1 + 0x210;
    iVar1 = call_helper_with_byte_and_ptr_104675b8(iVar2);
    if (iVar1 != 0) break;
    iVar1 = call_helper_with_byte_and_ptr_104675a2(iVar2);
    if (iVar1 != 0) goto LAB_1046884e;
    iVar1 = call_helper_with_byte_and_ptr_10467576(iVar2);
    if (iVar1 == 0) {
      iVar2 = call_helper_with_byte_and_ptr_1046758c(iVar2);
      iVar1 = iVar3;
      if (iVar2 != 0) {
        iVar1 = 1;
        iVar4 = iVar3;
      }
    }
    else {
      iVar1 = 0;
      iVar4 = iVar3;
    }
    iVar3 = iVar1;
    if (iVar1 != iVar4) {
      write_two_config_entries_1046919e(param_1,iVar1);
    }
  }
  iVar3 = 0;
LAB_1046884e:
  if (iVar3 != 0) {
    send_twenty_identical_entries(param_1);
  }
  return iVar3;
}
