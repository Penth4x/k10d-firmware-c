/* @k10d set_flag_and_count_from_byte @ 0x105126e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_count_from_byte(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = settings_getter(param_1 + 0x2ac,0x60);
  if (cVar1 != '\0') {
    *(uint8_t *)(param_1 + 0x2d) = 1;
    *(uint16_t *)(param_1 + 0x690) = 0;
    bVar2 = settings_getter(param_1 + 0x2ac,0x60);
    *(ushort *)(param_1 + 0x692) = bVar2 + 1;
  }
  return;
}
