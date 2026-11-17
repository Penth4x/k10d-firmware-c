/* @k10d query_and_report_state @ 0x104a48b0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a status value from an object and reports a derived state code to a handler.
 * summary:
 *   The function checks if the field at offset 0xc of the first argument is zero. If so, it
 *   calls settings_getter with the value at offset 0x44 and the constant 0x53, mapping the
 *   result (0, 1, or 2) to state codes 2, 1, or 0 respectively. If the field at 0xc is non-
 *   zero, it sets the state code to 4. Finally, it calls write_word_to_dynamic_array with
 *   the second argument, 0, and the determined state code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_report_state(int param_1,int param_2)

{
  char cVar1;
  uint16_t uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x53);
    if (cVar1 == '\0') {
      uVar2 = 2;
    }
    else if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else if (cVar1 == '\x02') {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 4;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
