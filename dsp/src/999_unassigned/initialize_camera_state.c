/* @k10d initialize_camera_state @ 0x000e41d4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Resets multiple global state variables and configures hardware registers to prepare the
 *   camera for operation.
 * summary:
 *   The function performs a comprehensive initialization sequence by clearing various
 *   status flags in global memory (e.g., DAT_0003c081, DAT_00000126) and manipulating
 *   bitfields in control registers (e.g., DAT_00000408, _DAT_00000008). It calls helper
 *   functions like write_byte_to_ram_and_call_two_routines and
 *   write_masked_field_and_call_two_routines to configure specific hardware channels or
 *   modes, and includes a conditional loop that adjusts state based on flags in
 *   DAT_0003c066 and DAT_0003c030. The function concludes by setting final state values in
 *   DAT_00000401 and DAT_00000501.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_camera_state(void)

{
  clear_status_bits_and_dispatch();
  DAT_0003c081 = 0;
  dispatch_on_flag_bits_000e7846();
  DAT_00000126 = 0;
  DAT_0000012e = 0;
  DAT_00000136 = 0;
  DAT_00000408 = DAT_00000408 | 0x38;
  _DAT_00000008 = CONCAT13((char)_DAT_00000008,_DAT_00000009) & 0xc7feefff;
  _DAT_00000008 = _DAT_00000008 | 0x1000000;
  write_byte_to_ram_and_call_two_routines(6,0x40);
  write_byte_to_ram_and_call_two_routines(8,0xff);
  write_byte_to_ram_and_call_two_routines(9,0x7f);
  DAT_0003c006 = DAT_0003c006 & 0x7f;
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006);
  FUN_000d5642(5);
  _DAT_00000008 = _DAT_00000008 & 0xfffff7ff;
  DAT_0003c00b = DAT_0003c00b & 0xf1;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  FUN_000d5642(5);
  DAT_00000400 = 0xff;
  DAT_00000420 = 0;
  DAT_0003c02f = 0;
  DAT_0003c060 = 1;
  DAT_0003c067 = DAT_0003c067 & 0xfe;
  if ((DAT_0003c021 & 0x80) != 0) {
    DAT_0000000d = DAT_0000000d & 0xfe;
  }
  _DAT_00000008 = _DAT_00000008 & 0xff1fffff;
  uRam00000000 = 0x60;
  DAT_00000501 = DAT_00000501 | 0x24;
  DAT_00000401 = DAT_00000401 & 0xdb;
  call_d5678_with_0x14();
  if ((_DAT_00000001 & 0x4000000) != 0) {
    clear_status_flag_bits_000e63c2();
    DAT_0003c067 = DAT_0003c067 & 0xef;
  }
  if ((DAT_0003c030 & 0x20) == 0) {
    DAT_0003c032 = DAT_0003c032 & 0xdf;
  }
  else {
    DAT_0003c032 = DAT_0003c032 | 0x20;
  }
  if ((_DAT_00000001 & 0x3f) >> 5 == 0) {
    DAT_0003c030 = DAT_0003c030 & 0xdf;
  }
  else {
    DAT_0003c030 = DAT_0003c030 | 0x20;
  }
  if (((_DAT_00000001 & 0x4000000) == 0) && ((DAT_0003c066 & 0x10) != 0)) {
    while( true ) {
      DAT_0000048c = DAT_0000048c | 0x40;
      DAT_0003c05d = DAT_0003c05d | 8;
      dispatch_on_flag_bits_000e7846();
      DAT_00000481 = 0x91;
      DAT_0000048c = DAT_0000048c & 0xbf;
      DAT_00000401 = DAT_00000401 & 0xda;
      DAT_00000501 = DAT_00000501 | 0x25;
      write_masked_field_and_call_two_routines(6,1);
      call_d5678_with_0x14();
      if ((DAT_0003c030 & 4) == 0) {
        DAT_0003c032 = DAT_0003c032 & 0xfb;
      }
      else {
        DAT_0003c032 = DAT_0003c032 | 4;
      }
      if ((_DAT_00000001 & 7) >> 2 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfb;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 4;
      }
      if ((DAT_0003c030 & 1) == 0) {
        DAT_0003c032 = DAT_0003c032 & 0xfe;
      }
      else {
        DAT_0003c032 = DAT_0003c032 | 1;
      }
      if ((_DAT_00000001 & 1) == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfe;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 1;
      }
      if ((DAT_0003c030 & 0x20) == 0) {
        DAT_0003c032 = DAT_0003c032 & 0xdf;
      }
      else {
        DAT_0003c032 = DAT_0003c032 | 0x20;
      }
      if ((_DAT_00000001 & 0x3f) >> 5 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xdf;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 0x20;
      }
      DAT_0003c03b = DAT_0003c000;
      FUN_000e2fc2(0);
      uRam00000000 = 0x60;
      DAT_00000400 = 0xff;
      DAT_00000420 = 0;
      _DAT_00000001 = CONCAT13((char)_DAT_00000001,_DAT_00000002) & 0xdaffffff;
      DAT_00000401 = DAT_00000401 | 0x25;
      DAT_00000501 = DAT_00000501 & 0xda;
      write_masked_field_and_call_two_routines(6,0);
      if (((DAT_0003c030 & 4) != 0) || ((DAT_0003c030 & 1) == 0)) {
        if ((DAT_0003c030 & 4) != 0) {
          DAT_0003c07f = DAT_0003c07f & 0xfd;
        }
        goto LAB_000e45b4;
      }
      if ((DAT_0003c000 & 0x10) == 0) {
        DAT_0003c081 = 5;
        goto LAB_000e45b4;
      }
      if ((DAT_0003c000 & 0x20) == 0) {
        DAT_0003c081 = 3;
        goto LAB_000e45b4;
      }
      if ((DAT_0003c066 & 0x20) != 0) break;
      if (((DAT_0003c032 & 0x20) == 0) || ((DAT_0003c030 & 0x20) != 0)) {
        if (((DAT_0003c032 & 0x20) == 0) && ((DAT_0003c030 & 0x20) != 0)) {
          DAT_0003c075 = DAT_0003c075 & 0xcf;
        }
      }
      else {
        DAT_0003c075 = DAT_0003c075 & 0xcf;
      }
      DAT_0000048c = DAT_0000048c & 0x7f;
    }
    DAT_0003c081 = 2;
  }
  else {
    _DAT_00000008 = _DAT_00000008 & 0xffefffff;
    if ((_DAT_00000001 & 0x20000000) == 0) {
      DAT_00000042 = 0;
      DAT_00000401 = 0x8b;
      DAT_00000501 = 0x24;
      call_d5678_with_0x14();
    }
    else {
      DAT_00000042 = 0;
      DAT_00000401 = 0x8b;
      DAT_00000501 = 0x24;
      call_d5678_with_0x14();
    }
    DAT_00000041 = 0x24;
    DAT_00000040 = 0;
    DAT_00000481 = 0x91;
    if ((_DAT_00000001 & 0x4000000) != 0) {
      FUN_000d5642(5);
      if ((_DAT_00000001 & 0x20000000) == 0) {
        DAT_0003c081 = 1;
      }
      DAT_0003c075 = DAT_0003c075 & 0xcf;
    }
  }
LAB_000e45b4:
  DAT_00000041 = 0;
  _DAT_00000001 = _DAT_00000001 & 0xffffff;
  DAT_00000501 = 0;
  DAT_00000401 = 0xaf;
  _DAT_00000008 = _DAT_00000008 | 0xf00000;
  DAT_0003c05d = DAT_0003c05d | 2;
  return;
}
