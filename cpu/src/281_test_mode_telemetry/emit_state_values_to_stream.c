/* @k10d emit_state_values_to_stream @ 0x105248f2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Iterates through sub-objects in a state structure and emits their values to a target
 *   object via helper functions.
 * summary:
 *   The function checks a flag at param_2+0x40 and, if set, iterates through multiple sub-
 *   objects within param_3 (at offsets 0x1c, 0x30, 0x7c, 0xb0, 0xc4, 0xd8, 0x11c, 0x140,
 *   etc.). It calls virtual methods on these sub-objects to extract values and passes them
 *   to parse_and_store_buffered_records and copy_stream_bytes_into_struct. It also calls
 *   specific getter functions (invoke_virtual_slot_two_1045d4b0, etc.) on a sub-object at
 *   param_3+0x4b0. The pattern suggests serializing or transmitting a large state structure
 *   to a destination object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void emit_state_values_to_stream(uint32_t param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_4c;
  int iStack_48;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*(char *)(param_2 + 0x40) != '\0') {
    append_bytes_to_ring_buffer(param_2,0x105d8c30/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c44/*ROM*/,0);
    piVar3 = (int *)(param_3 + 0x1c);
    pvVar1 = (void *)get_TVD(piVar3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c4c/*ROM*/,0);
    pvVar1 = (void *)get_AVD(piVar3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c54/*ROM*/,0);
    pvVar1 = (void *)get_SVD(piVar3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c5c/*ROM*/,0);
    pvVar1 = (void *)get_XVD(piVar3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c64/*ROM*/,0);
    pvVar1 = (void *)get_AEB_XVD(piVar3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c74/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,4);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c80/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8c94/*ROM*/,0);
    piVar3 = (int *)(param_3 + 0xec);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8ca4/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,3);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8cb8/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,8);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8cc8/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,9);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8cd4/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,10)
    ;
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8cec/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xb);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8cf8/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xc);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d0c/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xd);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d1c/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,0xe);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d30/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d48/*ROM*/,0);
    piVar3 = (int *)(param_3 + 0x30);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,1);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d58/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,8);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d64/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,10)
    ;
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d6c/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xc);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d74/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,0x14);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d7c/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8d94/*ROM*/,0);
    piVar3 = (int *)(param_3 + 0x7c);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8da0/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,6);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8da8/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,9);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8db4/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0xb);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8dbc/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0x12);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8dcc/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0x13);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8ddc/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0x14);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8dec/*ROM*/,0);
    iVar4 = 0;
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                               ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,0x15);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8dfc/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e14/*ROM*/,0);
    append_newline_to_buffer(param_2,0);
    iStack_14 = 1;
    do {
      piVar3 = (int *)(param_3 + 0xb0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_14 = iStack_14 + -1;
    } while (-1 < iStack_14);
    append_newline_to_buffer(param_2,0);
    iVar5 = 8;
    iVar4 = 1;
    do {
      piVar3 = (int *)(param_3 + 0xb0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar5);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar5 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar5 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar5 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 4;
    } while (-1 < iVar4);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e28/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e4c/*ROM*/,0);
    append_newline_to_buffer(param_2,0);
    iVar4 = 0;
    iStack_2c = 1;
    do {
      piVar3 = (int *)(param_3 + 0xc4);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1)
      ;
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2)
      ;
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3)
      ;
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      iVar4 = iVar4 + 4;
      iStack_2c = iStack_2c + -1;
    } while (-1 < iStack_2c);
    append_newline_to_buffer(param_2,0);
    iStack_48 = 8;
    iStack_28 = 1;
    do {
      piVar3 = (int *)(param_3 + 0xc4);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_48)
      ;
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)
                        ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_48 + 1);
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)
                        ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_48 + 2);
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)
                        ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iStack_48 + 3);
      copy_stream_bytes_into_struct(param_2,(void*)(uVar2),0,0);
      iStack_48 = iStack_48 + 4;
      iStack_28 = iStack_28 + -1;
    } while (-1 < iStack_28);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e60/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e84/*ROM*/,0);
    append_newline_to_buffer(param_2,0);
    iVar4 = 0;
    iStack_24 = 1;
    do {
      piVar3 = (int *)(param_3 + 0xd8);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_24 = iStack_24 + -1;
    } while (-1 < iStack_24);
    append_newline_to_buffer(param_2,0);
    iVar4 = 8;
    iStack_20 = 1;
    do {
      piVar3 = (int *)(param_3 + 0xd8);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_20 = iStack_20 + -1;
    } while (-1 < iStack_20);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8e98/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8eb4/*ROM*/,0);
    append_newline_to_buffer(param_2,0);
    iVar4 = 0;
    iStack_30 = 1;
    do {
      piVar3 = (int *)(param_3 + 0x140);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_30 = iStack_30 + -1;
    } while (-1 < iStack_30);
    append_newline_to_buffer(param_2,0);
    iVar4 = 8;
    iStack_34 = 1;
    do {
      piVar3 = (int *)(param_3 + 0x140);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_34 = iStack_34 + -1;
    } while (-1 < iStack_34);
    append_newline_to_buffer(param_2,0);
    iVar4 = 0x10;
    iStack_38 = 1;
    do {
      piVar3 = (int *)(param_3 + 0x140);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_38 = iStack_38 + -1;
    } while (-1 < iStack_38);
    append_newline_to_buffer(param_2,0);
    iStack_4c = 0x18;
    iStack_3c = 1;
    do {
      piVar3 = (int *)(param_3 + 0x140);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_4c);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_4c + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iStack_4c + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iStack_4c + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iStack_4c = iStack_4c + 4;
      iStack_3c = iStack_3c + -1;
    } while (-1 < iStack_3c);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8ec0/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8ed8/*ROM*/,0);
    append_newline_to_buffer(param_2,0);
    iVar4 = 0;
    iStack_1c = 1;
    do {
      piVar3 = (int *)(param_3 + 0x11c);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_1c = iStack_1c + -1;
    } while (-1 < iStack_1c);
    append_newline_to_buffer(param_2,0);
    iVar4 = 8;
    iStack_18 = 1;
    do {
      piVar3 = (int *)(param_3 + 0x11c);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 1);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,iVar4 + 2);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)
                                 ((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,iVar4 + 3);
      parse_and_store_buffered_records(param_2,pvVar1,1,0);
      iVar4 = iVar4 + 4;
      iStack_18 = iStack_18 + -1;
    } while (-1 < iStack_18);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8eec/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f04/*ROM*/,0);
    iVar4 = param_3 + 0x4b0;
    pvVar1 = (void *)invoke_virtual_slot_two_1045d4b0((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f0c/*ROM*/,0);
    pvVar1 = (void *)invoke_virtual_slot_two_1045d4ce((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f20/*ROM*/,0);
    pvVar1 = (void *)invoke_virtual_slot_two_1045d4ec((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f34/*ROM*/,0);
    pvVar1 = (void *)call_virtual_slot_two_1045d50a((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f48/*ROM*/,0);
    pvVar1 = (void *)call_virtual_slot_two_1045d528((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f5c/*ROM*/,0);
    pvVar1 = (void *)invoke_virtual_slot_two_1045d546((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f70/*ROM*/,0);
    pvVar1 = (void *)invoke_virtual_slot_two_1045d564((void*)(iVar4));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8f84/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fa0/*ROM*/,0);
    pvVar1 = (void *)invoke_virtual_slot_two_104602ce((int *)(param_3 + 0x10c));
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fac/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fc4/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x9c);
    pvVar1 = (void *)(((vtbl_entry*)(iVar4))[2].fn)(param_3 + 0x9c + (int)((vtbl_entry*)(iVar4))[2].adj,0);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fd0/*ROM*/,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fe0/*ROM*/,0);
    piVar3 = (int *)(param_3 + 0x4bc);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)((vtbl_entry*)(*piVar3))[2].adj + (int)piVar3,0);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d8fec/*ROM*/,0);
    pvVar1 = (void *)(((vtbl_entry*)(*piVar3))[2].fn)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj,8);
    parse_and_store_buffered_records(param_2,pvVar1,1,0);
    append_newline_to_buffer(param_2,0);
  }
  return;
}
