/* @k10d call_function_from_table_000d6732 @ 0x000d6732
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Indirectly calls a function pointer selected by an index from a global table.
 * summary:
 *   The function takes an integer index, adjusts it by -0xc0, and uses it to index into the
 *   global table PTR_LAB_000fbe4c. It then calls the function pointer found at that
 *   location. No other side effects or data manipulation are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_from_table_000d6732(int param_1)

{
  (*(code *)(&PTR_LAB_000fbe4c)[param_1 + -0xc0])();
  return;
}
