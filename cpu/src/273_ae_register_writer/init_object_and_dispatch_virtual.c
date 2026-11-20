/* @k10d init_object_and_dispatch_virtual @ 0x10515de6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes object fields at offsets 0x8-0x14 and invokes a virtual method via a vtable
 *   pointer.
 * summary:
 *   The function performs a virtual call using a vtable pointer stored at param_2+0x8d4,
 *   specifically slot 37 (offset 300/8). It then writes specific values to the object
 *   structure: 0x800002 at offset 0x10, param_1+4 at offset 0x8, a value from offset 0x818
 *   to offset 0xc, and a self-pointer at offset 0x14. Finally, it calls reg_framework_send
 *   with an argument derived from param_1+0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_dispatch_virtual(int param_1,void *param_2)

{
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[37].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[37].adj + (int)param_2,
             *(uint16_t *)
              (*(int *)((int)param_2 + 0x24) * 2 + *(int *)((int)param_2 + 0x20) + 0xa0));
  *(uint32_t *)((int)param_2 + 0x10) = 0x800002;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x818);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x44) + 8);
  return;
}
