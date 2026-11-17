/* @k10d ae_reg_writer_b @ 0x1051587e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_virtual_command_and_update_state)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer and updates several fields in the target
 *   structure.
 * summary:
 *   The function performs a virtual call using a vtable pointer at offset 0x8d4 of param_2,
 *   passing a computed address as the second argument. It then writes specific constants
 *   and values to offsets 0x10, 0x8, 0xc, and 0x14 of param_2. Finally, it calls
 *   reg_framework_send with a value derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE register writer for AE-RAM B slot (state+0xb8), cmd field 0x7f4. */

void ae_reg_writer_b(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0xbc))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0xb8) + (int)param_2,
             *(uint16_t *)
              (*(int *)((int)param_2 + 0x24) * 2 + *(int *)((int)param_2 + 0x20) + 0xa0));
  *(uint32_t *)((int)param_2 + 0x10) = 0xa00005;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x7f4);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x48) + 8);
  return;
}
