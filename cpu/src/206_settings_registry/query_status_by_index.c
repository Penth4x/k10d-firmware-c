/* @k10d query_status_by_index @ 0x104a6ea0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a status value from an object at a computed index and returns its negated
 *   result.
 * summary:
 *   The function reads a value from the object pointed to by param_1 at offset 0x44 using
 *   settings_getter with an initial index of 0xd. It then uses a switch statement to map
 *   this initial value to a new index (ranging from 0x12 to 0x30). If the initial value is
 *   0, it performs additional checks with indices 0xbb and 0x5b; if specific conditions are
 *   met, it returns 0. Otherwise, it queries the object again with the mapped index and
 *   passes the result to compute_bitwise_not_offset, returning the negated result of that
 *   call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_status_by_index(int param_1)

{
  bool bVar1;
  uint8_t uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = settings_getter(*(int *)(param_1 + 0x44),0xd);
  bVar1 = false;
  switch(uVar2) {
  case 0:
    cVar3 = settings_getter(*(int *)(param_1 + 0x44),0xbb);
    iVar4 = 0x12;
    if ((cVar3 == '\0') && (cVar3 = settings_getter(*(int *)(param_1 + 0x44),0x5b), cVar3 != '\x01')
       ) {
      bVar1 = true;
    }
    break;
  case 1:
    iVar4 = 0x14;
    break;
  case 2:
    iVar4 = 0x16;
    break;
  case 3:
    iVar4 = 0x18;
    break;
  case 4:
    iVar4 = 0x1a;
    break;
  case 5:
    iVar4 = 0x1c;
    break;
  case 6:
    iVar4 = 0x1e;
    break;
  case 7:
    iVar4 = 0x20;
    break;
  case 8:
    iVar4 = 0x22;
    break;
  case 9:
    iVar4 = 0x24;
    break;
  case 10:
    iVar4 = 0x26;
    break;
  case 0xb:
    iVar4 = 0x28;
    break;
  case 0xc:
    iVar4 = 0x2a;
    break;
  case 0xd:
    iVar4 = 0x2d;
    break;
  case 0xe:
    iVar4 = 0x30;
  }
  if (bVar1) {
    iVar4 = 0;
  }
  else {
    uVar2 = settings_getter(*(int *)(param_1 + 0x44),iVar4);
    cVar3 = compute_bitwise_not_offset(param_1,uVar2);
    iVar4 = (int)-cVar3;
  }
  return iVar4;
}
