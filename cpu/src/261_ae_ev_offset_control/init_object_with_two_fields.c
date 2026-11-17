/* @k10d init_object_with_two_fields @ 0x104f8ba8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by writing to two fields at offsets 0x10 and 0x14.
 * summary:
 *   The function takes an object pointer (param_1) and a value (param_2). It calls
 *   set_pointer_and_clear_flag with the field at offset 0x14 and param_2, then calls
 *   set_irq_enable_bit with the field at offset 0x10 and the constants -0x7fffffeb
 *   (0x80000005) and 0. The specific roles of the callees and the object are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_fields(int param_1,void *param_2)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x14),param_2);
  set_irq_enable_bit(*(int *)(param_1 + 0x10),-0x7fffffeb,0);
  return;
}
