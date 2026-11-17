/* @k10d caseD_7 @ 0x1000fec6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_array_index_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes an offset into a 14-byte-stride array using a base pointer and a short index.
 * summary:
 *   The function takes a short parameter and returns the address of an element in a
 *   structure array located at DAT_10011d04. Each element is 0xe (14) bytes in size, as
 *   indicated by the multiplication factor. It is a simple arithmetic helper likely used to
 *   access kernel data structures such as task control blocks or ready-list entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_7(short param_1)

{
  return DAT_10011d04/*ROM*/ + param_1 * 0xe + -0xe;
}
