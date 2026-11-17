/* @k10d reset_object_subsystem_handles @ 0x105030be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Resets multiple handle fields within a struct by calling initialization and
 *   configuration routines on each.
 * summary:
 *   The function takes a struct pointer and a flags word. It iterates through fields at
 *   offsets 0x18 through 0x40, calling specific reset (0x10454290/0x1045460e),
 *   configuration (0x10454650/0x104546c0), and state-setting
 *   (0x104567be/0x10456d0a/0x10456cc8) functions on each handle. The flags (bits 0, 2, 5,
 *   3) determine the arguments passed to these configuration calls, effectively
 *   reinitializing the subsystem components stored in the struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_subsystem_handles(int param_1,uint param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint8_t auStack_24 [4];
  
  puVar5 = auStack_24;
  bVar6 = (param_2 & 1) != 0;
  bVar7 = (param_2 & 0x20) != 0;
  bVar8 = (param_2 & 4) != 0;
  (*(code *)0x10454290/*ROM*/)(*(uint32_t *)(param_1 + 0x18),0);
  (*(code *)0x1045460e/*ROM*/)(*(uint32_t *)(param_1 + 0x1c),0);
  (*(code *)0x1045460e/*ROM*/)(*(uint32_t *)(param_1 + 0x20),0);
  (*(code *)0x1045460e/*ROM*/)(*(uint32_t *)(param_1 + 0x24),0);
  (*(code *)0x10454650/*ROM*/)(*(uint32_t *)(param_1 + 0x1c),0);
  (*(code *)0x10454650/*ROM*/)(*(uint32_t *)(param_1 + 0x20),0);
  (*(code *)0x10454650/*ROM*/)(*(uint32_t *)(param_1 + 0x24),0);
  uVar1 = *(uint32_t *)(param_1 + 0x1c);
  puVar5[3] = 0;
  (*(code *)0x104546c0/*ROM*/)(uVar1,0,0,0);
  uVar1 = *(uint32_t *)(param_1 + 0x20);
  puVar5[3] = 0;
  (*(code *)0x104546c0/*ROM*/)(uVar1,bVar6,bVar7,0);
  uVar1 = *(uint32_t *)(param_1 + 0x24);
  puVar5[3] = 0;
  (*(code *)0x104546c0/*ROM*/)(uVar1,bVar6,bVar7,0);
  if (!bVar8) {
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x28),bVar6,0);
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x2c),bVar6,0);
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x30),bVar6,0);
  }
  else {
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x28),0);
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x2c),0,0);
    (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x30),0,0);
  }
  (*(code *)0x104567be/*ROM*/)(*(uint32_t *)(param_1 + 0x34),!bVar8 && bVar6,0);
  if (bVar8) {
    (*(code *)0x10456d0a/*ROM*/)();
    (*(code *)0x10456d0a/*ROM*/)(*(uint32_t *)(param_1 + 0x3c),0);
    (*(code *)0x10456d0a/*ROM*/)(*(uint32_t *)(param_1 + 0x40),0);
    iVar2 = (*(code *)0x10456d36/*ROM*/)(*(uint32_t *)(param_1 + 0x38));
    iVar3 = (*(code *)0x10456d36/*ROM*/)(*(uint32_t *)(param_1 + 0x3c));
    iVar4 = (*(code *)0x10456d36/*ROM*/)(*(uint32_t *)(param_1 + 0x40));
    bVar6 = iVar4 == 0 && (iVar3 == 0 && (iVar2 == 0 && bVar8));
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x38),0);
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x3c),bVar6);
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x40),bVar6);
  }
  else {
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x38),0);
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x3c),0);
    (*(code *)0x10456cc8/*ROM*/)(*(uint32_t *)(param_1 + 0x40),0);
    bVar6 = false;
    if ((param_2 & 8) != 0) {
      iVar2 = (*(code *)0x10456cf4/*ROM*/)(*(uint32_t *)(param_1 + 0x38));
      iVar3 = (*(code *)0x10456cf4/*ROM*/)(*(uint32_t *)(param_1 + 0x3c));
      iVar4 = (*(code *)0x10456cf4/*ROM*/)(*(uint32_t *)(param_1 + 0x40));
      bVar6 = iVar4 == 0 && (iVar3 == 0 && iVar2 == 0);
    }
    (*(code *)0x10456d0a/*ROM*/)(*(uint32_t *)(param_1 + 0x38),0);
    (*(code *)0x10456d0a/*ROM*/)(*(uint32_t *)(param_1 + 0x3c),bVar6);
    (*(code *)0x10456d0a/*ROM*/)(*(uint32_t *)(param_1 + 0x40),bVar6);
  }
  return;
}
