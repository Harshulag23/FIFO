/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/fifo_/testbench.v";
static int ng1[] = {1, 0};
static const char *ng2 = "";
static const char *ng3 = " write_data data_in = %0d";
static int ng4[] = {0, 0};
static const char *ng5 = " read_data data_out = %0d";
static const char *ng6 = "\n SCENARIO 1";
static int ng7[] = {10, 0};
static int ng8[] = {100, 0};
static const char *ng9 = "\n SCENARIO 2";
static int ng10[] = {2, 0};
static const char *ng11 = "\n SCENARIO 3";
static const char *ng12 = "dump.vcd";



static int sp_write_data(char *t1, char *t2)
{
    char t8[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t4 = (t1 + 4160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3840);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t4 = xsi_vlog_time(t8, 1000.0000000000000, 1.0000000000000000);
    t5 = (t1 + 1256);
    xsi_vlogfile_write(0, 0, 0, ng2, 2, t5, (char)118, t8, 64);
    t6 = (t1 + 3840);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t1 + 1256);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t10, (char)118, t9, 32);
    xsi_set_current_line(69, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 3520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static int sp_read_data(char *t1, char *t2)
{
    char t8[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(81, ng0);
    t4 = xsi_vlog_time(t8, 1000.0000000000000, 1.0000000000000000);
    t5 = (t1 + 1688);
    xsi_vlogfile_write(0, 0, 0, ng2, 2, t5, (char)118, t8, 64);
    t6 = (t1 + 2320U);
    t7 = *((char **)t6);
    t6 = (t1 + 1688);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t6, (char)118, t7, 32);
    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 3680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static void Always_61_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4880);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3040);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Initial_88_1(char *t0)
{
    char t6[16];
    char t21[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5128);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5952);
    *((int *)t2) = 1;
    t3 = (t0 + 5352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = xsi_vlog_time(t6, 1000.0000000000000, 1.0000000000000000);
    xsi_vlogfile_write(0, 0, 0, ng2, 2, t0, (char)118, t6, 64);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5128);
    t4 = (t0 + 1256);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 4160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);

LAB9:    t8 = (t0 + 5224);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);

LAB11:    if (t16 != 0)
        goto LAB12;

LAB7:    t9 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t9);

LAB8:    t17 = (t0 + 5224);
    t18 = *((char **)t17);
    t17 = (t0 + 1256);
    t19 = (t0 + 5128);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5128);
    t4 = (t0 + 1256);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 4160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);

LAB15:    t8 = (t0 + 5224);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);

LAB17:    if (t16 != 0)
        goto LAB18;

LAB13:    t9 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t9);

LAB14:    t17 = (t0 + 5224);
    t18 = *((char **)t17);
    t17 = (t0 + 1256);
    t19 = (t0 + 5128);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5128);
    t4 = (t0 + 1256);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t7 = (t0 + 4160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);

LAB21:    t8 = (t0 + 5224);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t16 = ((int  (*)(char *, char *))t15)(t0, t9);

LAB23:    if (t16 != 0)
        goto LAB24;

LAB19:    t9 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t9);

LAB20:    t17 = (t0 + 5224);
    t18 = *((char **)t17);
    t17 = (t0 + 1256);
    t19 = (t0 + 5128);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5128);
    t3 = (t0 + 1688);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB27:    t5 = (t0 + 5224);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t16 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB29:    if (t16 != 0)
        goto LAB30;

LAB25:    t7 = (t0 + 1688);
    xsi_vlog_subprogram_popinvocation(t7);

LAB26:    t14 = (t0 + 5224);
    t15 = *((char **)t14);
    t14 = (t0 + 1688);
    t17 = (t0 + 5128);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t17, t18);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5128);
    t3 = (t0 + 1688);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB33:    t5 = (t0 + 5224);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t16 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB35:    if (t16 != 0)
        goto LAB36;

LAB31:    t7 = (t0 + 1688);
    xsi_vlog_subprogram_popinvocation(t7);

LAB32:    t14 = (t0 + 5224);
    t15 = *((char **)t14);
    t14 = (t0 + 1688);
    t17 = (t0 + 5128);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t17, t18);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5128);
    t3 = (t0 + 1688);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 5224);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t16 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB41:    if (t16 != 0)
        goto LAB42;

LAB37:    t7 = (t0 + 1688);
    xsi_vlog_subprogram_popinvocation(t7);

LAB38:    t14 = (t0 + 5224);
    t15 = *((char **)t14);
    t14 = (t0 + 1688);
    t17 = (t0 + 5128);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t17, t18);
    xsi_set_current_line(102, ng0);
    t2 = xsi_vlog_time(t6, 1000.0000000000000, 1.0000000000000000);
    xsi_vlogfile_write(0, 0, 0, ng2, 2, t0, (char)118, t6, 64);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(103, ng0);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t4, 32, t7, 32);
    t5 = (t21 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(108, ng0);
    t2 = xsi_vlog_time(t6, 1000.0000000000000, 1.0000000000000000);
    xsi_vlogfile_write(0, 0, 0, ng2, 2, t0, (char)118, t6, 64);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(109, ng0);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB59:    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t4, 32, t7, 32);
    t5 = (t21 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(113, ng0);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB69:    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t4, 32, t7, 32);
    t5 = (t21 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5128);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB10:;
