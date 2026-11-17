/* @k10d osdc_sub_isr_vec56 @ 0x10441b68
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_virtual_slot_two_then_helper)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object at param_1+8, then calls a helper on param_1,
 *   returning the virtual call's result.
 * summary:
 *   The function passes param_1+8 to dispatch_single_subobj, which is a verified virtual
 *   method slot 2 of class cls_1059e408, and stores its return value. It then calls
 *   clear_flag_in_object_field_10442118 with param_1 as the sole argument. The return value
 *   of the virtual call is returned to the caller. The role of
 *   clear_flag_in_object_field_10442118 is unknown from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t osdc_sub_isr_vec56(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_single_subobj(param_1 + 8);
  clear_flag_in_object_field_10442118(param_1);
  return uVar1;
}
