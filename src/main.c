#include "flite.h"

cst_voice * register_cmu_us_kal();

int main(void)
{
    cst_voice *v;

    flite_init();

    v = register_cmu_us_kal(NULL);

    flite_text_to_speech("This is a test of the flite c-library", v, "play");

}
