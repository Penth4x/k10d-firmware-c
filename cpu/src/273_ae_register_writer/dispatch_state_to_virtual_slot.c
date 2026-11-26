/* @k10d dispatch_state_to_virtual_slot @ 0x10515bce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Reads a 2-bit state from a table and calls a virtual method with corresponding flags,
 *   then updates object fields.
 * summary:
 *   The function calculates an index using values at offsets 0x24 and 0xa0 of a table
 *   pointer (param_2 + 0x20) to read a short state value. It then performs a virtual call
 *   to slot 2 (offset 0x104) of an object at param_2 + 0x8d4, passing different
 *   combinations of flags (1,1,0), (1,0,0), (0,1,0), or (1,0,1) based on the state value
 *   (0-4). Finally, it initializes several fields in param_2 (offsets 0x8, 0x10, 0xc, 0x14)
 *   and calls reg_framework_send with a value derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_to_virtual_slot(int param_1,void *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2);
  if (sVar1 == 0) {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,1,1,0);
  }
  else if (sVar1 == 1) {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,1,0,0);
  }
  else if (sVar1 == 2) {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,0,1,0);
  }
  else if (sVar1 == 3) {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,1,0,1);
  }
  else if (sVar1 == 4) {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,1,0,0);
  }
  else {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[32].adj + (int)param_2,1,1,0);
  }
  *(uint32_t *)((int)param_2 + 0x10) = 0x800001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x804);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x44) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
