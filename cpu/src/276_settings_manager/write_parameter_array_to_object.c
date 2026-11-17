/* @k10d write_parameter_array_to_object @ 0x1051c9fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_parameter_array_to_object(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x14),0xc2);
  if (cVar1 == '\0') {
    iVar4 = 0x105d6bfc/*ROM*/;
  }
  else {
    iVar4 = 0x105d6c14/*ROM*/;
  }
  uVar2 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      write_to_dynamic_array(param_2,uVar2,*(uint32_t *)(iVar4 + iVar3));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
