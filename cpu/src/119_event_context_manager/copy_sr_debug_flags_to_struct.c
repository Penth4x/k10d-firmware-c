/* @k10d copy_sr_debug_flags_to_struct @ 0x10433c78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads five boolean flags from an object and stores them into consecutive bytes of the
 *   caller's structure.
 * summary:
 *   The function retrieves a pointer via return_sram_address_10435ae4 and calls five
 *   accessor functions (debug_flag_reader_0x08, debug_flag_reader_0x0c,
 *   check_magic_at_offset_0xc, check_magic_at_offset_0x10, debug_flag_writer_0x18) to get
 *   boolean values. It writes these values to offsets 0x14 through 0x18 of the structure
 *   pointed to by param_1. It also calls sr_driver_singleton and module_array_getter with a
 *   constant argument of 3, likely for logging or state management, but the specific
 *   subsystem (e.g., AE, AF) is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sr_debug_flags_to_struct(void *param_1)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),3);
  pvVar2 = (void *)return_sram_address_10435ae4();
  bVar3 = debug_flag_reader_0x08(pvVar2);
  *(bool *)((int)param_1 + 0x14) = bVar3;
  bVar3 = debug_flag_reader_0x0c(pvVar2);
  *(bool *)((int)param_1 + 0x15) = bVar3;
  bVar3 = check_magic_at_offset_0xc(pvVar2);
  *(bool *)((int)param_1 + 0x16) = bVar3;
  bVar3 = check_magic_at_offset_0x10(pvVar2);
  *(bool *)((int)param_1 + 0x17) = bVar3;
  bVar3 = debug_flag_writer_0x18(pvVar2);
  *(bool *)((int)param_1 + 0x18) = bVar3;
  return;
}
