/* @k10d measure_and_calibrate_sensor_timing @ 0x104108c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void measure_and_calibrate_sensor_timing(cls_1059be70 *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint16_t uVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint16_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint8_t *puVar11;
  char cVar14;
  uint32_t uVar12;
  int iVar13;
  
  param_1->field_0x9f = 0;
  puVar11 = (uint8_t *)get_sysparam_store_instance();
  cVar14 = read_sysparam_byte(puVar11);
  if (cVar14 != '\0') {
    uVar12 = get_sysparam_store_instance();
    iVar13 = get_sysparam_store_byte((uint8_t *)(uVar12),(uint32_t)(0xf));
    if (iVar13 == 0) {
      return;
    }
  }
  send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x808),(int)(0x8000),(int)(0x8000));
  send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x49),(int)(0x100),(int)(0x100));
  param_1->field_0xce = 0;
  iVar13 = 0;
  bVar2 = false;
  bVar3 = false;
  do {
    if ((!bVar2) && (write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x808),(int)(1)), (param_1->field_0x1e & 0x80) != 0)) {
      bVar2 = true;
    }
    if ((!bVar3) && (write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x808),(int)(0)), (param_1->field_0x1e & 0x80) != 0)) {
      bVar3 = true;
    }
    check_kernel_call_success_10459fea();
    iVar13 = iVar13 + 1;
    if (0x14 < iVar13) {
      param_1->field_0xce = 1;
      break;
    }
  } while ((!bVar2) || (!bVar3));
  send_two_byte_pairs_over_ch2((int)(param_1),(uint32_t)(0x49),(int)(0),(int)(0));
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x40),(int)(1));
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x25),(int)(1));
  write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x81),(int)(1));
  uVar4 = (uVar4 & ~(((uint64_t)0xff) << 0)) | ((((uint64_t)(param_1->field_0x1e)) & ((uint64_t)0xff)) << 0);
  uVar4 = (uVar4 & ~(((uint64_t)0xff) << 8)) | ((((uint64_t)(param_1->field_0x1f)) & ((uint64_t)0xff)) << 8);
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x26),(int)(1));
  write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x81),(int)(1));
  uVar5 = (uVar5 & ~(((uint64_t)0xff) << 0)) | ((((uint64_t)(param_1->field_0x1e)) & ((uint64_t)0xff)) << 0);
  uVar5 = (uVar5 & ~(((uint64_t)0xff) << 8)) | ((((uint64_t)(param_1->field_0x1f)) & ((uint64_t)0xff)) << 8);
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0),(int)(1));
  uVar1 = CONCAT22(uVar5,uVar4);
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x40),(int)(0));
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x25),(int)(0));
  write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x81),(int)(0));
  uVar6 = (uVar6 & ~(((uint64_t)0xff) << 0)) | ((((uint64_t)(param_1->field_0x1e)) & ((uint64_t)0xff)) << 0);
  uVar6 = (uVar6 & ~(((uint64_t)0xff) << 8)) | ((((uint64_t)(param_1->field_0x1f)) & ((uint64_t)0xff)) << 8);
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0x26),(int)(0));
  write_two_byte_pair_to_ch2((int)(param_1),(uint32_t)(0x81),(int)(0));
  uVar7 = (uVar7 & ~(((uint64_t)0xff) << 0)) | ((((uint64_t)(param_1->field_0x1e)) & ((uint64_t)0xff)) << 0);
  uVar7 = (uVar7 & ~(((uint64_t)0xff) << 8)) | ((((uint64_t)(param_1->field_0x1f)) & ((uint64_t)0xff)) << 8);
  send_two_word_pair_over_ch2((int)(param_1),(uint32_t)(0x80),(uint32_t)(0),(int)(0));
  uVar9 = CONCAT22(uVar7,uVar6);
  param_1->field_0xa0 = uVar1;
  param_1->field_0xa4 = uVar9;
  param_1->field_0xa8 = 100;
  param_1->field_0xaa = 100;
  uVar8 = 0;
  do {
    uVar10 = *(uint *)(uVar8 * 4 + 0x1059b5d8/*ROM*/);
    if (uVar10 < uVar9) {
      param_1->field_0xaa = (short)uVar8;
      goto joined_r0x10410b1c;
    }
    if (uVar10 < uVar1) {
      param_1->field_0xa8 = (short)uVar8;
      goto joined_r0x10410b48;
    }
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar8 < 0x65);
  goto LAB_10410b78;
joined_r0x10410b48:
  if (100 < uVar8) goto LAB_10410b78;
  if (*(uint *)(uVar8 * 4 + 0x1059b5d8/*ROM*/) < uVar9) {
    param_1->field_0xaa = (short)uVar8;
    goto LAB_10410b78;
  }
  uVar8 = uVar8 + 1 & 0xffff;
  goto joined_r0x10410b48;
  while (uVar1 <= *(uint *)(uVar8 * 4 + 0x1059b5d8/*ROM*/)) {
joined_r0x10410b1c:
    uVar9 = uVar8 + 1;
    uVar8 = uVar9 & 0xffff;
    if (100 < uVar8) goto LAB_10410b78;
  }
  param_1->field_0xa8 = (short)uVar9;
LAB_10410b78:
  if (((((uint)param_1->field_0xa0 < 0x2fe4c5) && (0x1813aa < (uint)param_1->field_0xa0)) &&
      ((uint)param_1->field_0xa4 < 0x2fe4c5)) && (0x1813aa < (uint)param_1->field_0xa4)) {
    param_1->field_0x9f = 1;
  }
  else {
    param_1->field_0x9f = 0;
  }
  return;
}
