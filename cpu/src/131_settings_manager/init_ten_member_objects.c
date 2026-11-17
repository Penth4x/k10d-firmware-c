/* @k10d init_ten_member_objects @ 0x1045d6d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_ten_member_objects(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x48);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7320_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7994_new(piVar1);
  }
  *(int **)((int)param_1 + 8) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x58);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7818_new(piVar1);
  }
  *(int **)((int)param_1 + 0xc) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x48);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7b48_new(piVar1);
  }
  *(int **)((int)param_1 + 0x10) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x4c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a776c_new(piVar1);
  }
  *(int **)((int)param_1 + 0x14) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x58);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7a9c_new(piVar1);
  }
  *(int **)((int)param_1 + 0x18) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x33c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a6a14_new(piVar1);
  }
  *(int **)((int)param_1 + 0x1c) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0xe4);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7230_new(piVar1);
  }
  *(int **)((int)param_1 + 0x20) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a5cb4_new(piVar1);
  }
  *(int **)((int)param_1 + 0x24) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x48);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a7640_new(piVar1);
  }
  *(int **)((int)param_1 + 0x28) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}
