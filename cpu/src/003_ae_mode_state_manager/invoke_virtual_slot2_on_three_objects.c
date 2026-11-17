/* @k10d invoke_virtual_slot2_on_three_objects @ 0x10365002
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 2 on three distinct SDRAM object pointers.
 * summary:
 *   The function takes no arguments and sequentially invokes
 *   reset_object_fields_and_call_base (virtual slot 2 of cls_105b9458) on three hardcoded
 *   SDRAM addresses: 0x800158dc, 0x80015af0, and 0x80015d04. No other side effects or MMIO
 *   operations are visible in the pseudocode. The specific camera subsystem role of these
 *   objects cannot be determined from the provided code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot2_on_three_objects(uint32_t param_x0)

{
  reset_object_fields_and_call_base((void *)0x800158dc/*SDRAM*/);
  reset_object_fields_and_call_base((void *)0x80015af0/*SDRAM*/);
  reset_object_fields_and_call_base((void *)0x80015d04/*SDRAM*/);
  return;
}
