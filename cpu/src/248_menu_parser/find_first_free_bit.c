/* @k10d find_first_free_bit @ 0x104decc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_first_free_bit(void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  if (*(int *)((int)param_1 + 0x44) != 0) {
    do {
      if ((*(uint *)((int)param_1 + 0x48) & uVar1) == 0) {
        *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | uVar1;
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 << 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x44));
  }
  return uVar1;
}
