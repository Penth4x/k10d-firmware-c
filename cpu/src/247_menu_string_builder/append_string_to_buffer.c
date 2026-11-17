/* @k10d append_string_to_buffer @ 0x104de0ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_string_to_buffer(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != (char *)0x0) {
    uVar3 = count_string_bytes(param_2);
    uVar2 = 0;
    if (uVar3 != 0) {
      iVar1 = param_1[1];
      do {
        if (iVar1 == param_1[3]) {
          return;
        }
        *(char *)(*param_1 + iVar1) = param_2[uVar2];
        uVar2 = uVar2 + 1;
        iVar1 = param_1[1] + 1;
        param_1[1] = iVar1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}
