/* @k10d map_status_code_to_output @ 0x103946ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a status code via helper calls and maps the result to a specific value in the
 *   output parameter.
 * summary:
 *   The function initializes the output pointer to 0xffffffff. It performs a sequence of
 *   setup calls (get_value_from_object, add_offset_to_pointer_104df392,
 *   return_r4_passthrough_104d800e, compute_struct_offset_104d6852) and then calls a
 *   function at 0x104d730e to retrieve a status code. If the status is 1 or 2, it performs
 *   another setup sequence and calls a function at 0x104d7504 to get a specific code. This
 *   code is mapped via a switch statement to values in *param_2 (e.g., 1, 3, 10, 2, 9, 4).
 *   The function returns 1 if a mapping occurred, or 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_status_code_to_output(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *param_2 = 0xffffffff;
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  compute_struct_offset_104d6852(uVar2,1);
  (*(code *)0x104d794a/*ROM*/)();
  iVar1 = (*(code *)0x104d730e/*ROM*/)();
  if ((iVar1 == 2) || (iVar1 == 1)) {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    uVar2 = return_r4_passthrough_104d800e();
    compute_struct_offset_104d6852(uVar2,1);
    (*(code *)0x104d7952/*ROM*/)();
    uVar2 = (*(code *)0x104d7504/*ROM*/)();
    switch(uVar2) {
    case 2:
      *param_2 = 1;
      uVar2 = 1;
      break;
    default:
      *param_2 = 0;
      uVar2 = 1;
      break;
    case 6:
      *param_2 = 3;
      uVar2 = 1;
      break;
    case 7:
      *param_2 = 10;
      uVar2 = 1;
      break;
    case 10:
      *param_2 = 2;
      uVar2 = 1;
      break;
    case 0xb:
      *param_2 = 9;
      uVar2 = 1;
      break;
    case 0x11:
      iVar1 = get_value_from_object();
      add_offset_to_pointer_104df392(iVar1);
      uVar2 = return_r4_passthrough_104d800e();
      compute_struct_offset_104d6852(uVar2,1);
      return_r4_passthrough_104d7940();
      iVar1 = read_first_word_104d70e8((uint32_t *)(uint32_t)param_1);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
      else {
        *param_2 = 0;
        uVar2 = 1;
      }
      break;
    case 0x17:
    case 0x18:
    case 0x19:
      *param_2 = 4;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
