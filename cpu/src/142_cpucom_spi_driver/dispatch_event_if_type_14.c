/* @k10d dispatch_event_if_type_14 @ 0x10466bc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks if param_2 equals 0xe and calls invoke_virtual_slot_3_on_member_10466ffa with
 *   param_1 if true, otherwise returns 0.
 * summary:
 *   This function acts as a simple event or command dispatcher. It tests the second
 *   argument against the constant 0xe (14). If the condition is met, it invokes the callee
 *   invoke_virtual_slot_3_on_member_10466ffa, passing the first argument (likely an object
 *   pointer or context) to it. If the condition is not met, it returns 0 immediately. The
 *   function is part of the cpucom_spi_driver module, suggesting it handles a specific SPI
 *   transaction or control event type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a7df8": ignoring multiple overlapping fields */

uint32_t dispatch_event_if_type_14(cls_105a7df8 *param_1,int param_2)

{
  if (param_2 == 0xe) {
    /* B-3v: original loads r5=0x40001 (the forwarded event) before this call (asm 0x10466bca). */
    invoke_virtual_slot_3_on_member_10466ffa(param_1, 0x40001);
  }
  return 0;
}
