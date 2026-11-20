/* @k10d call_virtual_slot_two_on_offset_1044e1fc @ 0x1044e1fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual method slot 2 of an object located at param_1 + 8.
 * summary:
 *   The function takes a single pointer argument, adds 8 to it, and passes the result to
 *   dispatch_single_subobj. dispatch_single_subobj is verified to be virtual method slot 2
 *   of class cls_1059e408. This function acts as a thin wrapper or thunk to dispatch a
 *   virtual call on an object member at offset 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_two_on_offset_1044e1fc(cls_105a2010 *param_1)

{
  dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
  return;
}
