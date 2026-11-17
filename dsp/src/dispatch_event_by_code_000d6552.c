/* @k10d dispatch_event_by_code_000d6552 @ 0x000d6552
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Switches on an event code and calls a handler plus a common post-processing routine.
 * summary:
 *   Takes a single integer parameter and dispatches to one of several handler functions
 *   based on its value (0x60-0x68, 99, 100). In every case, it calls FUN_000d5b38 with the
 *   same code value after the specific handler. For code 100, it also clears bit 1 of
 *   DAT_0003f3f2 and calls copy_two_byte_value. The function returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_code_000d6552(uint32_t param_1)

{
  switch(param_1) {
  case 0x60:
    copy_capped_byte_buffer();
    FUN_000d5b38(0x60);
    break;
  case 0x61:
    copy_bytes_from_table();
    FUN_000d5b38(0x61);
    break;
  case 0x62:
    copy_buffer_with_transform();
    FUN_000d5b38(0x62);
    break;
  case 99:
    iterate_dat_table_with_callback();
    FUN_000d5b38(99);
    break;
  case 100:
    initialize_buffer_pair();
    DAT_0003f3f2 = DAT_0003f3f2 & 0xfd;
    copy_two_byte_value();
    FUN_000d5b38(100);
    break;
  case 0x65:
    call_ea000_with_3fa_zero();
    FUN_000d5b38(0x65);
    break;
  case 0x66:
    clear_state_block_and_set_defaults();
    FUN_000d5b38(0x66);
    break;
  case 0x67:
    build_variable_length_buffer();
    FUN_000d5b38(0x67);
    break;
  case 0x68:
    FUN_000d68fc();
    FUN_000d5b38(0x68);
  }
  return 0;
}
