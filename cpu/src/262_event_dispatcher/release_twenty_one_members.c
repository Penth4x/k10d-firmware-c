/* @k10d release_twenty_one_members @ 0x104fbd66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Iterates through 21 pointer fields in a 0x80-byte object, invoking virtual slots 2 and
 *   1 on each non-null member, then nulling the field.
 * summary:
 *   The function acts as a destructor or cleanup routine for a class containing 21 embedded
 *   objects. For each field offset (from 0x4 to 0x7c), it checks if the pointer is non-
 *   null, calls virtual slot 2 (offset 0x24) and virtual slot 1 (offset 0xc) on the target
 *   object, and sets the field to zero. It also calls get_or_create_sram_object_104ecffc
 *   once to obtain a pointer and invokes virtual slot 2 on it. The pattern of calling two
 *   virtual methods before nulling suggests a standard C++ member destruction sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_twenty_one_members(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = **(int **)(param_1 + 0x7c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x7c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = **(int **)(param_1 + 0x7c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x7c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar2 = **(int **)(param_1 + 0x68);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x68) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar2 = **(int **)(param_1 + 0x68);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x68) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = **(int **)(param_1 + 4);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = **(int **)(param_1 + 4);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = **(int **)(param_1 + 0xc);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = **(int **)(param_1 + 0xc);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = **(int **)(param_1 + 0x3c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x3c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar2 = **(int **)(param_1 + 0x3c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x3c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = **(int **)(param_1 + 0x20);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x20) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = **(int **)(param_1 + 0x20);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x20) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = **(int **)(param_1 + 0x4c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = **(int **)(param_1 + 0x4c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = **(int **)(param_1 + 0x18);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = **(int **)(param_1 + 0x18);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar2 = **(int **)(param_1 + 100);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 100) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 100) != 0) {
    iVar2 = **(int **)(param_1 + 100);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 100) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = **(int **)(param_1 + 0x34);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x34) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = **(int **)(param_1 + 0x34);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x34) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar2 = **(int **)(param_1 + 0x44);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x44) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar2 = **(int **)(param_1 + 0x44);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x44) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x44) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = **(int **)(param_1 + 0x50);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = **(int **)(param_1 + 0x50);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar2 = **(int **)(param_1 + 0x54);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x54) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar2 = **(int **)(param_1 + 0x54);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x54) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x54) = 0;
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = **(int **)(param_1 + 8);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = **(int **)(param_1 + 8);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = **(int **)(param_1 + 0x1c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = **(int **)(param_1 + 0x1c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = **(int **)(param_1 + 0x24);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x24) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = **(int **)(param_1 + 0x24);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x24) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = **(int **)(param_1 + 0x30);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = **(int **)(param_1 + 0x30);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar2 = **(int **)(param_1 + 0x6c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x6c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar2 = **(int **)(param_1 + 0x6c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x6c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = **(int **)(param_1 + 0x38);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = **(int **)(param_1 + 0x38);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x38) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = **(int **)(param_1 + 0x40);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x40) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = **(int **)(param_1 + 0x40);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x40) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = **(int **)(param_1 + 0x5c);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x5c) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = **(int **)(param_1 + 0x5c);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x5c) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = **(int **)(param_1 + 0x60);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = **(int **)(param_1 + 0x60);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = **(int **)(param_1 + 0x58);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x58) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = **(int **)(param_1 + 0x58);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x58) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = **(int **)(param_1 + 0x78);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = **(int **)(param_1 + 0x78);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = **(int **)(param_1 + 0x74);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x74) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = **(int **)(param_1 + 0x74);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x74) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x74) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = **(int **)(param_1 + 0x28);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = **(int **)(param_1 + 0x28);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar2 = **(int **)(param_1 + 0x48);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar2 = **(int **)(param_1 + 0x48);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x20));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)(param_1 + 0x14) = 0;
  return;
}
