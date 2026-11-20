/* @k10d appmain_init_method1 @ 0x10438a90
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_system_subsystems)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes multiple hardware and software subsystems by calling a sequence of
 *   initialization functions.
 * summary:
 *   The function calls five unnamed initialization routines (call_subroutine_103b7608,
 *   empty_stub_function_103b76f0, get_or_init_sram_buffer_104277bc, irq_dispatch_prologue,
 *   intc_init) followed by three more routines that take param_1 and 0 as arguments
 *   (invoke_virtual_slot_two_on_objects_10438b44,
 *   invoke_virtual_slot_two_on_seventeen_objects,
 *   invoke_virtual_slot_two_on_two_objects_104392ca). It returns 1, likely indicating
 *   success. The specific subsystems being initialized are not identifiable from the
 *   provided pseudocode and callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t appmain_init_method1(cls_105a020c *param_1)

{
  call_subroutine_103b7608();
  empty_stub_function_103b76f0();
  get_or_init_sram_buffer_104277bc();
  irq_dispatch_prologue();
  intc_init();
  invoke_virtual_slot_two_on_objects_10438b44((uint32_t)(param_1),(uint32_t)(0));
  invoke_virtual_slot_two_on_seventeen_objects((uint32_t)(param_1),(uint32_t)(0));
  invoke_virtual_slot_two_on_two_objects_104392ca((uint32_t)(param_1),(uint32_t)(0));
  return 1;
}
