/* @k10d reset_object_fields_to_defaults @ 0x104451a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a series of fields on the object pointed to by param_1 to specific default values.
 * summary:
 *   The function calls a sequence of 24 helper functions, each taking the object pointer
 *   and a specific constant value. The constants include 0xf0f, 0x40, 0x1e, 0xffc0, and 0.
 *   This pattern is consistent with initializing or resetting multiple fields of a struct
 *   to their default or initial states. The caller is a virtual method, suggesting this is
 *   part of an object's lifecycle or state management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_fields_to_defaults(uint32_t param_1)

{
  write_low_sixteen_bits_to_ram_10445760(param_1,0xf0f);
  write_low_sixteen_bits_to_ram_10445770(param_1,0xf0f);
  write_masked_value_to_ram(param_1,0xf0f);
  write_bits_10_11_to_4004038c(param_1,0x40);
  write_masked_byte_to_mmio(param_1,0x1e);
  write_two_bytes_to_mmio_104455e4(param_1,0xffc0);
  write_two_bytes_to_mmio_104455ee(param_1,0xffc0);
  write_two_bytes_to_mmio_104455f8(param_1,0xffc0);
  write_two_bytes_to_mmio_10445602(param_1,0xffc0);
  write_two_bytes_to_mmio_1044560c(param_1,0xffc0);
  write_two_bytes_to_mmio_10445616(param_1,0xffc0);
  write_two_bytes_to_mmio_10445620(param_1,0xffc0);
  write_two_bytes_to_mmio_1044562a(param_1,0xffc0);
  write_two_bytes_to_mmio_10445634(param_1,0xffc0);
  write_two_bytes_to_mmio_1044563e(param_1,0xffc0);
  write_two_bytes_to_mmio_10445648(param_1,0xffc0);
  write_two_bytes_to_mmio_10445652(param_1,0xffc0);
  write_two_bytes_to_mmio_1044565c(param_1,0xffc0);
  write_two_bytes_to_mmio_10445666(param_1,0xffc0);
  write_two_bytes_to_mmio_10445670(param_1,0xffc0);
  write_two_bytes_to_mmio_1044567a(param_1,0xffc0);
  write_masked_value_to_40040300(param_1,0);
  write_masked_value_to_40040320(param_1,0);
  write_masked_value_to_mmio_10445592(param_1,0);
  return;
}
