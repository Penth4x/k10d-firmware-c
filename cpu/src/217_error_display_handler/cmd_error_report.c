/* @k10d cmd_error_report @ 0x104b54a0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed report_script_error_code)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Selects a message string based on an error code and sends it via a display/logging
 *   helper.
 * summary:
 *   The function switches on param_2 to select one of several static string pointers
 *   (DAT_105b8704 through DAT_105b8780). It calls build_and_dispatch_parameter_block twice
 *   with the selected string and a fixed set of parameters (7, 0xff, 0), then calls
 *   check_kernel_call_success_10459fea with a timeout value of 1000. The prior notes
 *   suggest these are script engine error codes, but the code itself only shows string
 *   selection and transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cmd_error_report(uint32_t *param_1,uint32_t param_2)

{
  void *puVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_14 [2];
  
  puVar2 = auStackY_14;
  switch(param_2) {
  case 0x80:
    puVar1 = &DAT_105b8704/*ROM*/;
    break;
  case 0x81:
    puVar1 = &DAT_105b8714/*ROM*/;
    break;
  case 0x82:
    puVar1 = &DAT_105b8728/*ROM*/;
    break;
  case 0x83:
    puVar1 = &DAT_105b873c/*ROM*/;
    break;
  default:
    puVar1 = &DAT_105b8770/*ROM*/;
    break;
  case 0x90:
    puVar1 = &DAT_105b8750/*ROM*/;
    break;
  case 0x91:
    puVar1 = &DAT_105b8760/*ROM*/;
  }
  build_and_dispatch_parameter_block(param_1,0,0,puVar1,7,0xff,'\0');
  *(uint16_t *)(puVar2 + 2) = 7;
  *(uint16_t *)(puVar2 + 6) = 0xff;
  puVar2[0xb] = 0;
  build_and_dispatch_parameter_block(param_1,1,0,&DAT_105b8780/*ROM*/,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6),
               puVar2[0xb]);
  check_kernel_call_success_10459fea(0x3e8);
  return;
}
