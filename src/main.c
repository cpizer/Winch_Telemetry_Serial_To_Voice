#include "flite.h"

cst_voice * register_cmu_us_kal();
cst_voice * register_cmu_us_awb();

int main(void)
{
    cst_voice *v;

    flite_init();

    v = register_cmu_us_kal(NULL);
    flite_text_to_speech("This is a test of the flite c-library", v, "play");

    v = register_cmu_us_awb(NULL);
    //v = flite_voice_select("awb");

    flite_text_to_speech("This is a test of the flite c-library", v, "play");

}
