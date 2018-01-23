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

/***** 定数 *****/
#define EPS      1E-7   
#define ERR_MAX  0.1    /* 推定誤差計算時にこれ以上の誤差は無視 */
#define GN_EPS   0.1    /* Gauss-Newton 法の誤差減少率限界 */
#define GN_MAX   10      /* Gauss-Newton 法の最大繰返し回数 */
#define SGMC     0.62

/***** デフォルト *****/
#define BS_DEFAULT        15    /* ブロックサイズ   11 or 13 程度が best? */
#define BP_DEFAULT        8     /* 推定ブロックピッチ */
#define PRFN_DEFAULT      0     /* PRF 番号 */
#define NOISE_SGM_DEFAULT 0.5   /* noise sgm */
#define EXBLK_DEFAULT     1     /* 誤差計算時に除外する外周ブロック数 exblk */

#define T_E_DEFAULT   0.01      /* 誤差解析の閾値 */
#define T_D_DEFAULT   80        /* 傾き解析の閾値 */

/***** 関数プロトタイプ *****/
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
