/* @k10d ch2_buffer_xfer @ 0x104115ec
 * name: verified (structural evidence: emulator: device on ch2 sends 0x88 then 0xff x3; completion bit must be modelled or the capture task hangs)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer over serial channel 2 (0x5c004020): writes each byte to the data
 *   port (+3) and spins on status bit 0x800 (done). Part of the capture task's device
 *   start-up.
 * summary:
 *   VERIFIED: emulator: device on ch2 sends 0x88 then 0xff x3; completion bit must be
 *   modelled or the capture task hangs
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t ch2_buffer_xfer(int param_1,void *param_2,uint32_t param_3)

{
  uint8_t uVar2;
  int iVar1;
  void *pvVar3;
  uint32_t *puVar4;
  
  puVar4 = (uint32_t *)(param_1 + 0x24);
  init_three_field_struct(puVar4,param_2,param_3);
  spi_read_byte(*(void **)(param_1 + 0x30));
  pvVar3 = *(void **)(param_1 + 0x30);
  uVar2 = fetch_and_increment_pointer(puVar4);
  spi_write_byte(pvVar3,uVar2);
  spi_start_xfer(*(void **)(param_1 + 0x30));
  iVar1 = check_buffer_length_within_limit(puVar4);
  while (iVar1 == 0) {
    iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x30));
    while (iVar1 == 0) {
      iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x30));
    }
    clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)(param_1 + 0x30));
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar2 = spi_read_byte(*(void **)(param_1 + 0x30));
    *(uint8_t *)(iVar1 + -1) = uVar2;
    pvVar3 = *(void **)(param_1 + 0x30);
    uVar2 = fetch_and_increment_pointer((void *)(param_1 + 0x24));
    spi_write_byte(pvVar3,uVar2);
    spi_start_xfer(*(void **)(param_1 + 0x30));
    iVar1 = check_buffer_length_within_limit((void *)(param_1 + 0x24));
  }
  iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x30));
  while (iVar1 == 0) {
    iVar1 = check_status_bit_0x800(*(uint32_t *)(param_1 + 0x30));
  }
  clear_bit_10_of_word_at_offset_0x20(*(uint32_t *)(param_1 + 0x30));
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = spi_read_byte(*(void **)(param_1 + 0x30));
  *(uint8_t *)(iVar1 + -1) = uVar2;
  init_three_field_struct(puVar4,(void *)0x0,0);
  return 1;
}
