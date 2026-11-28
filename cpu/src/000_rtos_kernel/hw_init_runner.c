/* @k10d hw_init_runner @ 0x10008098
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed call_peripheral_init_table)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Sets two config words then invokes each function pointer in a small table before
 *   calling one final routine.
 * summary:
 *   Writes 0x10 to DAT_00000448 and 0xe7/0x1b to DAT_00000048/0x0000004e, then iterates
 *   over the function-pointer table starting at PTR_FUN_10011f6c up to 0x10011fe4, calling
 *   each entry with no arguments. After the loop it calls noop_stub. The table entries and
 *   the final callee are not named, so the specific subsystems initialized are not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void hw_init_runner(void)

{
  void **init_table_ptr;
  code *init_fn;

  DAT_00000448 = 0x10;
  DAT_00000048 = 0xe7;
  DAT_0000004e = 0x1b;
  init_table_ptr = (void **)&PTR_FUN_10011f6c;
  do {
    init_fn = (code *)*init_table_ptr;
    init_table_ptr = init_table_ptr + 1;
    (*init_fn)();
  } while (init_table_ptr < (void **)0x10011fe4/*ROM*/);
  noop_stub();
  return;
}
