/* @k10d dispatch_event_by_type_10498d6a @ 0x10498d6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Routes an event based on its type code to one of ten handler functions.
 * summary:
 *   Checks if param_3 is zero and reads the event type from param_2. Uses a series of
 *   if/else comparisons to match the type against specific constants (e.g., 0x9003, 0x829a,
 *   0xa002). Calls the corresponding handler function, passing a pointer offset from
 *   param_1, a value from param_1, and the event data. Returns 1 if the event was
 *   processed, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10498d7a) overlaps instruction at (ram,0x10498d78)
    */

uint32_t dispatch_event_by_type_10498d6a(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint32_t uVar2;
  
  if (param_3 == 0) {
    uVar1 = *param_2;
    if (uVar1 == 0x9003) {
      check_and_copy_if_type_two(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
      uVar2 = 1;
    }
    else if (uVar1 < 0x9004) {
      if (uVar1 == 0x829a) {
        check_type_and_copy_two_values_1051e070(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x829d) {
        check_type_and_copy_two_values_1051e0ac(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x8827) {
        check_type_and_store_result(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x9000) {
        parse_two_byte_ascii_values(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x920a) {
      check_and_copy_two_values(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
      uVar2 = 1;
    }
    else if (uVar1 < 0x920b) {
      if (uVar1 == 0x9204) {
        check_and_extract_pair_values(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x9207) {
        map_mode_status_to_code(param_1 + 0x14,*(int *)(param_1 + 8),param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0xa002) {
      query_param_by_type(param_1 + 0x14,*(int **)(param_1 + 0xc),param_2);
      uVar2 = 1;
    }
    else if (uVar1 == 0xa003) {
      read_value_by_type_1051e246(param_1 + 0x14,*(int *)(param_1 + 0xc),param_2);
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
