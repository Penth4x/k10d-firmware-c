/* @k10d query_object_state_and_report_104a4a3a @ 0x104a4a3a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object to get a state code and forwards it to a
 *   reporting function.
 * summary:
 *   The function retrieves a pointer from param_1 at offset 0x10 and performs a virtual
 *   call (slot 2) with argument 8. The return value is mapped to a specific code (3, 0x10,
 *   or 0x11) and passed to write_word_to_dynamic_array along with param_2 and 0. The
 *   specific meaning of the state codes and the reporting function is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_object_state_and_report_104a4a3a(int param_1,int param_2)

{
  uint16_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = **(int **)(param_1 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[2].adj,8);
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else if (iVar2 == 1) {
    uVar1 = 0x10;
  }
  else if (iVar2 == 2) {
    uVar1 = 0x11;
  }
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}
