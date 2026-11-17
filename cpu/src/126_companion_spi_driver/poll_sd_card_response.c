/* @k10d poll_sd_card_response @ 0x1044a086
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls an SD card for a response, retrying up to 200 times and issuing an APP_CMD reset
 *   on failure.
 * summary:
 *   The function initializes a local context via init_four_byte_struct and conditionally
 *   calls setup routines based on flags at param_1+0xf2 and param_1+0xf4. It enters a loop
 *   that calls return_r4_passthrough_1044b8ce and p67_query_check to check for a response;
 *   if not found, it calls write_buffer_via_virtual_io and sd_cmd55_app_cmd(param_1, 0) to
 *   send an APP_CMD (likely ACMD41 or similar initialization) before decrementing a
 *   200-iteration counter. On success or timeout, it updates state at param_1+0xf6 and
 *   param_1+0x120, and calls free_heap_if_flagged_1044b898 to finalize the context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool poll_sd_card_response(void *param_1)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t uVar4;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  init_four_byte_struct(auStack_c);
  if ((*(ushort *)((int)param_1 + 0xf2) & 1) != 0) {
    set_two_byte_flags(auStack_c);
  }
  if ((*(ushort *)((int)param_1 + 0xf2) & 2) != 0) {
    (*(code *)0x1044b956/*ROM*/)(auStack_c,1);
  }
  if (*(short *)((int)param_1 + 0xf4) == 1) {
    set_byte_bit6(auStack_c,1);
  }
  sVar1 = 200;
  while( true ) {
    uVar2 = return_r4_passthrough_1044b8ce();
    iVar3 = p67_query_check(param_1,(void *)uVar2);
    if ((iVar3 != 0) && (iVar3 = test_bit_7_of_byte((void *)((int)param_1 + 0x161)), iVar3 != 0)) break;
    write_buffer_via_virtual_io(param_1,5);
    sd_cmd55_app_cmd(param_1,0);
    sVar1 = sVar1 + -1;
    if (sVar1 == 0) {
LAB_1044a144:
      if (sVar1 == 0) {
        *(uint32_t *)((int)param_1 + 0x120) = 3;
      }
      free_heap_if_flagged_1044b898(auStack_c,2);
      return sVar1 != 0;
    }
  }
  uVar4 = test_bit_6_of_byte((void *)((int)param_1 + 0x161));
  *(uint8_t *)((int)param_1 + 0xf6) = uVar4;
  goto LAB_1044a144;
}
