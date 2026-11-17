/* @k10d check_and_get_value_if_ready @ 0x1036883a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object, checks a status flag, and returns a computed value if the
 *   status is ready.
 * summary:
 *   The function operates on a sub-object located at offset 0x1c of the input parameter. It
 *   calls initialization routines (set_second_byte_of_struct and a function pointer at
 *   0x1051e8d0) on this sub-object. It then calls allocate_and_init_buffer_1036bd76 to
 *   check a status; if the status is 1, it checks a flag via
 *   read_byte_at_offset_four_1051e91e. If the flag is non-zero, it returns the result of
 *   process_exposure_sequence(param_1); otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_get_value_if_ready(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  char cVar3;
  void *pvVar4;
  
  pvVar4 = (void *)((int)param_1 + 0x1c);
  set_second_byte_of_struct((int)pvVar4,6);
  (*(code *)0x1051e8d0/*ROM*/)(pvVar4,2,3);
  iVar1 = allocate_and_init_buffer_1036bd76(param_1,2,pvVar4);
  if (iVar1 == 1) {
    cVar3 = read_byte_at_offset_four_1051e91e((int)pvVar4);
    if (cVar3 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = process_exposure_sequence(param_1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
