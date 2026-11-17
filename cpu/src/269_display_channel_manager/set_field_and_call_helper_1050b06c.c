/* @k10d set_field_and_call_helper_1050b06c @ 0x1050b06c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the 5th element of the object pointed to by param_1, then calls
 *   create_message_box_104594ea with the same arguments.
 * summary:
 *   The function writes param_2 to offset 0x10 (index 4) of the structure referenced by
 *   param_1. It then invokes the unannotated callee create_message_box_104594ea, passing
 *   the object pointer and the stored value. No other side effects or MMIO operations are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_1050b06c(int *param_1,int param_2)

{
  param_1[4] = param_2;
  create_message_box_104594ea(param_1,param_2);
  return;
}
