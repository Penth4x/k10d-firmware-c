/* @k10d cpucom_spi_transaction @ 0x10465b88
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed spi_command_data_exchange)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a command/response and bidirectional data exchange over an SPI-like channel
 *   using a context object.
 * summary:
 *   The function initializes the channel, sends a command byte, and reads a status byte. It
 *   then negotiates data sizes by sending an output length and reading an input length.
 *   Finally, it executes a loop to transfer data bytes in both directions, checking for
 *   completion status after each step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_spi_transaction(int param_1,uint param_2,int param_3,uint param_4,uint8_t *param_5,int param_6,
                 uint *param_7)

{
  uint uVar1;
  uint8_t uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  store_word_at_offset_0x20((void *)param_1,0);
  spi_set_state((void *)param_1,0);
  spi_start_xfer(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,1);
  invoke_virtual_transfer_on_context((void *)param_1,0x32);
  spi_write_byte(*(void **)(param_1 + 0xc),(char)param_2);
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  cpucom_spi_wait_handshake((void *)param_1);
  uVar2 = spi_read_byte(*(void **)(param_1 + 0xc));
  *param_5 = uVar2;
  spi_wait_flag_set((void *)param_1);
  bVar3 = cpucom_handshake_ok((void *)param_1);
  if (bVar3) {
    clear_flag_with_notify(*(void **)(param_1 + 0x10));
    store_word_at_offset_0x20((void *)param_1,2);
    if (0xfe < param_4) {
      param_4 = 0;
    }
    invoke_virtual_transfer_on_context((void *)param_1,0x32);
    spi_wait_flag_clear((void *)param_1);
    bVar3 = cpucom_handshake_ok((void *)param_1);
    if (bVar3) {
      spi_write_byte(*(void **)(param_1 + 0xc),(char)param_4);
      set_flag_with_notify(*(void **)(param_1 + 0x10));
      cpucom_spi_wait_handshake((void *)param_1);
      bVar4 = spi_read_byte(*(void **)(param_1 + 0xc));
      uVar6 = 0;
      if (bVar4 < 0xff) {
        uVar6 = (uint)bVar4;
      }
      *param_7 = uVar6;
      spi_wait_flag_set((void *)param_1);
      store_word_at_offset_0x20((void *)param_1,3);
      uVar1 = param_4;
      if (param_4 < uVar6) {
        uVar1 = uVar6;
      }
      bVar3 = cpucom_handshake_ok((void *)param_1);
      uVar5 = 0;
      if ((bVar3) && (uVar1 != 0)) {
        do {
          clear_flag_with_notify(*(void **)(param_1 + 0x10));
          spi_wait_flag_clear((void *)param_1);
          bVar3 = cpucom_handshake_ok((void *)param_1);
          if (bVar3) {
            if (uVar5 < param_4) {
              uVar2 = *(uint8_t *)(param_3 + uVar5);
            }
            else {
              uVar2 = 0;
            }
            spi_write_byte(*(void **)(param_1 + 0xc),uVar2);
            set_flag_with_notify(*(void **)(param_1 + 0x10));
            cpucom_spi_wait_handshake((void *)param_1);
            uVar2 = spi_read_byte(*(void **)(param_1 + 0xc));
            if (uVar5 < uVar6) {
              *(uint8_t *)(param_6 + uVar5) = uVar2;
            }
            spi_wait_flag_set((void *)param_1);
          }
          increment_context_field_0x20((void *)param_1);
          bVar3 = cpucom_handshake_ok((void *)param_1);
          uVar5 = uVar5 + 1;
        } while ((bVar3) && (uVar5 < uVar1));
      }
    }
  }
  set_bit_9_in_word_at_offset_0x20(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,0xffff);
  invoke_virtual_slot_5_on_nested_object((void *)param_1);
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  get_cpucom_context_field_2c((void *)param_1);
  return;
}
