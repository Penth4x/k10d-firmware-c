/* @k10d forward_value_to_virtual_slot @ 0x10496a88
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from a table at param_2 and forwards it to a virtual method.
 * summary:
 *   The function indexes a 32-bit table at 0x105b52c4 using param_2 as the index (param_2 *
 *   4 + base). It then calls test_status_item_bit_1046b1a2, which is virtual method slot 3
 *   of class cls_105a8a1c, passing param_1 + 4 as the first argument and the table value as
 *   the second. This appears to be a virtual method (slot 3) of cls_105b5410 that
 *   dispatches a value from a lookup table to a base class or related object's virtual
 *   method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_value_to_virtual_slot(cls_105b5410 *param_1,int param_2)

{
  test_status_item_bit_1046b1a2((void *)(&param_1->field_0x4),*(int *)(param_2 * 4 + 0x105b52c4/*ROM*/));
  return;
}
