/* @k10d call_helper_with_object_and_field_10395a26 @ 0x10395a26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the object pointer, its second field, and the constant 1.
 * summary:
 *   The function takes a single pointer argument, dereferences the second word of the
 *   pointed-to structure, and passes both along with the integer constant 1 to
 *   forward_params_via_helper_10394686. It performs no other operations and returns void.
 *   The specific role of the helper and the structure is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_object_and_field_10395a26(int param_1)

{
  forward_params_via_helper_10394686((void *)param_1,*(int **)(param_1 + 4),1);
  return;
}
