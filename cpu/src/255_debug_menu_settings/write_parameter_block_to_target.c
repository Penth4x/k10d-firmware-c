/* @k10d write_parameter_block_to_target @ 0x104eb9ee
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of clamped and raw values from a parameter structure to a target
 *   object via a series of setter calls.
 * summary:
 *   The function reads four short values from param_3, clamping each to 0, 1, or 2, and
 *   passes them to four distinct setter functions. It then reads four 16-bit values from
 *   arrays pointed to by param_3[8..11] (indexed by param_2*2) and passes them to four more
 *   setters. Finally, it writes a series of constant values (0, 0xfff, and either 0x20 or
 *   0xfff based on a flag) to additional setters. The target address for all setters is
 *   derived from *(int *)(param_1 + 8) + 0x10, indicating param_1 is a structure containing
 *   a base pointer. The specific hardware block or subsystem is not identifiable from the
 *   provided code or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_parameter_block_to_target(cls_105c2720 *param_1,int param_2,uint32_t *param_3)

{
  short sVar1;
  uint32_t r1_in;
  uint32_t uVar2;
  uint32_t caller_r10;
  int iVar3;
  uint32_t uStack_14;
  uint32_t uStack_10;
  
  sVar1 = *(short *)*param_3;
  if (sVar1 == 2) {
    r1_in = 2;
  }
  else if (sVar1 == 1) {
    r1_in = 1;
  }
  else if (sVar1 == 0) {
    r1_in = 0;
  }
  sVar1 = *(short *)param_3[1];
  if (sVar1 == 2) {
    uStack_10 = 2;
  }
  else if (sVar1 == 1) {
    uStack_10 = 1;
  }
  else if (sVar1 == 0) {
    uStack_10 = 0;
  }
  sVar1 = *(short *)param_3[2];
  if (sVar1 == 2) {
    uStack_14 = 2;
  }
  else if (sVar1 == 1) {
    uStack_14 = 1;
  }
  else if (sVar1 == 0) {
    uStack_14 = 0;
  }
  sVar1 = *(short *)param_3[3];
  if (sVar1 == 2) {
    caller_r10 = 2;
  }
  else if (sVar1 == 1) {
    caller_r10 = 1;
  }
  else if (sVar1 == 0) {
    caller_r10 = 0;
  }
  (*(code *)0x1044efaa/*ROM*/)(param_1->field_0x8 + 0x10,r1_in);
  (*(code *)0x1044efd0/*ROM*/)(param_1->field_0x8 + 0x10,uStack_10);
  (*(code *)0x1044eff6/*ROM*/)(param_1->field_0x8 + 0x10,uStack_14);
  (*(code *)0x1044f01a/*ROM*/)(param_1->field_0x8 + 0x10,caller_r10);
  iVar3 = param_2 * 2;
  (*(code *)0x1044f106/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[8] + iVar3));
  (*(code *)0x1044f116/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[9] + iVar3));
  (*(code *)0x1044f126/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[10] + iVar3));
  (*(code *)0x1044f136/*ROM*/)(param_1->field_0x8 + 0x10,*(uint16_t *)(param_3[0xb] + iVar3));
  (*(code *)0x1044f18e/*ROM*/)(param_1->field_0x8 + 0x10,0);
  (*(code *)0x1044f1b0/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
  (*(code *)0x1044f1c0/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
  (*(code *)0x1044f1d0/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
  (*(code *)0x1044f1e0/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
  iVar3 = param_1->field_0x8 + 0x10;
  if (*(char *)(param_3 + 0x11) == '\0') {
    (*(code *)0x1044f07e/*ROM*/)(iVar3,0x20);
    (*(code *)0x1044f08e/*ROM*/)(param_1->field_0x8 + 0x10,0x20);
    (*(code *)0x1044f09e/*ROM*/)(param_1->field_0x8 + 0x10,0x20);
    uVar2 = 0x20;
  }
  else {
    (*(code *)0x1044f07e/*ROM*/)(iVar3,0xfff);
    (*(code *)0x1044f08e/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
    (*(code *)0x1044f09e/*ROM*/)(param_1->field_0x8 + 0x10,0xfff);
    uVar2 = 0xfff;
  }
  (*(code *)0x1044f0ae/*ROM*/)(param_1->field_0x8 + 0x10,uVar2);
  return;
}
