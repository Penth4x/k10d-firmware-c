/* @k10d copy_struct_bytes_to_sram @ 0x103728de
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Copies a 9-byte block from param_1 offsets 0x5c-0x63 to offsets 0x64-0x6b and forwards
 *   three bytes to SDRAM 0x800158d4.
 * summary:
 *   The function reads bytes at offsets 0x5c, 0x5d, and 0x5f of param_1 and passes them to
 *   three unnamed callees (set_setting_0x82, set_setting_0x83, set_setting_0x84) along with
 *   the SDRAM address 0x800158d4. It then performs a direct memory copy of 9 bytes from
 *   param_1+0x5c to param_1+0x64. The specific role of the data or the callees is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_bytes_to_sram(void *param_1)

{
  set_setting_0x82((int *)(0x800158d4/*SDRAM*/),(uint32_t)(*(uint8_t *)((int)param_1 + 0x5c)));
  set_setting_0x83((int *)(0x800158d4/*SDRAM*/),(uint32_t)(*(uint8_t *)((int)param_1 + 0x5d)));
  set_setting_0x84((int *)(0x800158d4/*SDRAM*/),(uint32_t)(*(uint8_t *)((int)param_1 + 0x5f)));
  *(uint8_t *)((int)param_1 + 100) = *(uint8_t *)((int)param_1 + 0x5c);
  *(uint8_t *)((int)param_1 + 0x65) = *(uint8_t *)((int)param_1 + 0x5d);
  *(uint8_t *)((int)param_1 + 0x66) = *(uint8_t *)((int)param_1 + 0x5e);
  *(uint8_t *)((int)param_1 + 0x67) = *(uint8_t *)((int)param_1 + 0x5f);
  *(uint8_t *)((int)param_1 + 0x68) = *(uint8_t *)((int)param_1 + 0x60);
  *(uint8_t *)((int)param_1 + 0x69) = *(uint8_t *)((int)param_1 + 0x61);
  *(uint8_t *)((int)param_1 + 0x6a) = *(uint8_t *)((int)param_1 + 0x62);
  *(uint8_t *)((int)param_1 + 0x6b) = *(uint8_t *)((int)param_1 + 99);
  return;
}
