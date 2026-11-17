/* @k10d execute_multi_byte_transfer @ 0x10465d1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a multi-byte data transfer using a context object, polling for readiness
 *   before each byte exchange.
 * summary:
 *   The function initializes the context and associated sub-objects, then iterates up to
 *   param_4 times. In each iteration, it polls a status flag (cpucom_handshake_ok) and, if
 *   ready, writes a byte from param_3 and reads a response. It concludes by deinitializing
 *   the context and returning a status code from get_cpucom_context_field_2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_multi_byte_transfer(int param_1,uint32_t param_2,int param_3,uint param_4)

{
  bool bVar2;
  uint32_t uVar1;
  uint uVar3;
  
  store_word_at_offset_0x20((void *)param_1,0);
  spi_set_state((void *)param_1,0);
  spi_start_xfer(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,1);
  invoke_virtual_slot_5_on_nested_object((void *)param_1);
  spi_write_byte(*(void **)(param_1 + 0xc),(uint8_t)param_2);
  set_flag_with_notify(*(void **)(param_1 + 0x10));
  cpucom_spi_wait_handshake((void *)param_1);
  spi_read_byte(*(void **)(param_1 + 0xc));
  spi_wait_flag_set((void *)param_1);
  store_word_at_offset_0x20((void *)param_1,3);
  bVar2 = cpucom_handshake_ok((void *)param_1);
  uVar3 = 0;
  if ((bVar2) && (param_4 != 0)) {
    do {
      clear_flag_with_notify(*(void **)(param_1 + 0x10));
      spi_wait_flag_clear((void *)param_1);
      bVar2 = cpucom_handshake_ok((void *)param_1);
      if (bVar2) {
        spi_write_byte(*(void **)(param_1 + 0xc),*(uint8_t *)(param_3 + uVar3));
        set_flag_with_notify(*(void **)(param_1 + 0x10));
        cpucom_spi_wait_handshake((void *)param_1);
        spi_read_byte(*(void **)(param_1 + 0xc));
        spi_wait_flag_set((void *)param_1);
      }
      increment_context_field_0x20((void *)param_1);
      bVar2 = cpucom_handshake_ok((void *)param_1);
      uVar3 = uVar3 + 1;
    } while ((bVar2) && (uVar3 < param_4));
  }
  set_bit_9_in_word_at_offset_0x20(*(void **)(param_1 + 0xc));
  store_word_at_offset_0x20((void *)param_1,0xffff);
  clear_flag_with_notify(*(void **)(param_1 + 0x10));
  uVar1 = get_cpucom_context_field_2c((void *)param_1);
  return uVar1;
}
