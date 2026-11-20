/* @k10d check_virtual_slot2_condition @ 0x104929d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Returns true if a virtual method result and two other function results share a common
 *   set bit.
 * summary:
 *   Retrieves an object pointer via get_or_create_singleton_object_10492ade, invokes
 *   virtual slot 2 with argument 0, and combines the result with values from
 *   initialize_sram_block_1049229e and reset_sram_flag_at_0x8005a15c using bitwise AND. The
 *   final boolean indicates whether all three values have at least one bit in common. The
 *   specific subsystem role is unclear due to unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_virtual_slot2_condition(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  piVar1 = (int *)get_or_create_singleton_object_10492ade();
  uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  uVar3 = initialize_sram_block_1049229e();
  bVar4 = reset_sram_flag_at_0x8005a15c();
  return (bVar4 & (uVar2 & uVar3) != 0) != 0;
}
