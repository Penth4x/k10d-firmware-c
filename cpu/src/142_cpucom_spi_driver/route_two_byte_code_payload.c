/* @k10d route_two_byte_code_payload @ 0x104653d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Routes a payload to a handler when a two-byte code field matches 0x46 or 0x48.
 * summary:
 *   Reads a code from param_2 via cpucom_resp_get_byte0 and checks it against 0x46 or 0x48.
 *   On match, it fetches a payload pointer (get_cpucom_msg_data_ptr_104655aa) and length
 *   (get_cpucom_msg_data_ptr_104655b6), then iterates the payload bytes in groups of three,
 *   calling console_printf with rodata addresses 0x105a7cb4, 0x105a7cc4, and 0x105a7ccc
 *   along with param_3 and param_4. The function acts as a conditional dispatcher for
 *   specific response codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void route_two_byte_code_payload(uint32_t param_1,uint8_t *param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = cpucom_resp_get_byte0(param_2);
  if ((iVar1 == 0x46) || (iVar1 = cpucom_resp_get_byte0(param_2), iVar1 == 0x48)) {
    iVar2 = get_cpucom_msg_data_ptr_104655aa(param_2);
    pvVar3 = (void *)cpucom_resp_get_byte0(param_2);
    iVar1 = get_cpucom_msg_data_ptr_104655b6(param_2);
    console_printf((void *)0x105a7cb4/*ROM*/,pvVar3,param_3,param_4);
    iVar4 = 0;
    if (0 < iVar1) {
      iVar1 = iVar1 + -3;
      if (2 < iVar1) {
        do {
          console_printf((void *)0x105a7cc4/*ROM*/,(void *)(uint)*(byte *)(iVar2 + iVar4),param_3,param_4);
          console_printf((void *)0x105a7cc4/*ROM*/,(void *)(uint)*(byte *)(iVar2 + iVar4 + 1),param_3,param_4
                      );
          pvVar3 = (void *)(uint)*(byte *)(iVar2 + iVar4 + 2);
          console_printf((void *)0x105a7cc4/*ROM*/,pvVar3,param_3,param_4);
          iVar1 = iVar1 + -3;
          iVar4 = iVar4 + 3;
        } while (-1 < iVar1);
      }
      for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
        pvVar3 = (void *)(uint)*(byte *)(iVar2 + iVar4);
        console_printf((void *)0x105a7cc4/*ROM*/,pvVar3,param_3,param_4);
        iVar4 = iVar4 + 1;
      }
    }
    console_printf((void *)0x105a7ccc/*ROM*/,pvVar3,param_3,param_4);
  }
  return;
}
