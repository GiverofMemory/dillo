#ifndef __UICMD_HH__
#define __UICMD_HH__

#include "bw.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


BrowserWindow *a_UIcmd_browser_window_new(int ww, int wh, const void *v_bw);
void a_UIcmd_open_urlstr(void *vbw, const char *urlstr);
void a_UIcmd_open_url(BrowserWindow *bw, const DilloUrl *url);
void a_UIcmd_open_url_nw(BrowserWindow *bw, const DilloUrl *url);
void a_UIcmd_back(void *vbw);
void a_UIcmd_back_popup(void *vbw);
void a_UIcmd_forw(void *vbw);
void a_UIcmd_forw_popup(void *vbw);
void a_UIcmd_home(void *vbw);
void a_UIcmd_reload(void *vbw);
void a_UIcmd_save(void *vbw);
void a_UIcmd_stop(void *vbw);
void a_UIcmd_save_link(BrowserWindow *bw, const DilloUrl *url);
void a_UIcmd_open_file(void *vbw);
const char *a_UIcmd_select_file();
void a_UIcmd_search_dialog(void *vbw);
const char *a_UIcmd_get_passwd(const char *user);
void a_UIcmd_book(void *vbw);
void a_UIcmd_add_bookmark(BrowserWindow *bw, const DilloUrl *url);
void a_UIcmd_fullscreen_toggle(BrowserWindow *bw);
void a_UIcmd_findtext_dialog(BrowserWindow *bw);
void a_UIcmd_findtext_search(BrowserWindow *bw, const char *key, int case_sens);
void a_UIcmd_findtext_reset(BrowserWindow *bw);
void a_UIcmd_focus_main_area(BrowserWindow *bw);
void a_UIcmd_focus_location(void *vbw);
void a_UIcmd_page_popup(void *vbw, const DilloUrl *url,
                        const char *bugs_txt, bool_t unloaded_imgs);
void a_UIcmd_link_popup(void *vbw, const DilloUrl *url);
void a_UIcmd_image_popup(void *vbw, const DilloUrl *url, DilloUrl *link_url);
void a_UIcmd_copy_urlstr(BrowserWindow *bw, const char *urlstr);
void a_UIcmd_view_page_source(const DilloUrl *url);
void a_UIcmd_view_page_bugs(void *vbw);
void a_UIcmd_bugmeter_popup(void *vbw);
int *a_UIcmd_get_history(BrowserWindow *bw, int direction);
void a_UIcmd_nav_jump(BrowserWindow *bw, int offset, int new_bw);

void a_UIcmd_close_bw(void *vbw);
void a_UIcmd_close_all_bw();

const char *a_UIcmd_get_save_dir();
void a_UIcmd_set_save_dir(const char *dir);


// UI binding functions -------------------------------------------------------

void a_UIcmd_get_wh(BrowserWindow *bw, int *w, int *h);
void a_UIcmd_get_scroll_xy(BrowserWindow *bw, int *x, int *y);
void a_UIcmd_set_scroll_xy(BrowserWindow *bw, int x, int y);
void a_UIcmd_set_scroll_by_fragment(BrowserWindow *bw, const char *f);
char *a_UIcmd_get_location_text(BrowserWindow *bw);
void a_UIcmd_set_location_text(void *vbw, const char *text);
void a_UIcmd_set_page_prog(BrowserWindow *bw, size_t nbytes, int cmd);
void a_UIcmd_set_img_prog(BrowserWindow *bw, int n_img, int t_img, int cmd);
void a_UIcmd_set_bug_prog(BrowserWindow *bw, int n_bug);
void a_UIcmd_set_page_title(BrowserWindow *bw, const char *label);
void a_UIcmd_set_msg(BrowserWindow *bw, const char *format, ...);
void a_UIcmd_set_buttons_sens(BrowserWindow *bw);
void a_UIcmd_fullscreen_toggle(BrowserWindow *bw);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif // __UICMD_HH__
