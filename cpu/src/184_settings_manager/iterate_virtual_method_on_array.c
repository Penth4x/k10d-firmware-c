/* @k10d iterate_virtual_method_on_array @ 0x1048953e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object for each of 35 entries in a fixed memory array,
 *   returning early if any call is non-zero.
 * summary:
 *   The function loops 35 times (0x8c / 4), reading a 32-bit value from the global array at
 *   0x105b379c. For each entry, it invokes virtual slot 4 (offset 0x24) of the object
 *   pointed to by param_2, passing the array entry as the second argument. It returns 1
 *   immediately if the virtual call returns non-zero, otherwise it returns 0 after the loop
 *   completes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_virtual_method_on_array(uint32_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (((vtbl_entry*)(*param_2))[4].fn)
                      ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,
                       *(uint32_t *)(iVar2 + 0x105b379c/*ROM*/));
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x8c);
  return 0;
}
