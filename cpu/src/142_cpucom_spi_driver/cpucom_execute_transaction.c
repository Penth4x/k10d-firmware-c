/* @k10d cpucom_execute_transaction @ 0x10466c94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a full SPI transaction sequence on the companion chip, including setup, data
 *   transfer, and line-clear wait.
 * summary:
 *   Calls a series of setup functions (release_transaction_context_members,
 *   release_struct_fields_10466d8a, release_struct_fields_10466d06) to prepare the
 *   transaction context. Invokes poll_context_flag_until_status_set with a 1000ms timeout
 *   to initiate the transfer, then signals completion via dispatch_context_virtual_op on a
 *   field at offset 0x34. If the initial transfer did not succeed (iVar1 != 0), it calls
 *   cpucom_wait_line_clear to ensure the handshake line is clear before returning the
 *   status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cpucom_execute_transaction(void *param_1)

{
  int iVar1;
  
  release_transaction_context_members(param_1);
  release_struct_fields_10466d8a(param_1);
  release_struct_fields_10466d06(param_1);
  iVar1 = poll_context_flag_until_status_set(param_1,1000);
  dispatch_context_virtual_op(*(void **)((int)param_1 + 0x34),1);
  release_context_two_fields(param_1);
  if (iVar1 == 0) {
    iVar1 = cpucom_wait_line_clear(param_1,1000);
  }
  return iVar1;
}
