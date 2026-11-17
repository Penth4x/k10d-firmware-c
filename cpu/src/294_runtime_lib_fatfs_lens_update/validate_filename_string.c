/* @k10d validate_filename_string @ 0x1053ec06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_filename_string(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    if (*pcVar2 == '\0') {
      return (int)pcVar2 - (int)param_1;
    }
    iVar1 = validate_ascii_char(*pcVar2);
    if (iVar1 == 0) {
      if (((((*pcVar2 == '\\') || (*pcVar2 == '/')) || (*pcVar2 == ':')) ||
          (((*pcVar2 == '*' || (*pcVar2 == '?')) ||
           ((*pcVar2 == '\"' || ((*pcVar2 == '<' || (*pcVar2 == '>')))))))) ||
         ((*pcVar2 == '|' ||
          (((((*pcVar2 == '+' || (*pcVar2 == '=')) || (*pcVar2 == '[')) ||
            ((*pcVar2 == ']' || (*pcVar2 == '.')))) || ((*pcVar2 == ',' || (*pcVar2 == ';')))))))) {
        return -0x208;
      }
    }
    else {
      iVar1 = validate_lens_fw_params(*pcVar2,pcVar2[1]);
      if (iVar1 != 0) {
        return -0x208;
      }
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') {
        return -0x208;
      }
    }
    pcVar2 = pcVar2 + 1;
    if (0xb < (int)pcVar2 - (int)param_1) {
      return -0x4e;
    }
  } while( true );
}
