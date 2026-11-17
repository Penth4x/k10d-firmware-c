/* @k10d sdhc_write_buffer_data @ 0x10449298
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_write_buffer_data(void *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  puVar1 = (uint *)sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
  param_3 = param_3 >> 2;
  iVar2 = sdhc_wait_int_status(param_1,0x10,500);
  if (iVar2 != 0) {
    if (((uint)param_2 & 3) == 0) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
      }
    }
    else {
      bVar3 = param_3 != 0;
      if (((uint)param_2 & 1) == 0) {
        while (bVar3) {
          param_3 = param_3 - 1;
          bVar3 = param_3 != 0;
          *puVar1 = (uint)(ushort)*param_2;
          param_2 = param_2 + 1;
        }
      }
      else {
        while (bVar3) {
          param_3 = param_3 - 1;
          bVar3 = param_3 != 0;
          *puVar1 = (uint)(byte)*param_2;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return 1;
}
