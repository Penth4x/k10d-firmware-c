/* @k10d init_sensor_readout_params @ 0x10411ccc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes sensor readout configuration and performs a multi-frame calibration
 *   sequence.
 * summary:
 *   The function configures a device object (param_1) by writing multiple 16-bit parameters
 *   to offsets 0x7e-0x98, likely representing sensor timing or gain settings. It then
 *   executes a loop that iterates 9 times, calling virtual methods to trigger readouts or
 *   status checks, and stores results in an array at offset 0xd8. The logic branches based
 *   on flags at 0xbd and 0xce, suggesting different modes for sensor initialization or
 *   calibration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_sensor_readout_params(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint16_t uVar4;
  uint8_t *puVar3;
  char cVar5;
  uint32_t uVar6;
  uint32_t *puVar7;
  int iVar8;
  short sVar10;
  uint uVar9;
  uint uStack_c;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),5);
  uVar2 = (*(code *)0x10435ec2/*ROM*/)();
  uVar4 = (*(code *)0x10435d02/*ROM*/)();
  *(uint16_t *)(param_1 + 0x7e) = uVar4;
  uVar4 = (*(code *)0x10435d08/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x80) = uVar4;
  uVar4 = (*(code *)0x10435d10/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x82) = uVar4;
  uVar4 = (*(code *)0x10435d18/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x86) = uVar4;
  uVar4 = (*(code *)0x10435d20/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x88) = uVar4;
  uVar4 = (*(code *)0x10435d28/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x8a) = uVar4;
  uVar4 = (*(code *)0x10435d30/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x8c) = uVar4;
  uVar4 = (*(code *)0x10435d38/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x90) = uVar4;
  uVar4 = (*(code *)0x10435d40/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x92) = uVar4;
  uVar4 = (*(code *)0x10435d48/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x98) = uVar4;
  uVar4 = (*(code *)0x10435d50/*ROM*/)(uVar2);
  *(uint16_t *)(param_1 + 0x96) = uVar4;
  send_two_byte_pairs_over_ch2(param_1,0x40,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x41,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x42,0,0);
  sVar10 = 0;
  uVar2 = get_sysparam_store_instance();
  iVar1 = get_sysparam_store_byte(uVar2,0xc);
  if (iVar1 != 0) {
    iVar1 = get_sysparam_store_instance();
    sVar10 = *(short *)(iVar1 + 0x22);
  }
  if (*(char *)(param_1 + 0xbd) == '\0') {
    if (sVar10 != 1) {
      if (sVar10 == 2) {
        uStack_c = 0x727;
        uVar9 = 0x27;
      }
      else {
        uVar9 = 0x20;
        uStack_c = 0x720;
      }
    }
    else {
      uStack_c = 0x723;
      uVar9 = 0x23;
    }
  }
  else {
    if (sVar10 != 1) {
      if (sVar10 == 2) {
        uStack_c = 0x3885;
        uVar9 = 0x85;
      }
      else {
        uVar9 = 0x81;
        uStack_c = 0x3881;
      }
    }
    else {
      uStack_c = 0x3883;
      uVar9 = 0x83;
    }
    uVar2 = get_sysparam_store_instance();
    iVar1 = get_sysparam_store_byte(uVar2,0xe);
    if (iVar1 != 0) {
      uVar9 = uVar9 | 0x200;
      uStack_c = uStack_c | 0x200;
    }
  }
  send_two_byte_pairs_over_ch2(param_1,0x44,uVar9,uStack_c);
  send_two_word_pair_over_ch2(param_1,0x1402,*(uint16_t *)(param_1 + 0x86),1);
  send_two_word_pair_over_ch2(param_1,0x1403,*(uint16_t *)(param_1 + 0x88),1);
  send_two_word_pair_over_ch2(param_1,0x1404,*(uint16_t *)(param_1 + 0x8a),1);
  send_two_word_pair_over_ch2(param_1,0x1405,*(uint16_t *)(param_1 + 0x8c),1);
  send_two_word_pair_over_ch2(param_1,0x1406,*(uint16_t *)(param_1 + 0x90),1);
  send_two_word_pair_over_ch2(param_1,0x1407,*(uint16_t *)(param_1 + 0x92),1);
  send_two_word_pair_over_ch2(param_1,0x1408,*(uint16_t *)(param_1 + 0x98),1);
  send_two_word_pair_over_ch2(param_1,0x1409,*(uint16_t *)(param_1 + 0x96),1);
  puVar3 = (uint8_t *)get_sysparam_store_instance();
  cVar5 = read_sysparam_byte(puVar3);
  if (cVar5 == '\0') {
    (**(code **)(*(int *)(param_1 + 4) + 0x11c))
              (*(short *)(*(int *)(param_1 + 4) + 0x118) + param_1,8);
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    sVar10 = *(short *)(iVar8 + 0x118);
    iVar1 = get_sysparam_store_instance();
    (**(code **)(iVar8 + 0x11c))(sVar10 + param_1,*(uint16_t *)(iVar1 + 0x34));
  }
  send_two_byte_pairs_over_ch2(param_1,0,0,0);
  if ((*(char *)(param_1 + 0xbd) == '\0') || (uVar2 = 8, *(char *)(param_1 + 0xc6) == '\0')) {
    uVar2 = 0;
    uVar6 = 0x20;
  }
  else {
    uVar6 = 0x28;
  }
  send_two_byte_pairs_over_ch2(param_1,0x4a,uVar2,uVar6);
  send_two_byte_pairs_over_ch2(param_1,0x43,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x81a,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x800,0x8000,0x8000);
  send_two_byte_pairs_over_ch2(param_1,0x801,2,2);
  write_two_register_values(param_1,1);
  send_two_word_pair_over_ch2(param_1,0x1400,0,1);
  write_three_mmio_registers_10412506(param_1,1);
  write_pattern_values_to_object(param_1);
  call_helper_with_fixed_params_10412270(param_1);
  set_two_config_values(param_1,0);
  configure_mode_parameter_table(param_1,1);
  if (*(char *)(param_1 + 0xbd) == '\0') {
    uVar4 = 0x6100;
  }
  else {
    uVar4 = 0x3100;
  }
  *(uint16_t *)(param_1 + 0xca) = uVar4;
  if (*(char *)(param_1 + 199) != '\0') {
    *(ushort *)(param_1 + 0xca) = *(ushort *)(param_1 + 0xca) | 0x10;
  }
  send_two_byte_pairs_over_ch2(param_1,0x840,*(uint16_t *)(param_1 + 0xca),*(uint16_t *)(param_1 + 0xca));
  send_two_byte_pairs_over_ch2(param_1,0x849,*(uint16_t *)(param_1 + 200),*(uint16_t *)(param_1 + 200));
  send_two_byte_pairs_over_ch2(param_1,0x84a,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x841,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x842,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x843,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x844,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x845,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x846,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x847,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x848,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85e,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85f,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x860,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x865,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x866,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85a,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85b,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85c,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x867,0,0);
  send_two_byte_pairs_over_ch2(param_1,0x85d,*(uint16_t *)(param_1 + 0x9a),*(uint16_t *)(param_1 + 0x9c));
  send_two_byte_pairs_over_ch2(param_1,0x818,0xf,0xf);
  send_two_byte_pairs_over_ch2(param_1,0x818,0x1f,0x1f);
  puVar3 = (uint8_t *)get_sysparam_store_instance();
  cVar5 = read_sysparam_byte(puVar3);
  if (cVar5 == '\0') {
    check_kernel_call_success_10459fea();
  }
  (**(code **)(*(int *)(param_1 + 4) + 0xfc))(*(short *)(*(int *)(param_1 + 4) + 0xf8) + param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                    (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,1);
  *(uint32_t *)(param_1 + 0xd0) = uVar2;
  uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                    (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,0);
  *(uint32_t *)(param_1 + 0xd4) = uVar2;
  puVar7 = (uint32_t *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xce) == '\0') {
    puVar3 = (uint8_t *)get_sysparam_store_instance();
    cVar5 = read_sysparam_byte(puVar3);
    if (cVar5 == '\0') {
      uVar9 = 9;
      do {
        if (*(char *)(param_1 + 0x9f) != '\0') {
          return;
        }
        (**(code **)(*(int *)(param_1 + 4) + 0x11c))
                  (*(short *)(*(int *)(param_1 + 4) + 0x118) + param_1,uVar9 & 0xffff);
        (**(code **)(*(int *)(param_1 + 4) + 0xfc))
                  (*(short *)(*(int *)(param_1 + 4) + 0xf8) + param_1);
        check_kernel_call_success_10459fea();
        uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                          (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,1);
        *puVar7 = uVar2;
        uVar9 = uVar9 + 1;
        uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                          (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,0);
        puVar7[1] = uVar2;
        puVar7 = puVar7 + 2;
      } while ((int)uVar9 < 0x10);
    }
    else {
      uVar2 = get_sysparam_store_instance();
      iVar1 = get_sysparam_store_byte(uVar2,0x10);
      if (iVar1 != 0) {
        uVar9 = 9;
        do {
          if (*(char *)(param_1 + 0x9f) != '\0') {
            return;
          }
          (**(code **)(*(int *)(param_1 + 4) + 0x11c))
                    (*(short *)(*(int *)(param_1 + 4) + 0x118) + param_1,uVar9 & 0xffff);
          (**(code **)(*(int *)(param_1 + 4) + 0xfc))
                    (*(short *)(*(int *)(param_1 + 4) + 0xf8) + param_1);
          check_kernel_call_success_10459fea();
          uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                            (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,1);
          *puVar7 = uVar2;
          uVar9 = uVar9 + 1;
          uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x114))
                            (*(short *)(*(int *)(param_1 + 4) + 0x110) + param_1,0);
          puVar7[1] = uVar2;
          puVar7 = puVar7 + 2;
        } while ((int)uVar9 < 0x10);
      }
    }
  }
  return;
}
