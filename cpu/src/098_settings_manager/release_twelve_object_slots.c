/* @k10d release_twelve_object_slots @ 0x10421fee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 098_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_twelve_object_slots(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 4) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x30) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x34) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x34) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x38) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x38) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x40) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x40) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x44) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x44) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
    (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x4c) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x4c) = 0;
  return;
}
