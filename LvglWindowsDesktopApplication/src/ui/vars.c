#include <lvgl/lvgl.h>

#include "vars.h"

int32_t slider_value = 70;

int32_t get_var_slider_value() {
    return slider_value;
}

void set_var_slider_value(int32_t value) {
    slider_value = value;
}

const char *get_var_slider_value_text() {
    static char text[50];
    lv_snprintf(text, sizeof(text), "%d%%", slider_value);
    return text;
}

void set_var_slider_value_text(const char *value) {
}

bool ledstate;

bool get_var_wd() { return ledstate; };
void set_var_wd(bool value) {};

#if 1
MyEnum my_enum_var = MyEnum_Member2;

extern MyEnum get_var_my_enum_var() { return my_enum_var; }
extern void set_var_my_enum_var(MyEnum value) { my_enum_var = value; }
#endif
