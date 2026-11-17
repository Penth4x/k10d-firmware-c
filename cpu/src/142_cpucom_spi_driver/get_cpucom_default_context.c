/* @k10d get_cpucom_default_context @ 0x104652a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a static CPUCOM context, initializing it once on first call.
 * summary:
 *   Checks the global flag iRam8004871c; if zero, sets it to 1 and calls two unnamed
 *   initializers (allocate_and_zero_context on the context at 0x80048318 and
 *   prepend_to_singly_linked_list on 0x8000fe64). Always returns the address 0x80048318.
 *   The caller allocate_cpucom_transaction_context uses this to obtain a base context for
 *   CPUCOM transactions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_cpucom_default_context(void)

{
  if (iRam8004871c == 0) {
    iRam8004871c = 1;
    allocate_and_zero_context((void *)0x80048318/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fe64/*SDRAM*/);
  }
  return 0x80048318/*SDRAM*/;
}
