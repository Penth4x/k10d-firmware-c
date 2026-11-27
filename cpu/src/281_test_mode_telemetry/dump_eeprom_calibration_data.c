/* @k10d dump_eeprom_calibration_data @ 0x105250b8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Formats and outputs EEPROM calibration data and sensor parameters to a log or debug
 *   stream.
 * summary:
 *   The function iterates through multiple sections of a data structure (likely EEPROM
 *   contents) located at offsets 0xb0, 0xc4, 0xd8, 0x140, and 0x11c. It calls virtual
 *   methods on objects within these sections to retrieve values, which are then passed to a
 *   logging helper (parse_and_store_buffered_records). It also calls specific getters
 *   (invoke_virtual_slot_two_1045d4b0, etc.) for additional parameters. The presence of the
 *   string '--- <EEPROM DUMP> ---' in the rodata confirms this is a diagnostic dump of
 *   calibration data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dump_eeprom_calibration_data(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)
{
  int iVar1;
  void *pvVar2;
  int caller_r8;
  int *piVar3;
  int caller_r10;
  int iVar4;
  int iVar5;
  short *psVar6;
  int caller_r14;
  
  *(uint32_t *)(caller_r14 + -0x20) = 0x105d8dfc/*ROM*/;
  append_bytes_to_ring_buffer(caller_r8,0x105d8dfc/*ROM*/,0);
  *(uint32_t *)(caller_r14 + -0x24) = 0x105d8e14/*ROM*/;
  append_bytes_to_ring_buffer(caller_r8,0x105d8e14/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0xc) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xb0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,caller_r10);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,caller_r10 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,caller_r10 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,caller_r10 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    caller_r10 = caller_r10 + 4;
    iVar1 = *(int *)(caller_r14 + -0xc) + -1;
    *(int *)(caller_r14 + -0xc) = iVar1;
  } while (-1 < iVar1);
  append_newline_to_buffer(caller_r8,0);
  iVar4 = 8;
  iVar1 = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xb0);
    iVar5 = *piVar3;
    *(uint32_t *)(caller_r14 + -0x38) = 0x10;
    pvVar2 = (void *)(((vtbl_entry*)(iVar5))[2].fn)((int)((vtbl_entry*)(iVar5))[2].adj + (int)piVar3,iVar4);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    psVar6 = (short *)(*piVar3 + *(int *)(caller_r14 + -0x38));
    pvVar2 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar3,iVar4 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    psVar6 = (short *)(*piVar3 + *(int *)(caller_r14 + -0x38));
    pvVar2 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar3,iVar4 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    psVar6 = (short *)(*piVar3 + *(int *)(caller_r14 + -0x38));
    pvVar2 = (void *)(**(code **)(psVar6 + 2))((int)piVar3 + (int)*psVar6,iVar4 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 4;
  } while (-1 < iVar1);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e28/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e4c/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 0;
  *(uint32_t *)(caller_r14 + -0x24) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xc4);
    (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar3))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x24) + -1;
    *(int *)(caller_r14 + -0x24) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0x40) = 8;
  *(uint32_t *)(caller_r14 + -0x20) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xc4);
    (((vtbl_entry*)(*piVar3))[2].fn)
              ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar3))[2].fn)
              ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar3))[2].fn)
              ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar3))[2].fn)
              ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    iVar1 = *(int *)(caller_r14 + -0x20) + -1;
    *(int *)(caller_r14 + -0x20) = iVar1;
  } while (-1 < iVar1);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e60/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e84/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 0;
  *(uint32_t *)(caller_r14 + -0x1c) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xd8);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x1c) + -1;
    *(int *)(caller_r14 + -0x1c) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 8;
  *(uint32_t *)(caller_r14 + -0x18) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xd8);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x18) + -1;
    *(int *)(caller_r14 + -0x18) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e98/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8eb4/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 0;
  *(uint32_t *)(caller_r14 + -0x28) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x28) + -1;
    *(int *)(caller_r14 + -0x28) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 8;
  *(uint32_t *)(caller_r14 + -0x2c) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x2c) + -1;
    *(int *)(caller_r14 + -0x2c) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 0x10;
  *(uint32_t *)(caller_r14 + -0x30) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x30) + -1;
    *(int *)(caller_r14 + -0x30) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0x44) = 0x18;
  *(uint32_t *)(caller_r14 + -0x34) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    iVar1 = *(int *)(caller_r14 + -0x34) + -1;
    *(int *)(caller_r14 + -0x34) = iVar1;
  } while (-1 < iVar1);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8ec0/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8ed8/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 0;
  *(uint32_t *)(caller_r14 + -0x14) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x11c);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x14) + -1;
    *(int *)(caller_r14 + -0x14) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  iVar1 = 8;
  *(uint32_t *)(caller_r14 + -0x10) = 1;
  do {
    piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x11c);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar1 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar1 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
    iVar1 = iVar1 + 4;
    iVar4 = *(int *)(caller_r14 + -0x10) + -1;
    *(int *)(caller_r14 + -0x10) = iVar4;
  } while (-1 < iVar4);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8eec/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f04/*ROM*/,0);
  iVar1 = *(int *)(caller_r14 + -0x3c) + 0x4b0;
  pvVar2 = (void *)invoke_virtual_slot_two_1045d4b0((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f0c/*ROM*/,0);
  pvVar2 = (void *)invoke_virtual_slot_two_1045d4ce((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f20/*ROM*/,0);
  pvVar2 = (void *)invoke_virtual_slot_two_1045d4ec((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f34/*ROM*/,0);
  pvVar2 = (void *)call_virtual_slot_two_1045d50a((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f48/*ROM*/,0);
  pvVar2 = (void *)call_virtual_slot_two_1045d528((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f5c/*ROM*/,0);
  pvVar2 = (void *)invoke_virtual_slot_two_1045d546((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f70/*ROM*/,0);
  pvVar2 = (void *)invoke_virtual_slot_two_1045d564((void*)(iVar1));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f84/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fa0/*ROM*/,0);
  pvVar2 = (void *)invoke_virtual_slot_two_104602ce((int *)(*(int *)(caller_r14 + -0x3c) + 0x10c));
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fac/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fc4/*ROM*/,0);
  piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x9c);
  iVar1 = *piVar3;
  pvVar2 = (void *)(((vtbl_entry*)(iVar1))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(iVar1))[2].adj,0);
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fd0/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fe0/*ROM*/,0);
  piVar3 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x4bc);
  pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0);
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fec/*ROM*/,0);
  pvVar2 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,8);
  parse_and_store_buffered_records(caller_r8,pvVar2,1,0);
  append_newline_to_buffer(caller_r8,0);
  return;
}
