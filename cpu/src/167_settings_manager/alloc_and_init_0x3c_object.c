/* @k10d alloc_and_init_0x3c_object @ 0x104773d0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x3c-byte object when param_1 is NULL, calls
 *   copy_null_terminated_string to initialize it, and zeroes offset 0x1e.
 * summary:
 *   Follows the standard Cfront constructor idiom: if param_1 is NULL it calls
 *   heap_alloc(0x3c) and uses the returned pointer in r4. It then calls
 *   copy_null_terminated_string with the object and the global pvRam8000ff30, and sets the
 *   byte at offset 0x1e to 0. The function returns the object pointer in r4. The role of
 *   copy_null_terminated_string and pvRam8000ff30 is not determinable from the given
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104773ea) overlaps instruction at (ram,0x104773e8)
    */

int alloc_and_init_0x3c_object(void *param_1)

{
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)0x3c), param_1 != 0)) {
    copy_null_terminated_string((void *)(param_1),(void *)(pvRam8000ff30));
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
  }
  return (int)param_1;
}
