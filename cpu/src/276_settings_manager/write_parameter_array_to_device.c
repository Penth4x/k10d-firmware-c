/* @k10d write_parameter_array_to_device @ 0x1051c94e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes an array of 32-bit parameters from a selected table to a device object.
 * summary:
 *   Calls settings_getter with a value from param_1+0x14 and constant 0xc2 to select
 *   between two constant tables at 0x105d6b7c and 0x105d6b8c. Iterates through the count
 *   stored at param_2+4, calling write_to_dynamic_array to write each 32-bit value from the
 *   selected table into param_2. The role of the specific device or parameter set is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_parameter_array_to_device(int param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x14),0xc2);
  if (cVar1 == '\0') {
    iVar4 = 0x105d6b7c/*ROM*/;
  }
  else {
    iVar4 = 0x105d6b8c/*ROM*/;
  }
  uVar2 = 0;
  if ((*(uint *)((int)param_2 + 4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      write_to_dynamic_array((int)param_2,uVar2,*(uint32_t *)(iVar4 + iVar3));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)(*(int *)((int)param_2 + 4) << 1));
  }
  return;
}
