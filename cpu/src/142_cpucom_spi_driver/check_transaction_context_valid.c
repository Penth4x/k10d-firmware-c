/* @k10d check_transaction_context_valid @ 0x10466df0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a boolean indicating whether the transaction context pointer at offset 0x20 is
 *   valid.
 * summary:
 *   Extracts a pointer from offset 0x20 of the input structure and passes it to
 *   test_flag_set_if_active. The result of that call is returned as a boolean. Given the
 *   module context (cpucom_spi_driver) and the neighbor
 *   'allocate_cpucom_transaction_context', this likely validates a transaction context
 *   object before use.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_transaction_context_valid(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_set_if_active(*(void **)(param_1 + 0x20));
  return (uint)bVar1;
}
