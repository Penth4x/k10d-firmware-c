/* @k10d poll_context_flag_until_status_set @ 0x10466eb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls a flag at param_1+0x20, calling a helper each iteration, until a status byte is
 *   non-zero or the flag clears.
 * summary:
 *   Calls initialize_object_with_optional_param to initialize, then loops while
 *   test_flag_clear_if_active on the pointer at param_1+0x20 is true. Each iteration calls
 *   check_kernel_call_success_10459fea(1) and checks read_byte_at_offset_0x28; if non-zero,
 *   it sets the return value to 1 and breaks. Finally calls check_and_clear_object_state
 *   and returns the status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

uint32_t poll_context_flag_until_status_set(void *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  initialize_object_with_optional_param((int)param_1,param_2);
  bVar1 = test_flag_clear_if_active(*(void **)((int)param_1 + 0x20));
  if (bVar1) {
    do {
      check_kernel_call_success_10459fea(1);  /* B-3d: original sets r4=1 (1-tick yield) */
      cVar2 = read_byte_at_offset_0x28(param_1);
      if (cVar2 != '\0') {
        uVar3 = 1;
        break;
      }
      bVar1 = test_flag_clear_if_active(*(void **)((int)param_1 + 0x20));
    } while (bVar1);
  }
  check_and_clear_object_state(param_1);
  return uVar3;
}
