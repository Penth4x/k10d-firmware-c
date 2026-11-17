/* @k10d test_flag_bit_15_of_field @ 0x10457860
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the 16-bit field at offset 0x10 of the object is set.
 * summary:
 *   Reads a 16-bit value from offset 0x10 of the object pointed to by param_1 and tests bit
 *   15 (mask 0x8000). It is a virtual method (slot 3) of class cls_105a28b4, called from
 *   virtual_slot3_check_and_reset. No callees are present; the role of the specific flag is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_bit_15_of_field(void *param_1)

{
  return (**(ushort **)((int)param_1 + 0x10) & 0x8000) != 0;
}
