/* @k10d measure_and_calibrate_sensor_timing @ 0x104108c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void measure_and_calibrate_sensor_timing(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint16_t uVar4;
  uint16_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint8_t *puVar9;
  char cVar12;
  uint32_t uVar10;
  int iVar11;
  
  *(uint8_t *)(param_1 + 0x9f) = 0;
  puVar9 = (uint8_t *)get_sysparam_store_instance();
  cVar12 = read_sysparam_byte(puVar9);
  if (cVar12 != '\0') {
    uVar10 = get_sysparam_store_instance();
    iVar11 = get_sysparam_store_byte(uVar10,0xf);
    if (iVar11 == 0) {
      return;
    }
  }
  send_two_byte_pairs_over_ch2(param_1,0x808,0x8000,0x8000);
  send_two_byte_pairs_over_ch2(param_1,0x49,0x100,0x100);
  *(uint8_t *)(param_1 + 0xce) = 0;
  iVar11 = 0;
  bVar2 = false;
  bVar3 = false;
  do {
    if ((!bVar2) && (write_two_byte_pair_to_ch2(param_1,0x808,1), (*(byte *)(param_1 + 0x1e) & 0x80) != 0)) {
      bVar2 = true;
    }
    if ((!bVar3) && (write_two_byte_pair_to_ch2(param_1,0x808,0), (*(byte *)(param_1 + 0x1e) & 0x80) != 0)) {
      bVar3 = true;
    }
    check_kernel_call_success_10459fea();
    iVar11 = iVar11 + 1;
    if (0x14 < iVar11) {
      *(uint8_t *)(param_1 + 0xce) = 1;
      break;
    }
  } while ((!bVar2) || (!bVar3));
  send_two_byte_pairs_over_ch2(param_1,0x49,0,0);
  send_two_word_pair_over_ch2(param_1,0x80,0x40,1);
  send_two_word_pair_over_ch2(param_1,0x80,0x25,1);
  write_two_byte_pair_to_ch2(param_1,0x81,1);
  uVar4 = *(uint16_t *)(param_1 + 0x1e);
  send_two_word_pair_over_ch2(param_1,0x80,0x26,1);
  write_two_byte_pair_to_ch2(param_1,0x81,1);
  uVar5 = *(uint16_t *)(param_1 + 0x1e);
  send_two_word_pair_over_ch2(param_1,0x80,0,1);
  uVar1 = CONCAT22(uVar5,uVar4);
  send_two_word_pair_over_ch2(param_1,0x80,0x40,0);
  send_two_word_pair_over_ch2(param_1,0x80,0x25,0);
  write_two_byte_pair_to_ch2(param_1,0x81,0);
  uVar4 = *(uint16_t *)(param_1 + 0x1e);
  send_two_word_pair_over_ch2(param_1,0x80,0x26,0);
  write_two_byte_pair_to_ch2(param_1,0x81,0);
  uVar5 = *(uint16_t *)(param_1 + 0x1e);
  send_two_word_pair_over_ch2(param_1,0x80,0,0);
  uVar7 = CONCAT22(uVar5,uVar4);
  *(uint *)(param_1 + 0xa0) = uVar1;
  *(uint *)(param_1 + 0xa4) = uVar7;
  *(uint16_t *)(param_1 + 0xa8) = 100;
  *(uint16_t *)(param_1 + 0xaa) = 100;
  uVar6 = 0;
  do {
    uVar8 = *(uint *)(uVar6 * 4 + 0x1059b5d8/*ROM*/);
    if (uVar8 < uVar7) {
      *(short *)(param_1 + 0xaa) = (short)uVar6;
      goto joined_r0x10410b1c;
    }
    if (uVar8 < uVar1) {
      *(short *)(param_1 + 0xa8) = (short)uVar6;
      goto joined_r0x10410b48;
    }
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 0x65);
  goto LAB_10410b78;
joined_r0x10410b48:
  if (100 < uVar6) goto LAB_10410b78;
  if (*(uint *)(uVar6 * 4 + 0x1059b5d8/*ROM*/) < uVar7) {
    *(short *)(param_1 + 0xaa) = (short)uVar6;
    goto LAB_10410b78;
  }
  uVar6 = uVar6 + 1 & 0xffff;
  goto joined_r0x10410b48;
  while (uVar1 <= *(uint *)(uVar6 * 4 + 0x1059b5d8/*ROM*/)) {
joined_r0x10410b1c:
    uVar7 = uVar6 + 1;
    uVar6 = uVar7 & 0xffff;
    if (100 < uVar6) goto LAB_10410b78;
  }
  *(short *)(param_1 + 0xa8) = (short)uVar7;
LAB_10410b78:
  if ((((*(uint *)(param_1 + 0xa0) < 0x2fe4c5) && (0x1813aa < *(uint *)(param_1 + 0xa0))) &&
      (*(uint *)(param_1 + 0xa4) < 0x2fe4c5)) && (0x1813aa < *(uint *)(param_1 + 0xa4))) {
    *(uint8_t *)(param_1 + 0x9f) = 1;
  }
  else {
    *(uint8_t *)(param_1 + 0x9f) = 0;
  }
  return;
}
