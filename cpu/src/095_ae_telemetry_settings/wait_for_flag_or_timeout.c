/* @k10d wait_for_flag_or_timeout @ 0x1040b806
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Polls a status function until it returns zero or a byte at offset 0x14 in param_1
 *   becomes non-zero.
 * summary:
 *   Calls get_or_create_singleton_object_1050b118 and get_field_at_offset_0x28 to obtain a
 *   status value. Loops while the status is non-zero and the byte at param_1+0x14 is zero,
 *   calling check_kernel_call_success_10459fea(10) between checks. Returns 1 if the status
 *   becomes zero, or 0 if the flag at param_1+0x14 is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_flag_or_timeout(int param_1)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_1050b118();
  iVar1 = get_field_at_offset_0x28(iVar1);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0x14) != '\0') break;
    check_kernel_call_success_10459fea(0xa);
    iVar1 = get_or_create_singleton_object_1050b118();
    iVar1 = get_field_at_offset_0x28(iVar1);
  }
  return 0;
}
