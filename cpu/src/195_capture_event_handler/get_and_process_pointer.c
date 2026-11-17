/* @k10d get_and_process_pointer @ 0x104927ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from an unknown helper and passes it to a second unknown helper.
 * summary:
 *   The function calls get_or_init_sram_block_1052b6fc to obtain a pointer, then passes
 *   that pointer as an argument to call_three_helpers_on_struct_1052b8d6. It finally
 *   returns the constant 1. The specific roles of the callees are unknown, so the
 *   mechanical behavior is a simple get-and-process sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_and_process_pointer(uint32_t param_x0)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  call_three_helpers_on_struct_1052b8d6(puVar1);
  return 1;
}
