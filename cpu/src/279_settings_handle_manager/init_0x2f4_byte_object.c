/* @k10d init_0x2f4_byte_object @ 0x105210a8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Allocates or reuses a 0x2f4-byte object, zero-initializes its tail fields, and calls a
 *   secondary initializer.
 * summary:
 *   The function accepts an optional pointer; if NULL, it heap-allocates 0x2f4 bytes. It
 *   then writes specific default values to offsets 0x224 through 0x2f0 (mostly zeros, with
 *   0xffff at 0x2aa-0x2b6 and 0x3002 at 0x2bc). Finally, it calls
 *   init_struct_with_two_buffers with the object pointer and returns the pointer. The
 *   callers are various class constructors, suggesting this is a base-class or shared
 *   initialization routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_0x2f4_byte_object(void *param_1)

{
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)0x2f4), param_1 != 0)) {
    *(uint32_t *)((int)param_1 + 0x224) = 0;
    *(uint16_t *)((int)param_1 + 0x2aa) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2ac) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2ae) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2b0) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2b2) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2b4) = 0xffff;
    *(uint16_t *)((int)param_1 + 0x2b6) = 0xffff;
    *(uint32_t *)((int)param_1 + 0x2b8) = 0;
    *(uint16_t *)((int)param_1 + 700) = 0x3002;
    *(uint16_t *)((int)param_1 + 0x2be) = 0;
    *(uint32_t *)((int)param_1 + 0x2c0) = 0;
    *(uint16_t *)((int)param_1 + 0x2c4) = 0;
    *(uint32_t *)((int)param_1 + 0x2c8) = 0;
    *(uint32_t *)((int)param_1 + 0x2cc) = 0;
    *(uint32_t *)((int)param_1 + 0x2d0) = 0;
    *(uint32_t *)((int)param_1 + 0x2d4) = 0;
    *(uint32_t *)((int)param_1 + 0x2d8) = 0;
    *(uint32_t *)((int)param_1 + 0x2dc) = 0;
    *(uint32_t *)((int)param_1 + 0x2e0) = 0;
    *(uint16_t *)((int)param_1 + 0x2e4) = 0;
    *(uint32_t *)((int)param_1 + 0x2e8) = 0;
    *(uint32_t *)((int)param_1 + 0x2ec) = 0;
    *(uint32_t *)((int)param_1 + 0x2f0) = 0;
    init_struct_with_two_buffers(param_1);
  }
  return (int)param_1;
}
