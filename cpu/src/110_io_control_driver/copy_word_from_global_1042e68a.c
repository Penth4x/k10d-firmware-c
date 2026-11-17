/* @k10d copy_word_from_global_1042e68a @ 0x1042e68a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit value from offset 8 of a global object into offset 0xc of the caller-
 *   provided structure.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a pointer to a global or static
 *   object. Reads the 32-bit word at offset 8 of that object and writes it to offset 0xc of
 *   the structure pointed to by param_1. Returns 1 unconditionally. The specific subsystem
 *   or meaning of the copied value is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_word_from_global_1042e68a(int param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)(iVar1 + 8);
  return 1;
}
