/* @k10d menu_build_prestep @ 0x10449e18
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_and_configure_layout)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Waits for a layout object to become ready, then applies a series of configuration
 *   parameters.
 * summary:
 *   The function first calls an initialization routine on the object, then busy-waits on a
 *   status check (layout_ready_chk) on a pointer at offset 0x110 until it returns true.
 *   Once ready, it calls four configuration functions with specific integer arguments (400,
 *   1, 1, 2000) and a final cleanup or activation call. The specific subsystem (e.g., OSDC,
 *   display, or sensor) is not identifiable from the provided callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void menu_build_prestep(void *param_1)

{
  bool bVar1;
  
  wait_for_subobject_flag_clear_10449af0(param_1);
  bVar1 = layout_ready_chk(*(void **)((int)param_1 + 0x110));
  while (!bVar1) {
    bVar1 = layout_ready_chk(*(void **)((int)param_1 + 0x110));
  }
  update_object_field_with_guard(param_1,400);
  toggle_and_wait_for_subsystem(param_1,1);
  select_and_set_mode_value(param_1,1);
  find_exposure_index_by_value(param_1,2000);
  reset_sdhc_controller_regs(param_1);
  return;
}
