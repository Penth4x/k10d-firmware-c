/* @k10d iterate_range_and_call_match @ 0x1049577e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a pointer range, calls a helper when high 16 bits match, then calls a second
 *   helper with the range start.
 * summary:
 *   The function reads two pointers from offsets 4 and 8 of param_1 to define an iteration
 *   range. It loops through the range, comparing the upper 16 bits of each element with the
 *   upper 16 bits of *param_2. On a match, it calls console_printf with a fixed global
 *   address and the remaining parameters. After the loop, it calls
 *   forward_struct_and_second_field with the range start pointer and a pointer to param_2.
 *   The specific camera subsystem is not identifiable from the provided pseudocode and
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_range_and_call_match(void *param_1,uint *param_2,void *param_3,void *param_4)

{
  uint *puVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint *puStack_c;
  
  puVar2 = *(uint32_t **)((int)param_1 + 4);
  puVar1 = param_2;
  if (puVar2 != *(uint32_t **)((int)param_1 + 8)) {
    do {
      if ((*(uint *)*puVar2 & 0xffff0000) == (*param_2 & 0xffff0000)) {
        console_printf(&DAT_105b50e0/*ROM*/,puVar1,param_3,param_4);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(uint32_t **)((int)param_1 + 8));
  }
  puStack_c = param_2;
  forward_struct_and_second_field((int *)((int)param_1 + 4),&puStack_c);
  return;
}
