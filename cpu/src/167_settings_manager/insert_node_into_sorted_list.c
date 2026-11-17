/* @k10d insert_node_into_sorted_list @ 0x1047a2d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047a306) overlaps instruction at (ram,0x1047a304)
    */

void insert_node_into_sorted_list(int param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0xea4c);
  if (puVar3 == (ushort *)0x0) {
    puVar2 = (ushort *)0x0;
  }
  else {
    if (puVar3 == (ushort *)0x0) {
      return;
    }
    do {
      if ((*param_2 < *puVar3) || ((*param_2 == *puVar3 && (param_2[1] < puVar3[1])))) {
        link_list_node(param_1,*(void **)(puVar3 + 0x1a),param_2);
        puVar2 = param_2;
        param_2 = puVar3;
        break;
      }
      puVar1 = puVar3 + 0x1c;
      puVar2 = puVar3;
      puVar3 = *(ushort **)puVar1;
    } while (*(ushort **)puVar1 != (ushort *)0x0);
  }
  link_list_node(param_1,puVar2,param_2);
  return;
}
