#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *screen_1_print;
    lv_obj_t *screen_2_move;
    lv_obj_t *screen_3_setting;
    lv_obj_t *background_s1;
    lv_obj_t *background_s2;
    lv_obj_t *background_s3;
    lv_obj_t *btn_cancel;
    lv_obj_t *btn_cancel_top;
    lv_obj_t *btn_menu_move_s1;
    lv_obj_t *btn_menu_move_s2;
    lv_obj_t *btn_menu_move_s3;
    lv_obj_t *btn_menu_print_s1;
    lv_obj_t *btn_menu_print_s2;
    lv_obj_t *btn_menu_print_s3;
    lv_obj_t *btn_menu_setting_s1;
    lv_obj_t *btn_menu_setting_s2;
    lv_obj_t *btn_menu_setting_s3;
    lv_obj_t *btn_pause;
    lv_obj_t *btn_pause_top;
    lv_obj_t *display_heat_s1;
    lv_obj_t *display_time_s1;
    lv_obj_t *dt1;
    lv_obj_t *dt2;
    lv_obj_t *dt3;
    lv_obj_t *dt4;
    lv_obj_t *image_cancel;
    lv_obj_t *image_pause;
    lv_obj_t *img_bad;
    lv_obj_t *img_head;
    lv_obj_t *img_pc;
    lv_obj_t *img_tine_1;
    lv_obj_t *img_tine_2;
    lv_obj_t *img_usb;
    lv_obj_t *img_wifi;
    lv_obj_t *label_head_temp;
    lv_obj_t *label_header;
    lv_obj_t *label_printing_bed_temp;
    lv_obj_t *label_printing_bed_temp1;
    lv_obj_t *label_printing_head_temp;
    lv_obj_t *label_printing_head_temp2;
    lv_obj_t *label_printing_time_1;
    lv_obj_t *label_printing_time_2;
    lv_obj_t *label_time_1;
    lv_obj_t *label_time_2;
    lv_obj_t *label_time_3;
    lv_obj_t *number_print;
    lv_obj_t *panel_buttons_s1;
    lv_obj_t *panel_header;
    lv_obj_t *panel1;
    lv_obj_t *panel3;
    lv_obj_t *s1_content_panel;
    lv_obj_t *slider_print_view;
} objects_t;

extern objects_t objects;

void create_screen_screen_1_print();
void tick_screen_screen_1_print();

void create_screen_screen_2_move();
void tick_screen_screen_2_move();

void create_screen_screen_3_setting();
void tick_screen_screen_3_setting();

void create_screens();
void tick_screen(int screen_index);


extern size_t get_num_screens();
extern lv_obj_t *get_screen_obj(size_t screen_index);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/