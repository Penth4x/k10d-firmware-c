/* @k10d initialize_0x80_byte_record @ 0x10537b7c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates and initializes a 0x80-byte record structure from a global buffer, setting
 *   fields and calling a completion routine.
 * summary:
 *   Checks a global pointer (_DAT_80014980) for a valid record. If the first byte is 0x01,
 *   it calls compare_null_terminated_strings to process the data. Otherwise, it initializes
 *   the record structure by calling copy_null_terminated_string, copying 8 bytes via
 *   memcpy_bytes, and setting a parameter at offset 0x60. Finally, it calls
 *   run_sequential_update_steps to complete the initialization. Returns error codes
 *   0xfffffd9d, 0xfffffd9e, or 0xfffffda7 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_0x80_byte_record(void *dest_string,void *src_data,uint32_t param_word,int *out_record_ptr)

{
  uint32_t ret_code;
  int cmp_result;
  char *record_ptr;
  uint loop_idx;
  int byte_offset;
  uint first_non_one_idx;

  first_non_one_idx = 2;
  if (_DAT_80014980/*SDRAM*/ == 0) {
    ret_code = 0xfffffda7;
  }
  else {
    loop_idx = 0;
    byte_offset = 0;
    do {
      record_ptr = (char *)((char*)_DAT_80014980/*SDRAM*/ + byte_offset);
      *out_record_ptr = (int)record_ptr;
      if (*record_ptr == '\x01') {
        cmp_result = compare_null_terminated_strings(dest_string,record_ptr + 1);
        if (cmp_result == 0) {
          return 0xfffffd9d;
        }
      }
      else if (loop_idx < first_non_one_idx) {
        first_non_one_idx = loop_idx;
      }
      loop_idx = loop_idx + 1;
      byte_offset = byte_offset + 0x80;
    } while (loop_idx < 2);
    if (first_non_one_idx == 2) {
      ret_code = 0xfffffd9e;
    }
    else {
      *out_record_ptr = (uintptr_t)((char*)_DAT_80014980/*SDRAM*/ + first_non_one_idx * 0x80);
      copy_null_terminated_string((void *)(*out_record_ptr + 1),dest_string);
      *(short *)(*out_record_ptr + 10) = (short)first_non_one_idx;
      memcpy_bytes((void *)(*out_record_ptr + 0x58),src_data,8);
      *(uint32_t *)(*out_record_ptr + 0x60) = param_word;
      ret_code = run_sequential_update_steps((char *)(*out_record_ptr));
    }
  }
  return ret_code;
}
