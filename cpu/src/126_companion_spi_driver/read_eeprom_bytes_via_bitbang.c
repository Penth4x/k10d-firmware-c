/* @k10d read_eeprom_bytes_via_bitbang @ 0x10444d1e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads 16 bytes from an EEPROM-like device using bit-banged SPI-like transactions and
 *   stores them in param_2.
 * summary:
 *   The function initializes a device handle (param_1 + 0x10) with a series of setup calls,
 *   then enters a loop to read 16 bytes (0x10) into the buffer pointed to by param_2. It
 *   uses helper functions (serdev_clear_ready, dev2_ready, FUN_1043fcdc) to perform the
 *   bit-banged read operations, checking for data readiness and handling potential retries.
 *   The final two bytes of the buffer are copied to offsets 0x34 and 0x35 of the object.
 *   The return value indicates success (0) or failure (1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10444da2) overlaps instruction at (ram,0x10444da0)
    */

uint32_t read_eeprom_bytes_via_bitbang(int param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int iStack_c;
  
  uVar4 = 0;
  call_two_helpers_on_field_10444b5e(param_1,0x1b);
  clear_high_bit_at_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
  set_bit3_in_object_field(*(uint32_t *)(param_1 + 0x10));
  set_bit5_in_object_field(*(uint32_t *)(param_1 + 0x10));
  dev2_send(*(uint32_t *)(param_1 + 0x10),100);
  serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
  set_bit4_in_object_field(*(uint32_t *)(param_1 + 0x10));
  iStack_c = 0;
  do {
    iStack_c = iStack_c + 1;
  } while (iStack_c < 0x14);
  iVar1 = check_two_conditions_on_field(param_1);
  if (iVar1 == 0) {
    iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
    while (iVar1 == 0) {
      iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
    }
    iVar1 = serdev_status_err(param_1);
    if (iVar1 == 0) {
      dev2_send(*(uint32_t *)(param_1 + 0x10),0xe0);
      serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
      iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
      while (iVar1 == 0) {
        iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
      }
      iVar1 = serdev_status_err(param_1);
      if (iVar1 == 0) {
        dev2_send(*(uint32_t *)(param_1 + 0x10),0x65);
        (*(code *)0x1043fd8a/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
        iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
        while (iVar1 == 0) {
          iVar1 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
        }
        set_bit3_in_object_field(*(uint32_t *)(param_1 + 0x10));
        iVar1 = serdev_status_err(param_1);
        if (iVar1 == 0) {
          iVar1 = 0;
          uVar4 = 1;
          do {
            serdev_clear_ready(*(uint32_t *)(param_1 + 0x10));
            iVar2 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
            while (iVar2 == 0) {
              iVar2 = dev2_ready(*(uint32_t *)(param_1 + 0x10));
            }
            iVar2 = test_bit7_of_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
            if (iVar2 != 0) goto code_r0x10444ec6;
            uVar3 = (*(code *)0x1043fcdc/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
            param_2[iVar1] = uVar3;
            if (iVar1 == 0xe) {
              (*(code *)0x1043fdea/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x10);
        }
        else {
code_r0x10444ec6:
          uVar4 = 0;
        }
      }
    }
    clear_bit_at_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
    iVar1 = check_flag_bit7_at_offset_0x20(*(uint32_t *)(param_1 + 0x10));
    while (iVar1 != 0) {
      iVar1 = check_flag_bit7_at_offset_0x20(*(uint32_t *)(param_1 + 0x10));
    }
  }
  clear_bit_3_at_offset_0x38(*(uint32_t *)(param_1 + 0x10));
  call_helper_on_field_0x10_10444b86(param_1);
  *(uint8_t *)(param_1 + 0x34) = *param_2;
  *(uint8_t *)(param_1 + 0x35) = param_2[1];
  return uVar4;
}
