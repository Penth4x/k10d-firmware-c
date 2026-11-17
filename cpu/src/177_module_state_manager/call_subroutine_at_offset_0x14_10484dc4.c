/* @k10d call_subroutine_at_offset_0x14_10484dc4 @ 0x10484dc4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Indirectly calls a function pointer stored at offset 0x14 of the object pointed to by
 *   param_1.
 * summary:
 *   The function takes a pointer (param_1), adds 0x14 to it, dereferences the result to get
 *   a code pointer, and calls that function with the original pointer as an argument. It
 *   returns the result of that indirect call. This is a standard virtual dispatch or
 *   callback invocation pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_at_offset_0x14_10484dc4(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1042845e/*ROM*/)(param_1 + 0x14);
  return uVar1;
}
