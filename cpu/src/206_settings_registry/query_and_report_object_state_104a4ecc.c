/* @k10d query_and_report_object_state_104a4ecc @ 0x104a4ecc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries an object's state via virtual calls and reports the result to a handler.
 * summary:
 *   The function retrieves a sub-object from param_1 at offset 0x10 and invokes virtual
 *   slot 3 (offset 0x1c) with argument 0xf. If the result is non-zero, it invokes virtual
 *   slot 2 (offset 0x14) with argument 0x11 and maps the return value to a small integer
 *   code via a switch statement. It then calls write_word_to_dynamic_array with param_2, 0,
 *   and the mapped code. If a field at param_2+4 equals 2, it calls
 *   query_two_byte_status_flags and passes the result to write_word_to_dynamic_array with
 *   index 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_report_object_state_104a4ecc(int param_1,int param_2)

{
  uint32_t uVar1;
  uint16_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x10);
  iVar3 = (**(code **)(iVar3 + 0x1c))
                    ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar3 + 0x18),0xf);
  if (iVar3 != 0) {
    iVar3 = **(int **)(param_1 + 0x10);
    uVar1 = (**(code **)(iVar3 + 0x14))
                      ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar3 + 0x10),0x11);
    switch(uVar1) {
    case 0:
      uVar2 = 0;
      break;
    case 3:
      uVar2 = 1;
      break;
    case 4:
      uVar2 = 10;
      break;
    case 5:
      uVar2 = 2;
      break;
    case 8:
      uVar2 = 3;
      break;
    case 0xb:
      uVar2 = 4;
      break;
    case 0xc:
      uVar2 = 0xb;
      break;
    case 0xd:
      uVar2 = 5;
      break;
    case 0x10:
      uVar2 = 6;
    }
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  if (*(int *)(param_2 + 4) == 2) {
    uVar2 = query_two_byte_status_flags(param_1);
    write_word_to_dynamic_array(param_2,1,uVar2);
  }
  return;
}
