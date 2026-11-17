/* @k10d return_r7_passthrough @ 0x000d8a32
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the value currently in register r7 unchanged.
 * summary:
 *   The function body consists solely of returning in_r7, which Ghidra models as the
 *   incoming r7 register value. No memory accesses, no callees, and no side effects are
 *   visible. It is a trivial pass-through of r7, likely a stub or a tail-call artifact.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_r7_passthrough(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)

{
  uint32_t r7_in;
  
  return r7_in;
}
