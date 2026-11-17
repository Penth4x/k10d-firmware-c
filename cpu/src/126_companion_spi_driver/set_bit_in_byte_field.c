/* @k10d set_bit_in_byte_field @ 0x1043eef2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_in_byte_field(void *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)*(uint32_t *)((int)param_1 + 0x4c);
  bVar2 = (byte)(3 << (bVar1 & 0xf));
  call_helper_on_field_0x58_1043ef36(param_1);
  **(byte **)((int)param_1 + 0x30) =
       **(byte **)((int)param_1 + 0x30) & (bVar2 ^ 0xff) |
       (byte)((param_2 & 3) << (bVar1 & 0xf)) & bVar2;
  call_helper_on_field_0x58_1043ef48(param_1);
  return;
}
