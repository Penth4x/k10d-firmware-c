/* @k10d call_helper_with_0x10005000 @ 0x10520a80
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x10005000.
 * summary:
 *   This function is a virtual method (slot 2) of class cls_105d7168. It performs a single
 *   call to check_magic_word_pair, passing the constant value 0x10005000 as the argument.
 *   No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x10005000(void)

{
  check_magic_word_pair((void *)0x10005000/*ROM*/);
  return;
}
