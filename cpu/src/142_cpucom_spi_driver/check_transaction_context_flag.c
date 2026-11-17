/* @k10d check_transaction_context_flag @ 0x10466dde
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a boolean status by calling a helper on the object's field at offset 0x20.
 * summary:
 *   The function takes an object pointer, dereferences the pointer stored at offset 0x20,
 *   and passes it to test_flag_clear_if_active. It returns the boolean result of that call.
 *   Given the module context (cpucom_spi_driver), this likely checks a state or validity
 *   flag of a transaction context or related structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_transaction_context_flag(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear_if_active(*(void **)(param_1 + 0x20));
  return (uint)bVar1;
}
