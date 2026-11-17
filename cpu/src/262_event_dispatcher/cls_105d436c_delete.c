/* @k10d cls_105d436c_delete @ 0x104fc6c8
 * name: verified (structural evidence: stores vtable 0x105d436c to *this; heap_free(this) under (param_2 & 1))
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d436c (vtable 0x105d436c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d436c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104fc6da) overlaps instruction at (ram,0x104fc6d8)
    */

void cls_105d436c_delete(uint32_t *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105d436c/*ROM*/;
    if (param_1[1] != 0) {
      iVar1 = *(int *)param_1[1];
      (**(code **)(iVar1 + 0xc))((int)param_1[1] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[2] != 0) {
      iVar1 = *(int *)param_1[2];
      (**(code **)(iVar1 + 0xc))((int)param_1[2] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[3] != 0) {
      iVar1 = *(int *)param_1[3];
      (**(code **)(iVar1 + 0xc))((int)param_1[3] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[4] != 0) {
      iVar1 = *(int *)param_1[4];
      (**(code **)(iVar1 + 0xc))((int)param_1[4] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[5] != 0) {
      iVar1 = *(int *)param_1[5];
      (**(code **)(iVar1 + 0xc))((int)param_1[5] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[6] != 0) {
      iVar1 = *(int *)param_1[6];
      (**(code **)(iVar1 + 0xc))((int)param_1[6] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[7] != 0) {
      iVar1 = *(int *)param_1[7];
      (**(code **)(iVar1 + 0xc))((int)param_1[7] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[8] != 0) {
      iVar1 = *(int *)param_1[8];
      (**(code **)(iVar1 + 0xc))((int)param_1[8] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[9] != 0) {
      iVar1 = *(int *)param_1[9];
      (**(code **)(iVar1 + 0xc))((int)param_1[9] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[10] != 0) {
      iVar1 = *(int *)param_1[10];
      (**(code **)(iVar1 + 0xc))((int)param_1[10] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xb] != 0) {
      iVar1 = *(int *)param_1[0xb];
      (**(code **)(iVar1 + 0xc))((int)param_1[0xb] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xc] != 0) {
      iVar1 = *(int *)param_1[0xc];
      (**(code **)(iVar1 + 0xc))((int)param_1[0xc] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xd] != 0) {
      iVar1 = *(int *)param_1[0xd];
      (**(code **)(iVar1 + 0xc))((int)param_1[0xd] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xe] != 0) {
      iVar1 = *(int *)param_1[0xe];
      (**(code **)(iVar1 + 0xc))((int)param_1[0xe] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xf] != 0) {
      iVar1 = *(int *)param_1[0xf];
      (**(code **)(iVar1 + 0xc))((int)param_1[0xf] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x10] != 0) {
      iVar1 = *(int *)param_1[0x10];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x10] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x11] != 0) {
      iVar1 = *(int *)param_1[0x11];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x11] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x12] != 0) {
      iVar1 = *(int *)param_1[0x12];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x12] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x13] != 0) {
      iVar1 = *(int *)param_1[0x13];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x13] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x14] != 0) {
      iVar1 = *(int *)param_1[0x14];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x14] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x15] != 0) {
      iVar1 = *(int *)param_1[0x15];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x15] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x16] != 0) {
      iVar1 = *(int *)param_1[0x16];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x16] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x17] != 0) {
      iVar1 = *(int *)param_1[0x17];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x17] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x18] != 0) {
      iVar1 = *(int *)param_1[0x18];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x18] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x19] != 0) {
      iVar1 = *(int *)param_1[0x19];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x19] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1a] != 0) {
      iVar1 = *(int *)param_1[0x1a];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1a] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1b] != 0) {
      iVar1 = *(int *)param_1[0x1b];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1b] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1c] != 0) {
      iVar1 = *(int *)param_1[0x1c];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1c] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1d] != 0) {
      iVar1 = *(int *)param_1[0x1d];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1d] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1e] != 0) {
      iVar1 = *(int *)param_1[0x1e];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1e] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x1f] != 0) {
      iVar1 = *(int *)param_1[0x1f];
      (**(code **)(iVar1 + 0xc))((int)param_1[0x1f] + (int)*(short *)(iVar1 + 8),3);
    }
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
