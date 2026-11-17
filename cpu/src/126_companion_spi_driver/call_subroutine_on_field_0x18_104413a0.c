/* @k10d call_subroutine_on_field_0x18_104413a0 @ 0x104413a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x18 of param_1 to a single callee.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as the sole argument to
 *   set_flag3_with_notify. It performs no other operations, so its role is entirely defined
 *   by the unknown callee. The meaning of the 0x18 field and the callee's behavior are not
 *   established.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x18_104413a0(int param_1)

{
  set_flag3_with_notify(*(void **)(param_1 + 0x18));
  return;
}
