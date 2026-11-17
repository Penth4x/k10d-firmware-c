/* @k10d initialize_subsystem_modules @ 0x100f0030
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of six initialization routines in order.
 * summary:
 *   The function acts as a top-level initializer, sequentially invoking
 *   initialize_peripheral_register_block, initialize_four_dat_globals,
 *   initialize_6b000000_block, disp_cfg_40080000, infinite_loop_100f031c, and
 *   write_three_mmio_registers_100f039a. It does not perform any direct memory operations
 *   or return a value. The specific subsystems being initialized are unknown because the
 *   callees are not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subsystem_modules(void)

{
  initialize_peripheral_register_block();
  initialize_four_dat_globals();
  initialize_6b000000_block();
  disp_cfg_40080000();
  infinite_loop_100f031c();
  write_three_mmio_registers_100f039a();
  return;
}
