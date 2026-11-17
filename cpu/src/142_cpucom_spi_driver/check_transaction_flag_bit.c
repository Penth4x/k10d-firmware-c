/* @k10d check_transaction_flag_bit @ 0x10464f24
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Tests a specific bit in a flag byte of the CPUCOM transaction context and returns 1 if
 *   set.
 * summary:
 *   This virtual method acquires a lock (free_cpucom_context), checks if the pointer at
 *   offset 0x10 in the object is non-null, and if so, tests bit param_3 of the byte at
 *   offset param_2 in that pointed-to structure. It releases the lock
 *   (free_cpucom_context_ref) and returns 1 if the bit is set, 0 otherwise. The object is a
 *   CPUCOM transaction context, and this likely checks a status or control flag within the
 *   transaction data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_transaction_flag_bit(void *param_1,int param_2,byte param_3)

{
  uint32_t uVar1;
  
  free_cpucom_context(param_1);
  if (*(int *)((int)param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((*(byte *)(*(int *)((int)param_1 + 0x10) + param_2) & param_3) == 0) {
      uVar1 = 0;
    }
  }
  free_cpucom_context_ref(param_1);
  return uVar1;
}
