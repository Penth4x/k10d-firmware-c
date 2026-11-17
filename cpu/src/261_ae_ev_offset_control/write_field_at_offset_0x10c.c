/* @k10d write_field_at_offset_0x10c @ 0x104fa040
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the field at offset 0x10c of the object pointed to by param_1 via a
 *   helper.
 * summary:
 *   The function dereferences param_1, adds offset 0x10c, and passes that address along
 *   with param_2 to set_gpio_key_port_bit6. It acts as a thin setter for a specific member
 *   of the object. The caller is virtual method slot 3 of class cls_105d4190, suggesting
 *   this is a virtual setter implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x10c(void *param_1,int param_2)

{
  set_gpio_key_port_bit6(*(uint32_t *)((int)param_1 + 0x10c),param_2);
  return;
}
