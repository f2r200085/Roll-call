#ifndef __ROLLCALL_H__
#define __ROLLCALL_H__

/*User options*/
#define auto    0
#define manual  1

/*Number of students*/
#define student 10

#endif

#ifdef __ROLLCALL_C__
#define __ROLLCALL_EXTERN__
#else
#define __ROLLCALL_EXTERN__ extern
#endif

__ROLLCALL_EXTERN__ unsigned int cnt;
__ROLLCALL_EXTERN__ unsigned int input;
__ROLLCALL_EXTERN__ unsigned int creat_list(unsigned int member);
__ROLLCALL_EXTERN__ void show_name(unsigned int member);
__ROLLCALL_EXTERN__ void function_display(unsigned int input);
