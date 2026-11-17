/* @k10d query_two_byte_status_flags @ 0x104a6a72
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two consecutive status bytes from a device and returns a packed 16-bit code.
 * summary:
 *   The function calls settings_getter twice with offsets 0x5b and 0x5c (or 0x5d-0x5f) from
 *   a pointer stored at param_1+0x44. It interprets the returned byte values to set two
 *   local variables (iVar4 and uVar3) and returns them packed as (iVar4 << 8) | uVar3. The
 *   specific meaning of the status bytes and the device at param_1+0x44 is not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_two_byte_status_flags(int param_1)

{
  char cVar1;
  uint8_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar3 = 0;
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x5b);
  if (cVar1 != '\x01') {
    cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x5b);
    iVar5 = -1;
    if (cVar1 == '\0') {
      iVar4 = 0;
LAB_104a6afe:
      if (iVar5 < 1) goto switchD_104a6aaa_default;
    }
    else {
      if (cVar1 == '\x02') {
        iVar4 = 4;
        iVar5 = 0x5d;
        goto LAB_104a6afe;
      }
      if (cVar1 == '\x03') {
        iVar4 = 3;
        iVar5 = 0x5e;
        goto LAB_104a6afe;
      }
      if (cVar1 != '\x04') goto LAB_104a6afe;
      iVar4 = 5;
      iVar5 = 0x5f;
    }
    cVar1 = settings_getter(*(int *)(param_1 + 0x44),iVar5);
    if (cVar1 == '\0') goto LAB_104a6b1e;
    if (cVar1 == '\x01') goto LAB_104a6b22;
    if (cVar1 != '\x02') {
      uVar3 = 0;
      goto switchD_104a6aaa_default;
    }
    goto LAB_104a6b26;
  }
  uVar2 = settings_getter(*(int *)(param_1 + 0x44),0x5c);
  switch(uVar2) {
  case 0:
    iVar4 = 2;
    break;
  case 1:
    iVar4 = 2;
    goto LAB_104a6b22;
  case 2:
    iVar4 = 2;
    goto LAB_104a6b1e;
  case 3:
    iVar4 = 1;
    break;
  case 4:
    iVar4 = 1;
LAB_104a6b22:
    uVar3 = 2;
    goto switchD_104a6aaa_default;
  case 5:
    iVar4 = 1;
LAB_104a6b1e:
    uVar3 = 1;
  default:
    goto switchD_104a6aaa_default;
  }
LAB_104a6b26:
  uVar3 = 3;
switchD_104a6aaa_default:
  return iVar4 << 8 | uVar3;
}
