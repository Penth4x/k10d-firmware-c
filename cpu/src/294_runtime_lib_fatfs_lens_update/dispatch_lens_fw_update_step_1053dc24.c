/* @k10d dispatch_lens_fw_update_step_1053dc24 @ 0x1053dc24
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Dispatches a lens firmware update step based on a state field, after clearing a
 *   0x50-byte buffer.
 * summary:
 *   Reads a pointer from offset 0x68 of the input object and calls fill_byte_array to zero
 *   0x50 bytes at offset 0x1c of that sub-object. Then reads a state value from offset 0x48
 *   and branches to one of three handler functions (0x1053cc46, 0x1053c070, 0x1053b832) for
 *   states 4, 2, or 1 respectively, passing the original object and the sub-object pointer.
 *   Returns 0xfffffcdf (-513) if the state is unrecognized. The module context indicates
 *   this is part of the lens CPU firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_lens_fw_update_step_1053dc24(int param_1)

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
