/* @k10d cpucom_spi_xfer @ 0x10465958
 * name: verified (structural evidence: emulator trace of every CPUCOM command)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Runs one CPUCOM command/response exchange with the companion chip over SPI: size
 *   negotiation, then byte exchange through data register 0x5c004043.
 * summary:
 *   VERIFIED: emulator trace of every CPUCOM command
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10465a18) overlaps instruction at (ram,0x10465a16)
    */

uint32_t cpucom_spi_xfer(void *param_1,uint8_t *param_2,uint8_t *param_3)

{
  uint uVar1;
  uint8_t uVar5;
  bool bVar6;
  uint uVar2;
  byte bVar7;
  int iVar3;
  uint32_t uVar4;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x24));
  iVar11 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar11 + 100))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar11 + 0x60));
  store_word_at_offset_0x20(param_1,0);
  spi_set_state(param_1,0);
  spi_start_xfer(*(void **)((int)param_1 + 0xc));
  store_word_at_offset_0x20(param_1,1);
  invoke_virtual_transfer_on_context(param_1,0x32);
  pvVar8 = *(void **)((int)param_1 + 0xc);
  uVar5 = cpucom_resp_get_byte0(param_2);
  spi_write_byte(pvVar8,uVar5);
  set_flag_with_notify(*(void **)((int)param_1 + 0x10));
  cpucom_spi_wait_handshake(param_1);
  uVar5 = spi_read_byte(*(void **)((int)param_1 + 0xc));
  cpucom_msg_set_cmd(param_3,uVar5);
  spi_wait_flag_set(param_1);
  bVar6 = cpucom_handshake_ok(param_1);
  if (bVar6) {
    clear_flag_with_notify(*(void **)((int)param_1 + 0x10));
    store_word_at_offset_0x20(param_1,2);
    uVar2 = get_cpucom_msg_data_ptr_104655b6(param_2);
    if (0xfe < uVar2) {
      uVar2 = 0;
    }
    invoke_virtual_transfer_on_context(param_1,0x32);
    spi_wait_flag_clear(param_1);
    bVar6 = cpucom_handshake_ok(param_1);
    if (bVar6) {
      spi_write_byte(*(void **)((int)param_1 + 0xc),(char)uVar2);
      set_flag_with_notify(*(void **)((int)param_1 + 0x10));
      cpucom_spi_wait_handshake(param_1);
      bVar7 = spi_read_byte(*(void **)((int)param_1 + 0xc));
      uVar10 = 0;
      if (bVar7 < 0xff) {
        uVar10 = (uint)bVar7;
      }
      cpucom_resp_set_insize(param_3,uVar10);
      spi_wait_flag_set(param_1);
      store_word_at_offset_0x20(param_1,3);
      iVar11 = get_cpucom_msg_data_ptr_104655aa(param_2);
      iVar3 = get_cpucom_msg_data_ptr_104655aa(param_3);
      uVar1 = uVar10;
      if (uVar10 <= uVar2) {
        uVar1 = uVar2;
      }
      bVar6 = cpucom_handshake_ok(param_1);
      uVar9 = 0;
      if ((bVar6) && (uVar1 != 0)) {
        do {
          clear_flag_with_notify(*(void **)((int)param_1 + 0x10));
          spi_wait_flag_clear(param_1);
          bVar6 = cpucom_handshake_ok(param_1);
          if (bVar6) {
            if (uVar9 < uVar2) {
              uVar5 = *(uint8_t *)(iVar11 + uVar9);
            }
            else {
              uVar5 = 0;
            }
            spi_write_byte(*(void **)((int)param_1 + 0xc),uVar5);
            set_flag_with_notify(*(void **)((int)param_1 + 0x10));
            cpucom_spi_wait_handshake(param_1);
            uVar5 = spi_read_byte(*(void **)((int)param_1 + 0xc));
            if (uVar9 < uVar10) {
              *(uint8_t *)(iVar3 + uVar9) = uVar5;
            }
            spi_wait_flag_set(param_1);
          }
          increment_context_field_0x20(param_1);
          bVar6 = cpucom_handshake_ok(param_1);
          uVar9 = uVar9 + 1;
        } while ((bVar6) && (uVar9 < uVar1));
      }
    }
  }
  set_bit_9_in_word_at_offset_0x20(*(void **)((int)param_1 + 0xc));
  store_word_at_offset_0x20(param_1,0xffff);
  invoke_virtual_slot_5_on_nested_object(param_1);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar11 + 0x6c))(*(int *)((int)param_1 + 0x14) + (int)*(short *)(iVar11 + 0x68),1);
  check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x24));
  uVar4 = get_cpucom_context_field_2c(param_1);
  return uVar4;
}
