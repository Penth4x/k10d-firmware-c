/* @k10d set_object_flag_bits_10457874 @ 0x10457874
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sets specific bits in a 16-bit field at offset 0x10 of an object while preserving other
 *   bits.
 * summary:
 *   The function performs a read-modify-write on the 16-bit value at param_1 + 0x10. It
 *   masks the existing value with 0x8028 to clear bits 0, 1, 2, 3, 5, and 15, then ORs in
 *   param_2 to set the new state. It is part of the rtos_wrappers_and_heap module and is
 *   called by configure_sensor_readout_params_10505030. No kernel calls or device I/O are
 *   performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_bits_10457874(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x10) = **(ushort **)(param_1 + 0x10) & 0x8028 | param_2;
  return;
}
