/* @k10d dispatch_event_with_flags @ 0x105158e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit flag word from a table and invokes a virtual method on an object with
 *   three boolean arguments derived from those flags.
 * summary:
 *   The function calculates an index using values at offsets 0x24 and 0xa0 of param_2 to
 *   fetch a ushort. It then calls virtual slot 24 (offset 0xc4) on the object pointer at
 *   param_2+0x8d4, passing the low three bits of the fetched word as boolean arguments. It
 *   updates several fields in param_2 (offsets 0x8, 0x10, 0xc, 0x14) and calls
 *   reg_framework_send with a pointer derived from param_1. The specific camera subsystem
 *   is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_flags(int param_1,void *param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2);
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[24].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[24].adj + (int)param_2,(uVar1 & 1) != 0,
             (uVar1 & 2) != 0,(uVar1 & 4) != 0);
  *(uint32_t *)((int)param_2 + 0x10) = 0x600001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x7f8);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x38) + 8);
  return;
}
