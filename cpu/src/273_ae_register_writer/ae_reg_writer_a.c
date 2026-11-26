/* @k10d ae_reg_writer_a @ 0x105157f8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_ae_register_command)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Constructs and dispatches an AE register command packet to the image processor.
 * summary:
 *   The function prepares a command structure at param_2, setting the command ID to
 *   0xa00005 or 0xa00009 based on a flag at offset 0x2f. It calculates a data pointer using
 *   a table at offset 0x20 and an index at 0x24, and invokes a virtual method on an object
 *   at offset 0x8d4 to process the data. Finally, it calls reg_framework_send to transmit
 *   the command.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE module register-command writer: reads AE-RAM A (state+0xb0), param table
   [ae_mod+0x20]+0xa0+2i, emits cmd 0xa00005 via 0x10459abe. [ae_mod+0x8d4]=composite state ptr. */

void ae_reg_writer_a(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  if (*(char *)((int)param_2 + 0x2f) == '\0') {
    *(uint32_t *)((int)param_2 + 0x10) = 0xa00009;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = 0;
  }
  else {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[22].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[22].adj + (int)param_2,
               *(uint16_t *)
                (*(int *)((int)param_2 + 0x24) * 2 + *(int *)((int)param_2 + 0x20) + 0xa0));
    *(uint32_t *)((int)param_2 + 0x10) = 0xa00005;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = *(uint32_t *)((int)param_2 + 0x7f0);
  }
  *(uint32_t *)((int)param_2 + 0xc) = uVar1;
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x48) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
