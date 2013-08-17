/*
 *  menu.h - 2013年07月18日 14时50分44秒
 *
 *  Description:  write menu on LCD
 * 
 *  Copyright (c) 2013, chenchacha
 */
#ifndef __MENU_H__
#define __MENU_H__
/* The data to menu_parameter_page */
typedef struct {
	unsigned int voltage;
	unsigned int current;
} MENU_PARAMETER_t;
/* The date to menu_wave_page */
typedef struct {
	unsigned int period1;
	unsigned int period2;
	unsigned int amplitude;
	unsigned int frequency;
} MENU_WAVE_t;
/* The menu list */
typedef struct {
	void (*display)(int,void *);
	void *para;
} MENU_LIST_t;

extern void menu_start(void);
extern void menu_end(void);
extern int menu_refresh(void);
extern void menu_clean_now(void);

extern void menu_list_clean(int page, void *para);
extern void menu_init_parameter(int page, MENU_PARAMETER_t *para);
extern void menu_init_wave(int page, MENU_WAVE_t *wave);
extern void menu_display(void);
#endif /* __MENU_H__ */
