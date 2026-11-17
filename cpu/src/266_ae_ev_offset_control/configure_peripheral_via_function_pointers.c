/* @k10d configure_peripheral_via_function_pointers @ 0x10501e12
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of functions stored in a structure to reset and enable a peripheral.
 * summary:
 *   The function extracts a pointer from offset 0x14 of the input structure and uses it to
 *   call a series of functions located at 0x10453xxx-0x10454xxx. It first calls six
 *   functions with a parameter of 0, then conditionally calls four functions with a
 *   parameter of 1 and one with 0x8001131c if a flag at offset 0xc is non-zero. Finally, it
 *   calls seven more functions with parameters 1 or 2. The specific peripheral or subsystem
 *   is not identifiable from the provided code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_peripheral_via_function_pointers(int param_1)

{
  (*(code *)0x1045403a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10453fee/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10453fa2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x1045411e/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x104540d2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10454086/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  if (*(char *)(param_1 + 0xc) != '\0') {
    (*(code *)0x104540d2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
    (*(code *)0x10454086/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
    (*(code *)0x10454246/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0x8001131c/*SDRAM*/);
    (*(code *)0x10453fee/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
    (*(code *)0x10453fa2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  }
  (*(code *)0x1045416a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x10454192/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x104541ba/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x104541e2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x10453f6e/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x10453efc/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  (*(code *)0x10453f36/*ROM*/)(*(uint32_t *)(param_1 + 0x14),2);
  (*(code *)0x10453ec2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),2);
  return;
}
