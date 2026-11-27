/* @k10d telemetry_dump_ae @ 0x10524ce0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dump_ae_lens_strobe_telemetry)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Serializes AE, lens, and strobe state properties into a telemetry dump stream.
 * summary:
 *   The function iterates through multiple sections of a state object (offsets 0x30, 0x7c,
 *   0xb0, 0xc4, 0xd8, 0x140, 0x11c) and calls virtual getters to retrieve property values.
 *   It writes these values, along with section headers from 0x105d8d30, into a stream using
 *   parse_and_store_buffered_records. It also calls a series of helper functions
 *   (invoke_virtual_slot_two_1045d4b0 through invoke_virtual_slot_two_1045d564) to dump
 *   additional data blocks, consistent with an AE/Lens/Strobe telemetry dump.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* AE INFO / STROBE INFO / LENS INFO dump block start (telemetry family through 0x10525970). AF INFO
   section: [state+0xec] props 0/3/8/9/0xa/0xb/0xc/0xd. */

void telemetry_dump_ae(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)
{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int caller_r8;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int caller_r14;
  
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d30/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d48/*ROM*/,0);
  piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x30);
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,1);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d58/*ROM*/,0);
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,8);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d64/*ROM*/,0);
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,10);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d6c/*ROM*/,0);
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,0xc);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d74/*ROM*/,0);
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)piVar5 + (int)*psVar6,0x14);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d7c/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8d94/*ROM*/,0);
  piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x7c);
  *(int **)(caller_r14 + -4) = piVar5;
  psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + *(int *)(caller_r14 + -4),0);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8da0/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + *(int *)(caller_r14 + -4),6);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8da8/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + *(int *)(caller_r14 + -4),9);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8db4/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + *(int *)(caller_r14 + -4),0xb);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8dbc/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + *(int *)(caller_r14 + -4),0x12);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8dcc/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  iVar3 = (int)*psVar6 + *(int *)(caller_r14 + -4);
  *(int *)(caller_r14 + -0x40) = iVar3;
  pvVar4 = (void *)(**(code **)(psVar6 + 2))(iVar3,0x13);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8ddc/*ROM*/,0);
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  iVar3 = (int)*psVar6 + *(int *)(caller_r14 + -4);
  *(int *)(caller_r14 + -0x44) = iVar3;
  pvVar4 = (void *)(**(code **)(psVar6 + 2))(iVar3,0x14);
  *(void **)(caller_r14 + -0x10) = pvVar4;
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  *(void **)(caller_r14 + -0x14) = &DAT_105d8dec/*ROM*/;
  append_bytes_to_ring_buffer(caller_r8,0x105d8dec/*ROM*/,0);
  iVar3 = 0;
  psVar6 = (short *)(**(int **)(caller_r14 + -4) + *(int *)(caller_r14 + -8));
  *(short **)(caller_r14 + -0x34) = psVar6;
  *(int *)(caller_r14 + -0x30) = (int)*psVar6;
  *(int *)(caller_r14 + -0x2c) = *(int *)(caller_r14 + -4) + *(int *)(caller_r14 + -0x30);
  *(uint32_t *)(caller_r14 + -0x28) = 4;
  pcVar1 = *(code **)(psVar6 + 2);
  *(code **)(caller_r14 + -0x18) = pcVar1;
  pvVar4 = (void *)(*pcVar1)(*(uint32_t *)(caller_r14 + -0x2c),0x15);
  *(void **)(caller_r14 + -0x1c) = pvVar4;
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0x20) = 0x105d8dfc/*ROM*/;
  append_bytes_to_ring_buffer(caller_r8,0x105d8dfc/*ROM*/,0);
  *(uint32_t *)(caller_r14 + -0x24) = 0x105d8e14/*ROM*/;
  append_bytes_to_ring_buffer(caller_r8,0x105d8e14/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0xc) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xb0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0xc) + -1;
    *(int *)(caller_r14 + -0xc) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  iVar2 = 8;
  iVar3 = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xb0);
    iVar7 = *piVar5;
    *(uint32_t *)(caller_r14 + -0x38) = 0x10;
    pvVar4 = (void *)(((vtbl_entry*)(iVar7))[2].fn)((int)((vtbl_entry*)(iVar7))[2].adj + (int)piVar5,iVar2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -0x38));
    pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,iVar2 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -0x38));
    pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)*psVar6 + (int)piVar5,iVar2 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    psVar6 = (short *)(*piVar5 + *(int *)(caller_r14 + -0x38));
    pvVar4 = (void *)(**(code **)(psVar6 + 2))((int)piVar5 + (int)*psVar6,iVar2 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 4;
  } while (-1 < iVar3);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e28/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e4c/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 0;
  *(uint32_t *)(caller_r14 + -0x24) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xc4);
    (((vtbl_entry*)(*piVar5))[2].fn)((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar5))[2].fn)((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar5))[2].fn)((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    (((vtbl_entry*)(*piVar5))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x24) + -1;
    *(int *)(caller_r14 + -0x24) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0x40) = 8;
  *(uint32_t *)(caller_r14 + -0x20) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xc4);
    (((vtbl_entry*)(*piVar5))[2].fn)
              ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar5))[2].fn)
              ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar5))[2].fn)
              ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    (((vtbl_entry*)(*piVar5))[2].fn)
              ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,*(uint32_t *)(caller_r14 + -0x40));
    copy_stream_bytes_into_struct((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(void *)(uint32_t)param_x3);
    *(int *)(caller_r14 + -0x40) = *(int *)(caller_r14 + -0x40) + 1;
    iVar3 = *(int *)(caller_r14 + -0x20) + -1;
    *(int *)(caller_r14 + -0x20) = iVar3;
  } while (-1 < iVar3);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e60/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e84/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 0;
  *(uint32_t *)(caller_r14 + -0x1c) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xd8);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x1c) + -1;
    *(int *)(caller_r14 + -0x1c) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 8;
  *(uint32_t *)(caller_r14 + -0x18) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0xd8);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x18) + -1;
    *(int *)(caller_r14 + -0x18) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8e98/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8eb4/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 0;
  *(uint32_t *)(caller_r14 + -0x28) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x28) + -1;
    *(int *)(caller_r14 + -0x28) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 8;
  *(uint32_t *)(caller_r14 + -0x2c) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x2c) + -1;
    *(int *)(caller_r14 + -0x2c) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 0x10;
  *(uint32_t *)(caller_r14 + -0x30) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x30) + -1;
    *(int *)(caller_r14 + -0x30) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  *(uint32_t *)(caller_r14 + -0x44) = 0x18;
  *(uint32_t *)(caller_r14 + -0x34) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x140);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,
                                *(uint32_t *)(caller_r14 + -0x44));
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    *(int *)(caller_r14 + -0x44) = *(int *)(caller_r14 + -0x44) + 1;
    iVar3 = *(int *)(caller_r14 + -0x34) + -1;
    *(int *)(caller_r14 + -0x34) = iVar3;
  } while (-1 < iVar3);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8ec0/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8ed8/*ROM*/,0);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 0;
  *(uint32_t *)(caller_r14 + -0x14) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x11c);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x14) + -1;
    *(int *)(caller_r14 + -0x14) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  iVar3 = 8;
  *(uint32_t *)(caller_r14 + -0x10) = 1;
  do {
    piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x11c);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 1);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,iVar3 + 2);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)
                               ((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,iVar3 + 3);
    parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
    iVar3 = iVar3 + 4;
    iVar2 = *(int *)(caller_r14 + -0x10) + -1;
    *(int *)(caller_r14 + -0x10) = iVar2;
  } while (-1 < iVar2);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8eec/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f04/*ROM*/,0);
  iVar3 = *(int *)(caller_r14 + -0x3c) + 0x4b0;
  pvVar4 = (void *)invoke_virtual_slot_two_1045d4b0((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f0c/*ROM*/,0);
  pvVar4 = (void *)invoke_virtual_slot_two_1045d4ce((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f20/*ROM*/,0);
  pvVar4 = (void *)invoke_virtual_slot_two_1045d4ec((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f34/*ROM*/,0);
  pvVar4 = (void *)call_virtual_slot_two_1045d50a((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f48/*ROM*/,0);
  pvVar4 = (void *)call_virtual_slot_two_1045d528((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f5c/*ROM*/,0);
  pvVar4 = (void *)invoke_virtual_slot_two_1045d546((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f70/*ROM*/,0);
  pvVar4 = (void *)invoke_virtual_slot_two_1045d564((void*)(iVar3));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8f84/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fa0/*ROM*/,0);
  pvVar4 = (void *)invoke_virtual_slot_two_104602ce((int *)(*(int *)(caller_r14 + -0x3c) + 0x10c));
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fac/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fc4/*ROM*/,0);
  piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x9c);
  iVar3 = *piVar5;
  pvVar4 = (void *)(((vtbl_entry*)(iVar3))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fd0/*ROM*/,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fe0/*ROM*/,0);
  piVar5 = (int *)(*(int *)(caller_r14 + -0x3c) + 0x4bc);
  pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)((int)((vtbl_entry*)(*piVar5))[2].adj + (int)piVar5,0);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  append_bytes_to_ring_buffer(caller_r8,0x105d8fec/*ROM*/,0);
  pvVar4 = (void *)(((vtbl_entry*)(*piVar5))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,8);
  parse_and_store_buffered_records(caller_r8,pvVar4,1,0);
  append_newline_to_buffer(caller_r8,0);
  return;
}
