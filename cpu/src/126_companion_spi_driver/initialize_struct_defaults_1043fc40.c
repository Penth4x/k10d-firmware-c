/* @k10d initialize_struct_defaults_1043fc40 @ 0x1043fc40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of default values into a structure at offsets 0x1c through 0x40.
 * summary:
 *   The function takes a pointer to a data structure and initializes several fields with
 *   specific constants. It sets 16-bit fields at 0x28 to 0x3fff and 8-bit fields at 0x30,
 *   0x38, and 0x40 to 0x7f or 0x1f, while zeroing other fields. No callees are invoked, and
 *   the specific subsystem or meaning of these fields is not determinable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_defaults_1043fc40(int param_1)

{
  **(uint8_t **)(param_1 + 0x1c) = 0;
  **(uint16_t **)(param_1 + 0x24) = 0;
  **(uint16_t **)(param_1 + 0x28) = 0x3fff;
  **(uint8_t **)(param_1 + 0x2c) = 0;
  **(uint8_t **)(param_1 + 0x30) = 0x7f;
  **(uint8_t **)(param_1 + 0x34) = 0;
  **(uint8_t **)(param_1 + 0x38) = 0x1f;
  *(uint8_t *)(param_1 + 0x40) = 0x1f;
  return;
}
