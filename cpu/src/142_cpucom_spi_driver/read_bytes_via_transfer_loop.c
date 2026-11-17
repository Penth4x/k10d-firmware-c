/* @k10d read_bytes_via_transfer_loop @ 0x10465e16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads up to param_4 bytes into a buffer by repeatedly triggering a transfer step and
 *   checking a readiness flag.
 * summary:
 *   The function initializes a context object (param_1) and its sub-objects at offsets 0xc
 *   and 0x10. It enters a loop that calls clear_flag_with_notify and spi_wait_flag_clear,
 *   checks a status via cpucom_handshake_ok, and if ready, reads a byte from spi_read_byte
 *   into the buffer at param_3. It cleans up the context and returns a status code from
 *   get_cpucom_context_field_2c. The specific hardware or protocol (e.g., SPI, CPUCOM) is
 *   not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_bytes_via_transfer_loop(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar2;
  bool bVar3;
  uint8_t uVar4;
  uint32_t uVar1;
  uint uVar5;
  
  store_word_at_offset_0x20((void *)param_1,0);
  spi_set_state((void *)param_1,0);
  spi_start_xfer(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,1);
  invoke_virtual_slot_5_on_nested_object((void *)param_1);
  spi_write_byte(*(void **)(param_1 + 0xc),0);
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  cpucom_spi_wait_handshake((void *)param_1);
  bVar2 = spi_read_byte(*(void **)(param_1 + 0xc));
  spi_wait_flag_set((void *)param_1);
  bVar3 = cpucom_handshake_ok((void *)param_1);
  if (bVar3) {
    if (bVar2 != param_2) {
      spi_set_state((void *)param_1,4);
    }
    store_word_at_offset_0x20((void *)param_1,3);
    bVar3 = cpucom_handshake_ok((void *)param_1);
    uVar5 = 0;
    if ((bVar3) && (param_4 != 0)) {
      do {
        clear_flag_with_notify(*(void **)(param_1 + 0x10));
        spi_wait_flag_clear((void *)param_1);
        bVar3 = cpucom_handshake_ok((void *)param_1);
        if (bVar3) {
          spi_write_byte(*(void **)(param_1 + 0xc),0);
          set_flag_with_notify(*(void **)(param_1 + 0x10));
          cpucom_spi_wait_handshake((void *)param_1);
          uVar4 = spi_read_byte(*(void **)(param_1 + 0xc));
          *(uint8_t *)(param_3 + uVar5) = uVar4;
          spi_wait_flag_set((void *)param_1);
        }
        increment_context_field_0x20((void *)param_1);
        bVar3 = cpucom_handshake_ok((void *)param_1);
        uVar5 = uVar5 + 1;
      } while ((bVar3) && (uVar5 < param_4));
    }
  }
  set_bit_9_in_word_at_offset_0x20(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,0xffff);
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  uVar1 = get_cpucom_context_field_2c((void *)param_1);
  return uVar1;
}
