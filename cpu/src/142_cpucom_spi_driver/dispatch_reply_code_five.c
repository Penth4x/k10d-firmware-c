/* @k10d dispatch_reply_code_five @ 0x10465366
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks a reply code from a context and, if it equals 5, invokes a helper three times
 *   with extracted fields.
 * summary:
 *   The function calls cpucom_resp_get_byte0 to retrieve a code from param_2. If the code
 *   is 5, it extracts additional fields using get_cpucom_msg_data_ptr_104655aa and
 *   cpucom_resp_get_byte0, calls get_cpucom_msg_data_ptr_104655b6, and then invokes
 *   console_printf three times with different constant addresses (0x105a7c98, 0x105a7ca8,
 *   0x105a7cb0) and the extracted data. This pattern suggests handling a specific type of
 *   response or event, likely dispatching to a handler registered for that reply code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_reply_code_five(uint32_t param_1,uint8_t *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = cpucom_resp_get_byte0(param_2);
  if (iVar1 == 5) {
    iVar1 = get_cpucom_msg_data_ptr_104655aa(param_2);
    pvVar2 = (void *)cpucom_resp_get_byte0(param_2);
    get_cpucom_msg_data_ptr_104655b6(param_2);
    console_printf((void *)0x105a7c98/*ROM*/,pvVar2,param_3,param_4);
    pvVar2 = (void *)(uint)*(byte *)(iVar1 + 2);
    console_printf((void *)0x105a7ca8/*ROM*/,pvVar2,param_3,param_4);
    console_printf((void *)0x105a7cb0/*ROM*/,pvVar2,param_3,param_4);
  }
  return;
}
