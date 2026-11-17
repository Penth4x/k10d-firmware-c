/* @k10d init_object_with_four_calls_104ef7b8 @ 0x104ef7b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions on its fields and a global
 *   pointer.
 * summary:
 *   The function takes an object pointer (param_1) and two additional parameters. It calls
 *   set_pointer_and_clear_flag on the field at offset 0x14 with param_2, calls
 *   write_exposure_params_to_mmio with the object and param_3, calls set_irq_enable_bit
 *   with the field at offset 0xc and constants, and finally invokes a function pointer
 *   stored at 0x1044d0aa using the field at offset 0x10. The specific roles of the callees
 *   are unknown, so the operation is described mechanically as a sequence of initialization
 *   or setup calls on object fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_four_calls_104ef7b8(int param_1,int param_2,void *param_3)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x14),(void *)param_2);
  write_exposure_params_to_mmio(param_1,param_3);
  set_irq_enable_bit(*(int *)(param_1 + 0xc),-0x7fffffec,0);
  (*(code *)0x1044d0aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
  return;
}
