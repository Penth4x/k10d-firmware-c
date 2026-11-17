/* @k10d call_helper_with_field_2b78_1052bf4e @ 0x1052bf4e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Passes the object and its field at offset 0x2b78 to a helper function.
 * summary:
 *   This is virtual slot 3 of cls_105f9f74. It reads the 32-bit value at offset 0x2b78 of
 *   the object pointed to by param_1 and passes both the object pointer and that value as
 *   arguments to build_and_send_message. No other operations are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_field_2b78_1052bf4e(int param_1)

{
  build_and_send_message(param_1,*(uint32_t *)(param_1 + 0x2b78));
  return;
}
