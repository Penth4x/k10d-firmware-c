/* @k10d dispatch_mode_specific_handler_104a5c2c @ 0x104a5c2c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects and executes a handler based on a mode value retrieved from an object field.
 * summary:
 *   Reads a mode identifier from offset 0x44 of the object in param_1 via settings_getter.
 *   Maps specific mode values (0x0c, 0x0d, 0x0e) to indices (0x2b, 0x2e, 0x31) to look up a
 *   function pointer from a table at 0x105b64a0. Calls the resolved handler with the object
 *   and passes the result to write_word_to_dynamic_array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_specific_handler_104a5c2c(int param_1,int param_2)

{
  char cVar2;
  uint16_t uVar1;
  int iVar3;
  byte bVar4;
  
  cVar2 = settings_getter(*(int *)(param_1 + 0x44),0xd);
  iVar3 = -1;
  if (cVar2 == '\f') {
    iVar3 = 0x2b;
  }
  else if (cVar2 == '\r') {
    iVar3 = 0x2e;
  }
  else {
    if (cVar2 != '\x0e') {
      bVar4 = 1;
      goto LAB_104a5c62;
    }
    iVar3 = 0x31;
  }
  bVar4 = 0;
LAB_104a5c62:
  uVar1 = 0;
  if (!(bool)(bVar4 | iVar3 == 0)) {
    bVar4 = settings_getter(*(int *)(param_1 + 0x44),iVar3);
    uVar1 = (*(code *)0x104a7076/*ROM*/)(param_1,*(uint16_t *)((uint)bVar4 * 2 + 0x105b64a0/*ROM*/));
  }
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}
