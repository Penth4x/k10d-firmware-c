/* @k10d select_entry_and_apply @ 0x000dfe60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects an entry by index from two tables into a shared global, then calls two
 *   handlers.
 * summary:
 *   The function takes an index param_1 and loads a pointer from the table at 0x000fc560
 *   into global DAT_0003c217, then calls FUN_000dfd7e. It then loads a pointer from the
 *   table at 0x0003c4b0 into the same global DAT_0003c217 and calls FUN_000dfda8. The role
 *   of the tables and the two callees is unknown, so the specific domain (e.g., settings,
 *   menu) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_entry_and_apply(int param_1)

{
  DAT_0003c217 = (&DAT_000fc560)[param_1];
  FUN_000dfd7e();
  DAT_0003c217 = (&DAT_0003c4b0)[param_1];
  FUN_000dfda8();
  return;
}
