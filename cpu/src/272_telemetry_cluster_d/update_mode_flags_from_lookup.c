/* @k10d update_mode_flags_from_lookup @ 0x10511c54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_mode_flags_from_lookup(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = settings_getter(param_1 + 0x2ac,0x51);
  if (cVar1 == '\0') {
    iVar2 = 0x2a;
  }
  else if (cVar1 == '\x01') {
    iVar2 = 0x2b;
  }
  else {
    if (cVar1 != '\x02') goto LAB_10511c9a;
    *(uint8_t *)(param_1 + 0x2a) = 1;
    iVar2 = 0x2b;
  }
  *(uint8_t *)(iVar2 + param_1) = 1;
LAB_10511c9a:
  if (*(char *)(param_1 + 0x2b) != '\0') {
    cVar1 = settings_getter(param_1 + 0x2ac,0x54);
    if (cVar1 == '\0') {
      *(uint8_t *)(param_1 + 0x28) = 1;
      *(uint8_t *)(param_1 + 0x694) = 0;
    }
    else {
      *(uint8_t *)(param_1 + 0x28) = 0;
      *(uint8_t *)(param_1 + 0x694) = 1;
    }
  }
  *(uint8_t *)(param_1 + 0x6a4) = 1;
  *(uint8_t *)(param_1 + 0x6a5) = 0;
  return;
}
