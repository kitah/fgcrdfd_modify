#ifndef __FCRDFD_H__
#define __FCRDFD_H__

/***** DEBUG *****/
#define DEBUG 0

/***** version *****/
#define VER   "0.8 @ 2017.12.30"

/***** PRF *****/
#define PRF_HS   3

/***** BPF *****/
#define BPF_N    1
#define BPF_HS   3

/***** $BDj?t(B *****/
#define EPS      1E-7   
#define ERR_MAX  0.1    /* $B?dDj8m:97W;;;~$K$3$l0J>e$N8m:9$OL5;k(B */
#define GN_EPS   0.1    /* Gauss-Newton $BK!$N8m:98:>/N(8B3&(B */
#define GN_MAX   10      /* Gauss-Newton $BK!$N:GBg7+JV$72s?t(B */
#define SGMC     0.62

/***** $B%G%U%)%k%H(B *****/
#define BS_DEFAULT        15    /* $B%V%m%C%/%5%$%:(B   11 or 13 $BDxEY$,(B best? */
#define BP_DEFAULT        8     /* $B?dDj%V%m%C%/%T%C%A(B */
#define PRFN_DEFAULT      0     /* PRF $BHV9f(B */
#define NOISE_SGM_DEFAULT 0.5   /* noise sgm */
#define EXBLK_DEFAULT     1     /* $B8m:97W;;;~$K=|30$9$k30<~%V%m%C%/?t(B exblk */

#define T_E_DEFAULT   0.01      /* $B8m:92r@O$NogCM(B */
#define T_D_DEFAULT   80        /* $B79$-2r@O$NogCM(B */

/***** $B4X?t%W%m%H%?%$%W(B *****/
void usage(char *);
void mzbpf(double **, int, int, int, double **);
void pref(double **, int, int, int, int, double **y);
void mzdfd(double ***, int, int, int, int, double *, double *, int *);  
void calc_err(double **, double **, int, int, int, int, int, double *, double *);
void quant(double **, int, int, int);
void add_noise(double **, int, int, int, double);
void fgcrdfd(double ***, int, int, int, int, double, double, int, double *, double *);

void get_bin(char *, double **, int, int, int);
void get_model_bin(char *, double **, int, int, int, int);
void save_depth(double **, double **, double **, double **, int, int, int, int, int, char *);
void save_model(double **, int, int, int, int, char *);
void save_gp(char *base);
void save_data(char *, char *, double, int, int, int, int, int, double, int, double, double, char *);

void err_anal(double **, double **, int, int, int, int, int, double, char *, char *);
void tilt_anal(double **, double **, int **, double ***, int , int, int, int, int, double, double, char *);


#endif /*  __FCRDFD_H__ */
