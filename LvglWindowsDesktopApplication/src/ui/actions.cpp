#include <stdio.h>
#include <lvgl/lvgl.h>

extern "C" {
#include "actions.h"
}
#include "screens.h"
#include "ui.h"
#if 1
    #include "structs.h"
#endif
#include "vars.h"

#if !HAS_FLOW_SUPPORT
extern "C" void loadScreen(int);
#endif

void action_show_screen1_print(lv_event_t* e) {
    loadScreen(0);
}

void action_show_screen2_move(lv_event_t* e) {
    loadScreen(1);
}

void action_show_screen3_setting(lv_event_t* e) {
    loadScreen(2);
}

void action_slider_print_view_value_changed(lv_event_t* e) {
    // #define _UI_TEMPORARY_STRING_BUFFER_SIZE 32
    // char buf[_UI_TEMPORARY_STRING_BUFFER_SIZE];
    // lv_snprintf(buf, sizeof(buf), "%d%%", (int)lv_slider_get_value(e->target));

    // screen_1_print_t *screen = (screen_1_print_t *)e->user_data;
    // lv_label_set_text(screen->obj_number_print, buf);
}

#if 1

void update_info_message(OptionsValue& options) {
    // get "switch_option" from options struct
    auto switch_option = options.switch_option();

    // get "num_options_arr" from options struct
    auto num_options_arr = options.num_options_arr();

    char text1[256];
    snprintf(text1, sizeof(text1), "Switch option: %s, Num options arr: [%d, %d, %d]",
        switch_option ? "ON" : "OFF",
        num_options_arr.at(0),
        num_options_arr.at(1),
        num_options_arr.at(2));

    // update "info_message" global variable
    flow::setGlobalVariable(FLOW_GLOBAL_VARIABLE_INFO_MESSAGE, StringValue(text1));

    auto my_enum_field = options.my_enum_field();
}

void action_load_options(lv_event_t* e) {
    // get "options" global variable
    OptionsValue options = flow::getGlobalVariable(FLOW_GLOBAL_VARIABLE_OPTIONS);
    if (!options) {
        options = OptionsValue();
        flow::setGlobalVariable(FLOW_GLOBAL_VARIABLE_OPTIONS, options);
    }

    // set "switch_option" field to false
    options.switch_option(false);

    // set "num_options_arr" field to [42, 43, 44]
    ArrayOfInteger arr(3);
    arr.at(0, 42);
    arr.at(1, 43);
    arr.at(2, 44);
    options.num_options_arr(arr);

    options.my_enum_field(MyEnum_Member3);

    flow::setGlobalVariable(FLOW_GLOBAL_VARIABLE_OPTIONS, options);

    update_info_message(options);
}

void action_save_options(lv_event_t* e) {
    // get "options" global variable
    OptionsValue options = flow::getGlobalVariable(FLOW_GLOBAL_VARIABLE_OPTIONS);

    update_info_message(options);
}

#endif
