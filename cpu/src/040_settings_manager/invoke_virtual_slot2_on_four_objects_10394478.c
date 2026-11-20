/* @k10d invoke_virtual_slot2_on_four_objects_10394478 @ 0x10394478
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 2 of class cls_105b9458 on four fixed SDRAM object pointers.
 * summary:
 *   The function takes no arguments and sequentially calls
 *   reset_object_fields_and_call_base (virtual slot 2 of cls_105b9458) with four hardcoded
 *   SDRAM addresses: 0x80019c58, 0x80019e6c, 0x8001a080, and 0x8001a294. No other side
 *   effects or MMIO operations are visible in the pseudocode. The specific camera subsystem
 *   role of these objects cannot be determined from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot2_on_four_objects_10394478(void)

{
  reset_object_fields_and_call_base((cls_105b9458 *)0x80019c58/*SDRAM*/);
  reset_object_fields_and_call_base((cls_105b9458 *)0x80019e6c/*SDRAM*/);
  reset_object_fields_and_call_base((cls_105b9458 *)0x8001a080/*SDRAM*/);
  reset_object_fields_and_call_base((cls_105b9458 *)0x8001a294/*SDRAM*/);
  return;
}
