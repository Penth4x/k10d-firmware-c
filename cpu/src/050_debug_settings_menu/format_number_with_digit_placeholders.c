/* @k10d format_number_with_digit_placeholders @ 0x103b1dec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Selects a format string and digit parameters based on the magnitude of param_2 before
 *   calling a formatting routine.
 * summary:
 *   The function branches on the value of param_2 to choose one of four base addresses in
 *   DAT_10565f20..DAT_10565f34 and computes quotient/remainder values for param_3. It then
 *   passes these to format_string_to_buffer_10545140, which likely performs the actual
 *   string formatting or display update. The logic handles single-digit, two-digit, and
 *   larger numeric ranges, suggesting it prepares a numeric display value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_number_with_digit_placeholders(void *param_1,void *param_2,uint8_t *param_3)

{
  char *pcVar1;
  uint8_t *puVar2;
  
  puVar2 = param_3;
  if ((int)param_2 < 1) {
    pcVar1 = &DAT_10565f20/*ROM*/;
  }
  else if ((int)param_2 < 100) {
    pcVar1 = &DAT_10565f28/*ROM*/;
    puVar2 = (uint8_t *)((int)param_2 / 10);
    param_2 = (void *)((int)param_2 % 10);
  }
  else if ((int)param_2 < 0x2707) {
    pcVar1 = &DAT_10565f30/*ROM*/;
    puVar2 = (uint8_t *)((int)param_2 / 10);
  }
  else {
    pcVar1 = &DAT_10565f34/*ROM*/;
  }
  format_string_to_buffer_10545140(param_3,pcVar1,puVar2,param_2);
  return;
}
