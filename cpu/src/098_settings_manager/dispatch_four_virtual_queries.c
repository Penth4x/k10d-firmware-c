/* @k10d dispatch_four_virtual_queries @ 0x10421488
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 098_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four virtual methods on an object and logs their results to a debug stream.
 * summary:
 *   The function performs four sequential virtual calls using method pointers stored at
 *   offsets 0xe4, 0xe4, 0xec, and 0xec within a sub-object. It passes a stack-allocated
 *   structure as an output parameter to each call. After each call, if a debug flag is set,
 *   it writes a header string and the four returned values to a logging interface via
 *   helper functions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_four_virtual_queries(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uintptr_t sp;
  ushort **ppuVar5;
  ushort *puStack_38;
  uint8_t uStack_31;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  ppuVar5 = &puStack_38;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  uStack_31 = 1;
  puStack_38 = &uStack_a;
  (((vtbl_entry*)(iVar2))[28].fn)
            (*(int *)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[28].adj,&uStack_10,&uStack_e,&uStack_c
            );
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d428/*ROM*/,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_10,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_e,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_c,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_a,1,0);
    append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d43c/*ROM*/,0);
    if ((uStack_e & 0x200) == 0) {
      iVar2 = 0x1059d454/*ROM*/;
    }
    else {
      iVar2 = 0x1059d44c/*ROM*/;
    }
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),iVar2,0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d458/*ROM*/,0);
    if ((uStack_e & 0x400) == 0) {
      iVar2 = 0x1059d470/*ROM*/;
    }
    else {
      iVar2 = 0x1059d468/*ROM*/;
    }
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),iVar2,0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d474/*ROM*/,0);
    if ((uStack_c & 0x10) == 0) {
      append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d490/*ROM*/,0);
    }
    else {
      append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d488/*ROM*/,0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 4);
  sVar1 = *(short *)(iVar3 + 0xe0);
  pcVar4 = *(code **)(iVar3 + 0xe4);
  *ppuVar5 = &uStack_a;
  *(uint8_t *)((int)ppuVar5 + 7) = 0;
  (*pcVar4)(iVar2 + sVar1,&uStack_10,&uStack_e,&uStack_c);
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d494/*ROM*/,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_10,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_e,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_c,1,0);
    parse_and_store_buffered_records(*(int *)(param_1 + 0xf4),(void *)(uint)uStack_a,1,0);
    append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d4a8/*ROM*/,0);
    if ((uStack_e & 0x200) == 0) {
      iVar2 = 0x1059d4c0/*ROM*/;
    }
    else {
      iVar2 = 0x1059d4b8/*ROM*/;
    }
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),iVar2,0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d4c4/*ROM*/,0);
    if ((uStack_e & 0x400) == 0) {
      iVar2 = 0x1059d4dc/*ROM*/;
    }
    else {
      iVar2 = 0x1059d4d4/*ROM*/;
    }
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),iVar2,0);
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d4e0/*ROM*/,0);
    if ((uStack_c & 0x10) == 0) {
      append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d4fc/*ROM*/,0);
    }
    else {
      append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d4f4/*ROM*/,0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 4);
  sVar1 = *(short *)(iVar3 + 0xe8);
  pcVar4 = *(code **)(iVar3 + 0xec);
  *ppuVar5 = &uStack_a;
  *(uint8_t *)((int)ppuVar5 + 7) = 1;
  (*pcVar4)(iVar2 + sVar1,&uStack_10,&uStack_e,&uStack_c);
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d500/*ROM*/,0);
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_10),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_e),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_c),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_a),(int)(1),(void *)(0));
    append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 4);
  sVar1 = *(short *)(iVar3 + 0xe8);
  pcVar4 = *(code **)(iVar3 + 0xec);
  *ppuVar5 = &uStack_a;
  *(uint8_t *)((int)ppuVar5 + 7) = 0;
  (*pcVar4)(iVar2 + sVar1,&uStack_10,&uStack_e,&uStack_c);
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
    append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d50c/*ROM*/,0);
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_10),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_e),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_c),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(*(uint32_t *)(param_1 + 0xf4)),(void *)(uStack_a),(int)(1),(void *)(0));
    append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
  }
  return;
}
