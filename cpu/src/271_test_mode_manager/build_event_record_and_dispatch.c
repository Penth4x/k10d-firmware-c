/* @k10d build_event_record_and_dispatch @ 0x10510f76
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Populates a struct at param_1+0x804 with fields from param_1+0x808-0x814 and
 *   conditionally triggers four subsystem callbacks.
 * summary:
 *   The function first performs two virtual calls (slots 2 and 3) on an object at
 *   param_1+0x8d4 if param_2 or param_3 are non-zero. It then copies four 32-bit values
 *   from offsets 0x808, 0x80c, 0x810, and 0x814 into a record at the address stored in
 *   param_1+0x804, initializing several byte fields to zero. Based on flags at
 *   param_1+0x6a4 and 0x6a5, it copies byte values from param_1+0x2a and 0x2b into the
 *   record. Finally, it checks four conditions via get_sysparam_store_byte (with indices 0,
 *   1, 0x11, and 0x13) and calls specific handlers (append_bytes_to_ring_buffer,
 *   emit_state_values_to_stream, copy_null_terminated_string, serialize_state_to_buffer) if
 *   the conditions are met, setting corresponding status bits in the record.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_event_record_and_dispatch(int param_1,int param_2,int param_3,int param_4,char param_5)

{
  uint8_t uVar3;
  uint32_t uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[33].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[33].adj + param_1,
               *(uint32_t *)(param_1 + 0x808));
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[33].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[33].adj + param_1,
               *(uint32_t *)(param_1 + 0x810));
  }
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x2c) != '\0') {
      *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
    }
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[35].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[35].adj + param_1,
               *(uint32_t *)(param_1 + 0x80c));
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[35].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[35].adj + param_1,
               *(uint32_t *)(param_1 + 0x814));
  }
  **(uint32_t **)(param_1 + 0x804) = *(uint32_t *)(param_1 + 0x808);
  *(uint32_t *)(*(int *)(param_1 + 0x804) + 4) = *(uint32_t *)(param_1 + 0x80c);
  *(uint32_t *)(*(int *)(param_1 + 0x804) + 0xc) = *(uint32_t *)(param_1 + 0x810);
  *(uint32_t *)(*(int *)(param_1 + 0x804) + 0x10) = *(uint32_t *)(param_1 + 0x814);
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 8) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 9) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x14) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x15) = 0;
  if (*(char *)(param_1 + 0x6a4) != '\0') {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint8_t *)(param_1 + 0x2a);
    }
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 8) = uVar3;
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint8_t *)(param_1 + 0x2b);
    }
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 9) = uVar3;
  }
  if (*(char *)(param_1 + 0x6a5) != '\0') {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint8_t *)(param_1 + 0x2a);
    }
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x14) = uVar3;
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint8_t *)(param_1 + 0x2b);
    }
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x15) = uVar3;
  }
  if (param_4 == 0) {
    if (param_5 != '\0') {
      *(uint8_t *)(*(int *)(param_1 + 0x804) + 8) = 1;
      *(uint8_t *)(*(int *)(param_1 + 0x804) + 9) = 0;
      **(uint32_t **)(param_1 + 0x808) = 6;
    }
  }
  else {
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 8) = 1;
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 9) = 0;
    **(uint32_t **)(param_1 + 0x808) = 5;
  }
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x16) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x1c) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x1d) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x1e) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x1f) = 0;
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((uint8_t *)(uVar1),(uint32_t)(0));
  if (iVar2 != 0) {
    iVar2 = param_1 + 0x880;
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x16) = 1;
    append_bytes_to_ring_buffer(iVar2,0x105d5f34/*ROM*/,0);
    uVar1 = (*(code *)0x10511b1e/*ROM*/)(param_1);
    copy_stream_bytes_into_struct((int)(iVar2),(void *)(uVar1),(int)(1),(void *)(0));
    append_newline_to_buffer(iVar2,0);
  }
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((uint8_t *)(uVar1),(uint32_t)(1));
  if (iVar2 != 0) {
    uVar1 = test_mode_config_singleton();
    emit_state_values_to_stream(uVar1,param_1 + 0x880,param_1 + 0x148);
  }
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((uint8_t *)(uVar1),(uint32_t)(0x11));
  if (iVar2 != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 4) = *(uint32_t *)(param_1 + 0x34);
    **(uint32_t **)(param_1 + 0x818) = *(uint32_t *)(param_1 + 0x104);
    copy_null_terminated_string((void *)(*(int *)(param_1 + 0x818) + 8),(void *)0x105d5f54/*ROM*/);
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 0x5c) = 0;
    *(uint32_t *)(*(int *)(param_1 + 0x818) + 0x58) = 0;
    *(uint8_t *)(*(int *)(param_1 + 0x804) + 0x1c) = 1;
  }
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((uint8_t *)(uVar1),(uint32_t)(0x13));
  if (iVar2 != 0) {
    uVar1 = test_mode_config_singleton();
    serialize_state_to_buffer(uVar1,param_1 + 0x880);
  }
  return;
}