LAB12:    t8 = (t0 + 5320U);
    *((char **)t8) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t8 = (t0 + 5320U);
    *((char **)t8) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t8 = (t0 + 5320U);
    *((char **)t8) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t5 = (t0 + 5320U);
    *((char **)t5) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t5 = (t0 + 5320U);
    *((char **)t5) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t5 = (t0 + 5320U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB44:    xsi_set_current_line(103, ng0);

LAB46:    xsi_set_current_line(104, ng0);
    t8 = ((char*)((ng10)));
    t9 = (t0 + 4000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t27, 0, 8);
    xsi_vlog_signed_power(t27, 32, t8, 32, t11, 32, 1);
    t12 = (t0 + 5128);
    t13 = (t0 + 1256);
    t14 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t0 + 4160);
    xsi_vlogvar_assign_value(t15, t27, 0, 0, 32);

LAB49:    t17 = (t0 + 5224);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t28 = (t20 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t16 = ((int  (*)(char *, char *))t31)(t0, t18);

LAB51:    if (t16 != 0)
        goto LAB52;

LAB47:    t18 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t18);

LAB48:    t32 = (t0 + 5224);
    t33 = *((char **)t32);
    t32 = (t0 + 1256);
    t34 = (t0 + 5128);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5128);
    t3 = (t0 + 1688);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB55:    t5 = (t0 + 5224);
    t7 = *((char **)t5);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t16 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB57:    if (t16 != 0)
        goto LAB58;

LAB53:    t7 = (t0 + 1688);
    xsi_vlog_subprogram_popinvocation(t7);

LAB54:    t14 = (t0 + 5224);
    t15 = *((char **)t14);
    t14 = (t0 + 1688);
    t17 = (t0 + 5128);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t17, t18);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t4, 32, t5, 32);
    t7 = (t0 + 4000);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB43;

LAB50:;
LAB52:    t17 = (t0 + 5320U);
    *((char **)t17) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t5 = (t0 + 5320U);
    *((char **)t5) = &&LAB55;
    goto LAB1;

LAB60:    xsi_set_current_line(109, ng0);

LAB62:    xsi_set_current_line(110, ng0);
    t8 = ((char*)((ng10)));
    t9 = (t0 + 4000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t27, 0, 8);
    xsi_vlog_signed_power(t27, 32, t8, 32, t11, 32, 1);
    t12 = (t0 + 5128);
    t13 = (t0 + 1256);
    t14 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t0 + 4160);
    xsi_vlogvar_assign_value(t15, t27, 0, 0, 32);

LAB65:    t17 = (t0 + 5224);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t28 = (t20 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t16 = ((int  (*)(char *, char *))t31)(t0, t18);

LAB67:    if (t16 != 0)
        goto LAB68;

LAB63:    t18 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t18);

LAB64:    t32 = (t0 + 5224);
    t33 = *((char **)t32);
    t32 = (t0 + 1256);
    t34 = (t0 + 5128);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t4, 32, t5, 32);
    t7 = (t0 + 4000);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB59;

LAB66:;
LAB68:    t17 = (t0 + 5320U);
    *((char **)t17) = &&LAB65;
    goto LAB1;

LAB70:    xsi_set_current_line(113, ng0);

LAB72:    xsi_set_current_line(114, ng0);
    t8 = (t0 + 5128);
    t9 = (t0 + 1688);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);

LAB75:    t11 = (t0 + 5224);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t17 = *((char **)t15);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t16 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB77:    if (t16 != 0)
        goto LAB78;

LAB73:    t12 = (t0 + 1688);
    xsi_vlog_subprogram_popinvocation(t12);

LAB74:    t20 = (t0 + 5224);
    t28 = *((char **)t20);
    t20 = (t0 + 1688);
    t29 = (t0 + 5128);
    t30 = 0;
    xsi_delete_subprogram_invocation(t20, t28, t0, t29, t30);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t4, 32, t5, 32);
    t7 = (t0 + 4000);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB69;

LAB76:;
LAB78:    t11 = (t0 + 5320U);
    *((char **)t11) = &&LAB75;
    goto LAB1;

LAB79:    xsi_set_current_line(117, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_120_2(char *t0)
{

LAB0:    xsi_set_current_line(120, ng0);

LAB2:    xsi_set_current_line(121, ng0);
    xsi_vcd_dumpfile(ng12);
    xsi_set_current_line(121, ng0);
    xsi_vcd_dumpvars(t0);

LAB1:    return;
}


extern void work_m_03614880483454524384_1949178628_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Initial_88_1,(void *)Initial_120_2};
	static char *se[] = {(void *)sp_write_data,(void *)sp_read_data};
	xsi_register_didat("work_m_03614880483454524384_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_03614880483454524384_1949178628.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
