/* @k10d dispatch_by_mode_field_1053dc22 @ 0x1053dc22
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Dispatches to one of three handler functions based on the value of a mode field in the
 *   object.
 * summary:
 *   The function reads an integer from offset 0x48 of the object pointed to by param_1. It
 *   first calls fill_byte_array with a pointer from offset 0x68+0x1c and arguments 0, 0x50.
 *   It then branches on the mode field: if 4, it calls the function at 0x1053cc46; if 2, it
 *   calls 0x1053c070; if 1, it calls 0x1053b832. In all cases, the called function receives
 *   param_1 and the pointer from offset 0x68. If the mode field is any other value, it
 *   returns 0xfffffcdf (-513).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_mode_field_1053dc22(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x68);
  fill_byte_array(*(void **)(iVar3 + 0x1c),0,0x50);
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 4) {
    uVar1 = (*(code *)0x1053cc46/*ROM*/)(param_1,iVar3);
  }
  else if (iVar2 == 2) {
    uVar1 = (*(code *)0x1053c070/*ROM*/)(param_1,iVar3);
  }
  else if (iVar2 == 1) {
    uVar1 = (*(code *)0x1053b832/*ROM*/)(param_1,iVar3);
  }
  else {
    uVar1 = 0xfffffcdf;
  }
  return uVar1;
}
