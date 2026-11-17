/* @k10d dispatch_virtual_slot_six @ 0x1047159e
 * name: model (proposed by the local model from the decompile, confidence 0.92)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of ~30 handler functions based on a case index passed as the second
 *   argument.
 * summary:
 *   First calls dispatch_actuator_drive_command with a fixed set of parameters including
 *   the address 0x105a9b5c. Then switches on param_2 (cast to a pointer) and calls a unique
 *   handler function for each case value from 0x0 to 0x1f, with cases 0x10 and 0x11 being
 *   no-ops. The caller is identified as virtual method slot 6 of class cls_105a9ac8,
 *   confirming this is a virtual dispatch implementation. No camera-specific subsystem is
 *   identifiable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_six(int param_1,void *param_2)

{
  dispatch_actuator_drive_command(param_1,5,2,(void *)0x105a9b5c/*ROM*/,6,0xff,'\0');
  switch ((uintptr_t)param_2) {
  case 0x0:
    release_object_at_offset_0x2c_104718e2(param_1);
    break;
  case 0x1:
    issue_sequential_command_updates(param_1);
    break;
  case 0x2:
    write_two_config_records_10471eae(param_1);
    break;
  case 0x3:
    report_status_with_optional_lookup(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    break;
  case 0x4:
    write_two_config_entries_1047203c(param_1);
    break;
  case 0x5:
    write_two_config_entries_10471fe2(param_1);
    break;
  case 0x6:
    write_two_config_records_10471f08(param_1);
    break;
  case 0x7:
    send_two_config_blocks_10471f74(param_1);
    break;
  case 0x8:
    write_two_config_entries_1047230c(param_1);
    break;
  case 0x9:
    write_two_config_records_104722b2(param_1);
    break;
  case 0xa:
    write_two_config_entries_104721fe(param_1);
    break;
  case 0xb:
    write_two_config_entries_10472258(param_1);
    break;
  case 0xc:
    write_two_config_records_10472096(param_1);
    break;
  case 0xd:
    write_two_config_entries_104720f0(param_1);
    break;
  case 0xe:
    write_two_config_entries_104721a4(param_1);
    break;
  case 0xf:
    write_two_config_records_1047214a(param_1);
    break;
  case 0x10:
  case 0x11:
    break;
  case 0x12:
    send_two_config_packets_104728ce(param_1);
    break;
  case 0x13:
    send_two_config_blocks_and_compare(param_1);
    break;
  case 0x14:
    write_two_config_records_10472660(param_1);
    break;
  case 0x15:
    send_two_config_blocks_104726c0(param_1);
    break;
  case 0x16:
    send_two_config_packets_10472824(param_1);
    break;
  case 0x17:
    send_two_config_blocks_1047276a(param_1);
    break;
  case 0x18:
    write_two_config_entries_10472366(param_1);
    break;
  case 0x19:
    write_two_config_entries_104723c0(param_1);
    break;
  case 0x1a:
    write_two_config_entries_10472480(param_1);
    break;
  case 0x1b:
    write_two_config_records_10472420(param_1);
    break;
  case 0x1c:
    write_two_config_entries_10472600(param_1);
    break;
  case 0x1d:
    write_two_config_records_104725a0(param_1);
    break;
  case 0x1e:
    write_two_config_entries_104724e0(param_1);
    break;
  case 0x1f:
    write_two_config_records_10472540(param_1);
    break;
  default:
  }
  return;
}
