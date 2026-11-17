/* @k10d screen_launch_by_id @ 0x103b8ac6
 * name: verified (structural evidence: decomp: compares obj+8 with the table 0x105bb5a0.. (0x10000..0x10007); flags via first_run_flag_a_done/first_run_flag_b_done on obj+0x68; emulator (blank settings): runs once with id 0x10001 and builds 0x103de2ee)
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * purpose:
 *   Builds and starts the UI screen object for the requested screen id (obj+8,
 *   0x10000..0x10007). Id 0x10001 = power-on screen: Language-select screen (0x103de2ee) if
 *   first-run flag A is not set, else the second first-run screen (0x103db21e) if flag B is
 *   not set, else the normal screen (0x103d463c); id 0x10004 builds the screen whose code
 *   uses the manual focal-length list (0x103feefc).
 * summary:
 *   VERIFIED: decomp: compares obj+8 with the table 0x105bb5a0.. (0x10000..0x10007); flags
 *   via first_run_flag_a_done/first_run_flag_b_done on obj+0x68; emulator (blank settings):
 *   runs once with id 0x10001 and builds 0x103de2ee
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void screen_launch_by_id(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_or_create_singleton_object_1050b118();
  set_object_field_via_helper_1050b886(uVar1,1);
  uVar1 = get_or_init_sram_block_105342fe();
  iVar2 = (*(code *)0x10534358/*ROM*/)(uVar1,0x29);
  if (iVar2 != 0xffff) {
    iVar3 = get_or_create_singleton_object_104fb12e();
    iVar3 = check_state_mismatch(*(uint32_t *)(iVar3 + 0x74));
    if (((iVar3 == 0) ||
        ((((iVar3 = *(int *)(param_1 + 8), iVar3 == _DAT_105bb5bc/*ROM*/ || (iVar3 == _DAT_105bb5b8/*ROM*/)) ||
          (iVar3 == _DAT_105bb5b4/*ROM*/)) && (iVar2 != 0)))) ||
       ((((iVar3 == _DAT_105bb5a0/*ROM*/ || (iVar3 == _DAT_105bb5a8/*ROM*/)) || (iVar3 == _DAT_105bb5ac/*ROM*/)) &&
        (iVar2 == 0)))) {
      *(uint8_t *)(param_1 + 0x65) = 1;
      return;
    }
  }
  settings_refresh_working_copy(*(void **)(param_1 + 0x68));
  *(uint16_t *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x60) == 1) {
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) | 2;
  }
  if (*(int *)(param_1 + 0x60) == 2) {
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) | 4;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == _DAT_105bb5a4/*ROM*/) {
    iVar2 = first_run_flag_a_done(*(int *)(param_1 + 0x68));
    if (iVar2 == 0) {
      iVar2 = get_language_select_screen();
      *(int *)(param_1 + 0x50) = iVar2;
      (**(code **)(*(int *)(iVar2 + 0x10) + 0x6c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x68),0x3e);
      iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
      (**(code **)(iVar2 + 0x34))
                (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x30),
                 *(uint16_t *)(param_1 + 0x5c));
    }
    else {
      iVar2 = first_run_flag_b_done(*(int *)(param_1 + 0x68));
      if (iVar2 == 0) {
        iVar2 = get_first_run_screen_obj();
        *(int *)(param_1 + 0x50) = iVar2;
        (**(code **)(*(int *)(iVar2 + 0x10) + 0x6c))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x68),0x1b);
        iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(iVar2 + 0x34))
                  (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x30),
                   *(uint16_t *)(param_1 + 0x5c));
      }
      else {
        iVar2 = get_or_init_screen_object();
        *(int *)(param_1 + 0x50) = iVar2;
        (**(code **)(*(int *)(iVar2 + 0x10) + 0x6c))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x68),0x3e);
        iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
        (**(code **)(iVar2 + 0x34))
                  (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x30),
                   *(uint16_t *)(param_1 + 0x5c));
      }
    }
  }
  else if (iVar2 == _DAT_105bb5b0/*ROM*/) {
    iVar2 = get_manual_focal_length_list();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x6c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x68),0x19);
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
    (**(code **)(iVar2 + 0x34))
              (*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x30),
               *(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5ac/*ROM*/) {
    iVar2 = get_or_init_singleton_object_103c74d0();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5a8/*ROM*/) {
    iVar2 = get_or_init_ram_object_103b95ee();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5a0/*ROM*/) {
    iVar2 = get_or_init_ram_object_103b95ee();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5bc/*ROM*/) {
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) | 1;
    iVar2 = get_or_init_singleton_object_103c74d0();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5b8/*ROM*/) {
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) | 1;
    iVar2 = get_or_init_ram_object_103b95ee();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else if (iVar2 == _DAT_105bb5b4/*ROM*/) {
    *(ushort *)(param_1 + 0x5c) = *(ushort *)(param_1 + 0x5c) | 1;
    iVar2 = get_or_init_ram_object_103b95ee();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  else {
    iVar2 = get_or_init_ram_object_103b95ee();
    *(int *)(param_1 + 0x50) = iVar2;
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x34))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x30),*(uint16_t *)(param_1 + 0x5c));
  }
  eventflag_clr_flg((void *)(param_1 + 0x48),0xffffffff);
  *(uint32_t *)(param_1 + 0x54) = 0;
  return;
}
