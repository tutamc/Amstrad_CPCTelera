                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.6.8 #9946 (Mac OS X x86_64)
                              4 ;--------------------------------------------------------
                              5 	.module numbers
                              6 	.optsdcc -mz80
                              7 	
                              8 ;--------------------------------------------------------
                              9 ; Public variables in this module
                             10 ;--------------------------------------------------------
                             11 	.globl _numbers_sp_09
                             12 	.globl _numbers_sp_08
                             13 	.globl _numbers_sp_07
                             14 	.globl _numbers_sp_06
                             15 	.globl _numbers_sp_05
                             16 	.globl _numbers_sp_04
                             17 	.globl _numbers_sp_03
                             18 	.globl _numbers_sp_02
                             19 	.globl _numbers_sp_01
                             20 	.globl _numbers_sp_00
                             21 	.globl _numbers_pal
                             22 ;--------------------------------------------------------
                             23 ; special function registers
                             24 ;--------------------------------------------------------
                             25 ;--------------------------------------------------------
                             26 ; ram data
                             27 ;--------------------------------------------------------
                             28 	.area _DATA
                             29 ;--------------------------------------------------------
                             30 ; ram data
                             31 ;--------------------------------------------------------
                             32 	.area _INITIALIZED
                             33 ;--------------------------------------------------------
                             34 ; absolute external ram data
                             35 ;--------------------------------------------------------
                             36 	.area _DABS (ABS)
                             37 ;--------------------------------------------------------
                             38 ; global & static initialisations
                             39 ;--------------------------------------------------------
                             40 	.area _HOME
                             41 	.area _GSINIT
                             42 	.area _GSFINAL
                             43 	.area _GSINIT
                             44 ;--------------------------------------------------------
                             45 ; Home
                             46 ;--------------------------------------------------------
                             47 	.area _HOME
                             48 	.area _HOME
                             49 ;--------------------------------------------------------
                             50 ; code
                             51 ;--------------------------------------------------------
                             52 	.area _CODE
                             53 	.area _CODE
   3F74                      54 _numbers_pal:
   3F74 54                   55 	.db #0x54	; 84	'T'
   3F75 44                   56 	.db #0x44	; 68	'D'
   3F76 55                   57 	.db #0x55	; 85	'U'
   3F77 5C                   58 	.db #0x5c	; 92
   3F78 58                   59 	.db #0x58	; 88	'X'
   3F79 5D                   60 	.db #0x5d	; 93
   3F7A 4C                   61 	.db #0x4c	; 76	'L'
   3F7B 45                   62 	.db #0x45	; 69	'E'
   3F7C 4D                   63 	.db #0x4d	; 77	'M'
   3F7D 5E                   64 	.db #0x5e	; 94
   3F7E 40                   65 	.db #0x40	; 64
   3F7F 5F                   66 	.db #0x5f	; 95
   3F80 4E                   67 	.db #0x4e	; 78	'N'
   3F81 47                   68 	.db #0x47	; 71	'G'
   3F82 4F                   69 	.db #0x4f	; 79	'O'
   3F83 53                   70 	.db #0x53	; 83	'S'
   3F84                      71 _numbers_sp_00:
   3F84 00                   72 	.db #0x00	; 0
   3F85 3C                   73 	.db #0x3c	; 60
   3F86 3C                   74 	.db #0x3c	; 60
   3F87 00                   75 	.db #0x00	; 0
   3F88 00                   76 	.db #0x00	; 0
   3F89 3C                   77 	.db #0x3c	; 60
   3F8A 3C                   78 	.db #0x3c	; 60
   3F8B 00                   79 	.db #0x00	; 0
   3F8C 00                   80 	.db #0x00	; 0
   3F8D 28                   81 	.db #0x28	; 40
   3F8E 14                   82 	.db #0x14	; 20
   3F8F 00                   83 	.db #0x00	; 0
   3F90 00                   84 	.db #0x00	; 0
   3F91 28                   85 	.db #0x28	; 40
   3F92 14                   86 	.db #0x14	; 20
   3F93 00                   87 	.db #0x00	; 0
   3F94 00                   88 	.db #0x00	; 0
   3F95 28                   89 	.db #0x28	; 40
   3F96 14                   90 	.db #0x14	; 20
   3F97 00                   91 	.db #0x00	; 0
   3F98 00                   92 	.db #0x00	; 0
   3F99 28                   93 	.db #0x28	; 40
   3F9A 14                   94 	.db #0x14	; 20
   3F9B 00                   95 	.db #0x00	; 0
   3F9C 00                   96 	.db #0x00	; 0
   3F9D 3C                   97 	.db #0x3c	; 60
   3F9E 3C                   98 	.db #0x3c	; 60
   3F9F 00                   99 	.db #0x00	; 0
   3FA0 00                  100 	.db #0x00	; 0
   3FA1 3C                  101 	.db #0x3c	; 60
   3FA2 3C                  102 	.db #0x3c	; 60
   3FA3 00                  103 	.db #0x00	; 0
   3FA4                     104 _numbers_sp_01:
   3FA4 00                  105 	.db #0x00	; 0
   3FA5 3C                  106 	.db #0x3c	; 60
   3FA6 28                  107 	.db #0x28	; 40
   3FA7 00                  108 	.db #0x00	; 0
   3FA8 00                  109 	.db #0x00	; 0
   3FA9 3C                  110 	.db #0x3c	; 60
   3FAA 28                  111 	.db #0x28	; 40
   3FAB 00                  112 	.db #0x00	; 0
   3FAC 00                  113 	.db #0x00	; 0
   3FAD 3C                  114 	.db #0x3c	; 60
   3FAE 28                  115 	.db #0x28	; 40
   3FAF 00                  116 	.db #0x00	; 0
   3FB0 00                  117 	.db #0x00	; 0
   3FB1 14                  118 	.db #0x14	; 20
   3FB2 28                  119 	.db #0x28	; 40
   3FB3 00                  120 	.db #0x00	; 0
   3FB4 00                  121 	.db #0x00	; 0
   3FB5 14                  122 	.db #0x14	; 20
   3FB6 28                  123 	.db #0x28	; 40
   3FB7 00                  124 	.db #0x00	; 0
   3FB8 00                  125 	.db #0x00	; 0
   3FB9 14                  126 	.db #0x14	; 20
   3FBA 28                  127 	.db #0x28	; 40
   3FBB 00                  128 	.db #0x00	; 0
   3FBC 00                  129 	.db #0x00	; 0
   3FBD 14                  130 	.db #0x14	; 20
   3FBE 28                  131 	.db #0x28	; 40
   3FBF 00                  132 	.db #0x00	; 0
   3FC0 00                  133 	.db #0x00	; 0
   3FC1 14                  134 	.db #0x14	; 20
   3FC2 28                  135 	.db #0x28	; 40
   3FC3 00                  136 	.db #0x00	; 0
   3FC4                     137 _numbers_sp_02:
   3FC4 00                  138 	.db #0x00	; 0
   3FC5 3C                  139 	.db #0x3c	; 60
   3FC6 3C                  140 	.db #0x3c	; 60
   3FC7 00                  141 	.db #0x00	; 0
   3FC8 00                  142 	.db #0x00	; 0
   3FC9 3C                  143 	.db #0x3c	; 60
   3FCA 3C                  144 	.db #0x3c	; 60
   3FCB 00                  145 	.db #0x00	; 0
   3FCC 00                  146 	.db #0x00	; 0
   3FCD 00                  147 	.db #0x00	; 0
   3FCE 14                  148 	.db #0x14	; 20
   3FCF 00                  149 	.db #0x00	; 0
   3FD0 00                  150 	.db #0x00	; 0
   3FD1 3C                  151 	.db #0x3c	; 60
   3FD2 3C                  152 	.db #0x3c	; 60
   3FD3 00                  153 	.db #0x00	; 0
   3FD4 00                  154 	.db #0x00	; 0
   3FD5 3C                  155 	.db #0x3c	; 60
   3FD6 3C                  156 	.db #0x3c	; 60
   3FD7 00                  157 	.db #0x00	; 0
   3FD8 00                  158 	.db #0x00	; 0
   3FD9 28                  159 	.db #0x28	; 40
   3FDA 00                  160 	.db #0x00	; 0
   3FDB 00                  161 	.db #0x00	; 0
   3FDC 00                  162 	.db #0x00	; 0
   3FDD 3C                  163 	.db #0x3c	; 60
   3FDE 3C                  164 	.db #0x3c	; 60
   3FDF 00                  165 	.db #0x00	; 0
   3FE0 00                  166 	.db #0x00	; 0
   3FE1 3C                  167 	.db #0x3c	; 60
   3FE2 3C                  168 	.db #0x3c	; 60
   3FE3 00                  169 	.db #0x00	; 0
   3FE4                     170 _numbers_sp_03:
   3FE4 00                  171 	.db #0x00	; 0
   3FE5 3C                  172 	.db #0x3c	; 60
   3FE6 3C                  173 	.db #0x3c	; 60
   3FE7 00                  174 	.db #0x00	; 0
   3FE8 00                  175 	.db #0x00	; 0
   3FE9 3C                  176 	.db #0x3c	; 60
   3FEA 3C                  177 	.db #0x3c	; 60
   3FEB 00                  178 	.db #0x00	; 0
   3FEC 00                  179 	.db #0x00	; 0
   3FED 00                  180 	.db #0x00	; 0
   3FEE 14                  181 	.db #0x14	; 20
   3FEF 00                  182 	.db #0x00	; 0
   3FF0 00                  183 	.db #0x00	; 0
   3FF1 3C                  184 	.db #0x3c	; 60
   3FF2 3C                  185 	.db #0x3c	; 60
   3FF3 00                  186 	.db #0x00	; 0
   3FF4 00                  187 	.db #0x00	; 0
   3FF5 3C                  188 	.db #0x3c	; 60
   3FF6 3C                  189 	.db #0x3c	; 60
   3FF7 00                  190 	.db #0x00	; 0
   3FF8 00                  191 	.db #0x00	; 0
   3FF9 00                  192 	.db #0x00	; 0
   3FFA 14                  193 	.db #0x14	; 20
   3FFB 00                  194 	.db #0x00	; 0
   3FFC 00                  195 	.db #0x00	; 0
   3FFD 3C                  196 	.db #0x3c	; 60
   3FFE 3C                  197 	.db #0x3c	; 60
   3FFF 00                  198 	.db #0x00	; 0
   4000 00                  199 	.db #0x00	; 0
   4001 3C                  200 	.db #0x3c	; 60
   4002 3C                  201 	.db #0x3c	; 60
   4003 00                  202 	.db #0x00	; 0
   4004                     203 _numbers_sp_04:
   4004 00                  204 	.db #0x00	; 0
   4005 28                  205 	.db #0x28	; 40
   4006 00                  206 	.db #0x00	; 0
   4007 00                  207 	.db #0x00	; 0
   4008 00                  208 	.db #0x00	; 0
   4009 28                  209 	.db #0x28	; 40
   400A 00                  210 	.db #0x00	; 0
   400B 00                  211 	.db #0x00	; 0
   400C 00                  212 	.db #0x00	; 0
   400D 28                  213 	.db #0x28	; 40
   400E 28                  214 	.db #0x28	; 40
   400F 00                  215 	.db #0x00	; 0
   4010 00                  216 	.db #0x00	; 0
   4011 3C                  217 	.db #0x3c	; 60
   4012 3C                  218 	.db #0x3c	; 60
   4013 00                  219 	.db #0x00	; 0
   4014 00                  220 	.db #0x00	; 0
   4015 3C                  221 	.db #0x3c	; 60
   4016 3C                  222 	.db #0x3c	; 60
   4017 00                  223 	.db #0x00	; 0
   4018 00                  224 	.db #0x00	; 0
   4019 00                  225 	.db #0x00	; 0
   401A 28                  226 	.db #0x28	; 40
   401B 00                  227 	.db #0x00	; 0
   401C 00                  228 	.db #0x00	; 0
   401D 00                  229 	.db #0x00	; 0
   401E 28                  230 	.db #0x28	; 40
   401F 00                  231 	.db #0x00	; 0
   4020 00                  232 	.db #0x00	; 0
   4021 00                  233 	.db #0x00	; 0
   4022 28                  234 	.db #0x28	; 40
   4023 00                  235 	.db #0x00	; 0
   4024                     236 _numbers_sp_05:
   4024 00                  237 	.db #0x00	; 0
   4025 3C                  238 	.db #0x3c	; 60
   4026 3C                  239 	.db #0x3c	; 60
   4027 00                  240 	.db #0x00	; 0
   4028 00                  241 	.db #0x00	; 0
   4029 3C                  242 	.db #0x3c	; 60
   402A 3C                  243 	.db #0x3c	; 60
   402B 00                  244 	.db #0x00	; 0
   402C 00                  245 	.db #0x00	; 0
   402D 28                  246 	.db #0x28	; 40
   402E 00                  247 	.db #0x00	; 0
   402F 00                  248 	.db #0x00	; 0
   4030 00                  249 	.db #0x00	; 0
   4031 3C                  250 	.db #0x3c	; 60
   4032 3C                  251 	.db #0x3c	; 60
   4033 00                  252 	.db #0x00	; 0
   4034 00                  253 	.db #0x00	; 0
   4035 3C                  254 	.db #0x3c	; 60
   4036 3C                  255 	.db #0x3c	; 60
   4037 00                  256 	.db #0x00	; 0
   4038 00                  257 	.db #0x00	; 0
   4039 00                  258 	.db #0x00	; 0
   403A 14                  259 	.db #0x14	; 20
   403B 00                  260 	.db #0x00	; 0
   403C 00                  261 	.db #0x00	; 0
   403D 3C                  262 	.db #0x3c	; 60
   403E 3C                  263 	.db #0x3c	; 60
   403F 00                  264 	.db #0x00	; 0
   4040 00                  265 	.db #0x00	; 0
   4041 3C                  266 	.db #0x3c	; 60
   4042 3C                  267 	.db #0x3c	; 60
   4043 00                  268 	.db #0x00	; 0
   4044                     269 _numbers_sp_06:
   4044 00                  270 	.db #0x00	; 0
   4045 3C                  271 	.db #0x3c	; 60
   4046 3C                  272 	.db #0x3c	; 60
   4047 00                  273 	.db #0x00	; 0
   4048 00                  274 	.db #0x00	; 0
   4049 3C                  275 	.db #0x3c	; 60
   404A 3C                  276 	.db #0x3c	; 60
   404B 00                  277 	.db #0x00	; 0
   404C 00                  278 	.db #0x00	; 0
   404D 28                  279 	.db #0x28	; 40
   404E 00                  280 	.db #0x00	; 0
   404F 00                  281 	.db #0x00	; 0
   4050 00                  282 	.db #0x00	; 0
   4051 3C                  283 	.db #0x3c	; 60
   4052 3C                  284 	.db #0x3c	; 60
   4053 00                  285 	.db #0x00	; 0
   4054 00                  286 	.db #0x00	; 0
   4055 3C                  287 	.db #0x3c	; 60
   4056 3C                  288 	.db #0x3c	; 60
   4057 00                  289 	.db #0x00	; 0
   4058 00                  290 	.db #0x00	; 0
   4059 28                  291 	.db #0x28	; 40
   405A 14                  292 	.db #0x14	; 20
   405B 00                  293 	.db #0x00	; 0
   405C 00                  294 	.db #0x00	; 0
   405D 3C                  295 	.db #0x3c	; 60
   405E 3C                  296 	.db #0x3c	; 60
   405F 00                  297 	.db #0x00	; 0
   4060 00                  298 	.db #0x00	; 0
   4061 3C                  299 	.db #0x3c	; 60
   4062 3C                  300 	.db #0x3c	; 60
   4063 00                  301 	.db #0x00	; 0
   4064                     302 _numbers_sp_07:
   4064 00                  303 	.db #0x00	; 0
   4065 3C                  304 	.db #0x3c	; 60
   4066 3C                  305 	.db #0x3c	; 60
   4067 00                  306 	.db #0x00	; 0
   4068 00                  307 	.db #0x00	; 0
   4069 3C                  308 	.db #0x3c	; 60
   406A 3C                  309 	.db #0x3c	; 60
   406B 00                  310 	.db #0x00	; 0
   406C 00                  311 	.db #0x00	; 0
   406D 00                  312 	.db #0x00	; 0
   406E 14                  313 	.db #0x14	; 20
   406F 00                  314 	.db #0x00	; 0
   4070 00                  315 	.db #0x00	; 0
   4071 00                  316 	.db #0x00	; 0
   4072 14                  317 	.db #0x14	; 20
   4073 00                  318 	.db #0x00	; 0
   4074 00                  319 	.db #0x00	; 0
   4075 00                  320 	.db #0x00	; 0
   4076 14                  321 	.db #0x14	; 20
   4077 00                  322 	.db #0x00	; 0
   4078 00                  323 	.db #0x00	; 0
   4079 00                  324 	.db #0x00	; 0
   407A 14                  325 	.db #0x14	; 20
   407B 00                  326 	.db #0x00	; 0
   407C 00                  327 	.db #0x00	; 0
   407D 00                  328 	.db #0x00	; 0
   407E 14                  329 	.db #0x14	; 20
   407F 00                  330 	.db #0x00	; 0
   4080 00                  331 	.db #0x00	; 0
   4081 00                  332 	.db #0x00	; 0
   4082 14                  333 	.db #0x14	; 20
   4083 00                  334 	.db #0x00	; 0
   4084                     335 _numbers_sp_08:
   4084 00                  336 	.db #0x00	; 0
   4085 3C                  337 	.db #0x3c	; 60
   4086 3C                  338 	.db #0x3c	; 60
   4087 00                  339 	.db #0x00	; 0
   4088 00                  340 	.db #0x00	; 0
   4089 3C                  341 	.db #0x3c	; 60
   408A 3C                  342 	.db #0x3c	; 60
   408B 00                  343 	.db #0x00	; 0
   408C 00                  344 	.db #0x00	; 0
   408D 28                  345 	.db #0x28	; 40
   408E 14                  346 	.db #0x14	; 20
   408F 00                  347 	.db #0x00	; 0
   4090 00                  348 	.db #0x00	; 0
   4091 3C                  349 	.db #0x3c	; 60
   4092 3C                  350 	.db #0x3c	; 60
   4093 00                  351 	.db #0x00	; 0
   4094 00                  352 	.db #0x00	; 0
   4095 3C                  353 	.db #0x3c	; 60
   4096 3C                  354 	.db #0x3c	; 60
   4097 00                  355 	.db #0x00	; 0
   4098 00                  356 	.db #0x00	; 0
   4099 28                  357 	.db #0x28	; 40
   409A 14                  358 	.db #0x14	; 20
   409B 00                  359 	.db #0x00	; 0
   409C 00                  360 	.db #0x00	; 0
   409D 3C                  361 	.db #0x3c	; 60
   409E 3C                  362 	.db #0x3c	; 60
   409F 00                  363 	.db #0x00	; 0
   40A0 00                  364 	.db #0x00	; 0
   40A1 3C                  365 	.db #0x3c	; 60
   40A2 3C                  366 	.db #0x3c	; 60
   40A3 00                  367 	.db #0x00	; 0
   40A4                     368 _numbers_sp_09:
   40A4 00                  369 	.db #0x00	; 0
   40A5 3C                  370 	.db #0x3c	; 60
   40A6 3C                  371 	.db #0x3c	; 60
   40A7 00                  372 	.db #0x00	; 0
   40A8 00                  373 	.db #0x00	; 0
   40A9 3C                  374 	.db #0x3c	; 60
   40AA 3C                  375 	.db #0x3c	; 60
   40AB 00                  376 	.db #0x00	; 0
   40AC 00                  377 	.db #0x00	; 0
   40AD 28                  378 	.db #0x28	; 40
   40AE 14                  379 	.db #0x14	; 20
   40AF 00                  380 	.db #0x00	; 0
   40B0 00                  381 	.db #0x00	; 0
   40B1 3C                  382 	.db #0x3c	; 60
   40B2 3C                  383 	.db #0x3c	; 60
   40B3 00                  384 	.db #0x00	; 0
   40B4 00                  385 	.db #0x00	; 0
   40B5 3C                  386 	.db #0x3c	; 60
   40B6 3C                  387 	.db #0x3c	; 60
   40B7 00                  388 	.db #0x00	; 0
   40B8 00                  389 	.db #0x00	; 0
   40B9 00                  390 	.db #0x00	; 0
   40BA 14                  391 	.db #0x14	; 20
   40BB 00                  392 	.db #0x00	; 0
   40BC 00                  393 	.db #0x00	; 0
   40BD 00                  394 	.db #0x00	; 0
   40BE 14                  395 	.db #0x14	; 20
   40BF 00                  396 	.db #0x00	; 0
   40C0 00                  397 	.db #0x00	; 0
   40C1 00                  398 	.db #0x00	; 0
   40C2 14                  399 	.db #0x14	; 20
   40C3 00                  400 	.db #0x00	; 0
                            401 	.area _INITIALIZER
                            402 	.area _CABS (ABS)
