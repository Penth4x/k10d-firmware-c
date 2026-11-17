/* @k10d cls_1059d568_delete @ 0x10422554
 * name: verified (structural evidence: stores vtable 0x1059d568 to *this; heap_free(this) under (param_2 & 1))
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059d568 (vtable 0x1059d568): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059d568 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10422566) overlaps instruction at (ram,0x10422564)
    */

void cls_1059d568_delete(uint32_t *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_1059d568/*ROM*/;
    if (param_1[1] != 0) {
      iVar1 = *(int *)(param_1[1] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[1] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[2] != 0) {
      iVar1 = *(int *)(param_1[2] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[2] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[3] != 0) {
      iVar1 = *(int *)(param_1[3] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[3] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[4] != 0) {
      iVar1 = *(int *)(param_1[4] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[4] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[5] != 0) {
      iVar1 = *(int *)(param_1[5] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[5] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[6] != 0) {
      iVar1 = *(int *)(param_1[6] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[6] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[7] != 0) {
      iVar1 = *(int *)(param_1[7] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[7] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[8] != 0) {
      iVar1 = *(int *)(param_1[8] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[8] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[9] != 0) {
      iVar1 = *(int *)(param_1[9] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[9] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[10] != 0) {
      iVar1 = *(int *)(param_1[10] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[10] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xb] != 0) {
      iVar1 = *(int *)(param_1[0xb] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0xb] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xc] != 0) {
      iVar1 = *(int *)(param_1[0xc] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0xc] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xd] != 0) {
      iVar1 = *(int *)(param_1[0xd] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0xd] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xe] != 0) {
      iVar1 = *(int *)(param_1[0xe] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0xe] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0xf] != 0) {
      iVar1 = *(int *)(param_1[0xf] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0xf] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x10] != 0) {
      iVar1 = *(int *)(param_1[0x10] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0x10] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x11] != 0) {
      iVar1 = *(int *)(param_1[0x11] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0x11] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x12] != 0) {
      iVar1 = *(int *)(param_1[0x12] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0x12] + (int)*(short *)(iVar1 + 8),3);
    }
    if (param_1[0x13] != 0) {
      iVar1 = *(int *)(param_1[0x13] + 4);
      (**(code **)(iVar1 + 0xc))(param_1[0x13] + (int)*(short *)(iVar1 + 8),3);
    }
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
