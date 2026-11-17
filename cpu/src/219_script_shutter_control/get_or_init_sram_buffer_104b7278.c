/* @k10d get_or_init_sram_buffer_104b7278 @ 0x104b7278
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Returns a fixed SDRAM address, initializing it once via two unknown callees on first
 *   call.
 * summary:
 *   Checks the global iRam800495bc; if zero, sets it to 1 and calls
 *   alloc_and_init_0x48_object(0x80049574) and prepend_to_singly_linked_list(0x80010764).
 *   Always returns the constant 0x80049574. The two callees are unnamed, so the specific
 *   subsystem (e.g., image pipeline, metering) cannot be determined from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_init_sram_buffer_104b7278(void)

{
  if (iRam800495bc == 0) {
    iRam800495bc = 1;
    alloc_and_init_0x48_object(0x80049574/*SDRAM*/);
    prepend_to_singly_linked_list((void*)0x80010764/*SDRAM*/);
  }
  return 0x80049574/*SDRAM*/;
}
