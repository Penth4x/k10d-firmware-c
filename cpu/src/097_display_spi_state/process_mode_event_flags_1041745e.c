/* @k10d process_mode_event_flags_1041745e @ 0x1041745e
 * name: verified (structural evidence: emulator: runs 8x during a MENU press; +0x1528 carries the requested screen id)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Applies one pass of the mode event-request bits (obj+0x152c): bit 0x200000 launches the
 *   parked screen request at +0x1528 (call_helper_with_0x50000), other bits drive
 *   mode/display state.
 * summary:
 *   VERIFIED: emulator: runs 8x during a MENU press; +0x1528 carries the requested screen
 *   id
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_mode_event_flags_1041745e(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x152c) & 0x400) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x20;
  }
  if (((((*(uint *)(param_1 + 0x152c) & 0x1000) != 0) && (*(char *)(param_1 + 0x92) == '\0')) &&
      (*(char *)(param_1 + 0x93) == '\0')) &&
     (((iVar1 = get_setting_delay_ms_104f1868(*(uint32_t *)(param_1 + 0x5c)), iVar1 != 0 ||
       ((*(uint *)(param_1 + 0x1508) & 0x2000000) != 0)) || (*(int *)(param_1 + 0x1518) == 1)))) {
    if (*(char *)(param_1 + 0x151e) == '\0') {
      *(uint8_t *)(param_1 + 0x151c) = 0;
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x40;
    }
    else {
      *(uint8_t *)(param_1 + 0x151c) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x8000000) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x100;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x80000000/*SDRAM*/) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x200;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x10000000/*ROM*/) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x800;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x20000000) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x1000;
    *(uint32_t *)(param_1 + 0x1584) = 0;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x40000000) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x2000;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x200) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x200000;
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x4000) != 0) {
    (*(code *)0x10418340/*ROM*/)(param_1);
  }
  if ((*(uint *)(param_1 + 0x152c) & 0x2000) != 0) {
    increment_counter_and_reset_flag(param_1);
  }
  if ((*(char *)(param_1 + 0x1522) != '\0') && (*(char *)(param_1 + 0x151d) == '\0')) {
    *(uint8_t *)(param_1 + 0x1522) = 0;
  }
  if (((*(int *)(param_1 + 0x1500) != 2) && (*(char *)(param_1 + 0x92) == '\0')) &&
     (*(char *)(param_1 + 0x93) == '\0')) {
    if (((*(uint *)(param_1 + 0x152c) & 0x4000000) != 0) &&
       (iVar1 = check_mode_flag_condition(*(uint32_t *)(param_1 + 0x5c)), iVar1 == 0)) {
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x400;
    }
    if (((*(uint *)(param_1 + 0x152c) & 0x200000) != 0) && (*(char *)(param_1 + 0x1522) == '\0')) {
      *(uint32_t *)(param_1 + 0x1524) = *(uint32_t *)(param_1 + 0x1528);
      call_helper_with_0x50000(param_1,*(uint32_t *)(param_1 + 0x1528));
    }
  }
  if (((*(int *)(param_1 + 0x1500) != 2) && (*(char *)(param_1 + 0x92) == '\0')) &&
     (*(char *)(param_1 + 0x93) == '\0')) {
    if ((*(uint *)(param_1 + 0x152c) & 0x40000) != 0) {
      *(uint8_t *)(param_1 + 0x91) = 1;
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffbfff;
      iVar1 = check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x10000;
      }
    }
    if ((*(uint *)(param_1 + 0x152c) & 0x400000) != 0) {
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x80000;
      *(uint32_t *)(param_1 + 0x1584) = 0;
    }
    if ((*(uint *)(param_1 + 0x152c) & 0x800000) != 0) {
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x100000;
      *(uint32_t *)(param_1 + 0x1584) = 0;
    }
    if ((*(uint *)(param_1 + 0x152c) & 0x20000) != 0) {
      *(uint8_t *)(param_1 + 0x91) = 0;
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffebfff;
      if (*(char *)(param_1 + 0x150c) != '\0') {
        *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) | 0x8000;
      }
    }
  }
  return;
}
