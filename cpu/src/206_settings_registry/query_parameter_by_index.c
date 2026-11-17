/* @k10d query_parameter_by_index @ 0x104a6f52
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a parameter value from an object via settings_getter and passes it to
 *   compute_bitwise_not_offset.
 * summary:
 *   The function calls settings_getter with an object pointer (param_1 + 0x44) and a key
 *   (0xd) to determine a case. It then selects a specific sub-key (ranging from 0x11 to
 *   0x2f) based on that result, with special handling for case 0 that checks additional
 *   keys (0xbb, 0x5b). Finally, it reads the value for the selected sub-key using
 *   settings_getter and passes it to compute_bitwise_not_offset, returning the result. The
 *   role of settings_getter and compute_bitwise_not_offset is unknown, preventing specific
 *   subsystem identification.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_parameter_by_index(int param_1)

{
  bool bVar1;
  uint8_t uVar3;
  char cVar4;
  uint32_t uVar2;
  int iVar5;
  
  iVar5 = 0;
  uVar3 = settings_getter(*(int *)(param_1 + 0x44),0xd);
  bVar1 = false;
  switch(uVar3) {
  case 0:
    cVar4 = settings_getter(*(int *)(param_1 + 0x44),0xbb);
    iVar5 = 0x11;
    if ((cVar4 == '\0') && (cVar4 = settings_getter(*(int *)(param_1 + 0x44),0x5b), cVar4 != '\x01')
       ) {
      bVar1 = true;
    }
    break;
  case 1:
    iVar5 = 0x13;
    break;
  case 2:
    iVar5 = 0x15;
    break;
  case 3:
    iVar5 = 0x17;
    break;
  case 4:
    iVar5 = 0x19;
    break;
  case 5:
    iVar5 = 0x1b;
    break;
  case 6:
    iVar5 = 0x1d;
    break;
  case 7:
    iVar5 = 0x1f;
    break;
  case 8:
    iVar5 = 0x21;
    break;
  case 9:
    iVar5 = 0x23;
    break;
  case 10:
    iVar5 = 0x25;
    break;
  case 0xb:
    iVar5 = 0x27;
    break;
  case 0xc:
    iVar5 = 0x29;
    break;
  case 0xd:
    iVar5 = 0x2c;
    break;
  case 0xe:
    iVar5 = 0x2f;
  }
  uVar2 = 0;
  if (!bVar1) {
    uVar3 = settings_getter(*(int *)(param_1 + 0x44),iVar5);
    uVar2 = compute_bitwise_not_offset(param_1,uVar3);
  }
  return uVar2;
}
