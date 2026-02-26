#include<stdio.h>
#include<string.h>
#define _(r,g,b)(((r)<<16)|((g)<<8)|(b))
#define Q(c,s)((c)>>(s)&255)
#define V(c)printf("\033[48;2;%d;%d;%dm",Q(p[c],16),Q(p[c],8),Q(p[c],0))
#define U printf("\033[0m\n")
int p[]={_(144,144,144),_(172,120,60),_(208,128,92),_(224,148,112),
_(100,72,24),_(68,40,0),_(152,92,40),_(208,112,112),_(224,136,136),
_(236,160,160),_(132,104,48),_(176,60,60),_(192,88,88),_(200,200,200),
_(64,64,64),_(44,48,0)};
char F[]="ZxZxZxZxZxZxZl`<^<ZxZ>_>^>ZxZ<Nb@NZxZ<NTRd<NZxZ<QNQb>ZxZ>Q[<b<"
"ZxZ>QVQRZxZBh<RZxZBh<RWh<ZxZ<h<QWhBZtOJVg<hDZnh<OJg<hHZjh@Jg<hH"
"Zjh@Jg<hHZjh@Jg<hHZjh@Jg<hJZhh@Jg<Qh@Yh>Zhh@Jg<a<h>Yh>Zhh@Jg<X"
"a<h<Yh@ZH~";
char K[]="\x3b\x30\x23\x30\x27\x75\x32\x3a\x3b\x3b\x34\x75\x32\x3c\x23"
"\x30\x75\x2c\x3a\x20\x75\x20\x25\x75\x3b\x30\x23\x30\x27\x75"
"\x32\x3a\x3b\x3b\x34\x75\x39\x30\x21\x75\x2c\x3a\x20\x75\x31"
"\x3a\x22\x3b";
int main(int z,char**v){int x=0,i,c,r;char*w=F,*k=K;
if(z>1&&!memcmp(v[1],"-\x73",3)){for(;*k;k++)putchar(*k^0125);return putchar(10),0;}
for(;*w<126;w++){c=*w-58;r=c<16?1:c<32?2:(*++w-56);c&=15;V(c);
for(i=0;i<r;){putchar(32);if(++x==80){U;x=0;if(++i<r)V(c);}else i++;}}
return U,0;}
