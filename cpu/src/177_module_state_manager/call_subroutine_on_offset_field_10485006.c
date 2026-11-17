/* @k10d call_subroutine_on_offset_field_10485006 @ 0x10485006
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer stored at a fixed address, passing a pointer to a field 0x14
 *   bytes into the input object.
 * summary:
 *   The function takes a single pointer argument and calls the code located at 0x10428ee4.
 *   It passes the address of the field at offset 0x14 within the object pointed to by
 *   param_1. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_10485006(int param_1)

{
  (*(code *)0x10428ee4/*ROM*/)(param_1 + 0x14);
  return;
}
