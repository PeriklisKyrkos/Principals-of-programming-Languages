%{

#include <stdio.h>

#include <string.h>

#include "parser.tab.h"

%}

positive_int [0-9][0-9]*

positive_float [0-9]*[.][0-9]+

string [a-zA-Z_][a-zA-Z0-9_.]*



%%

"{" {return LEFT_BRACKET; }

"}" {return RIGHT_BRACKET;}

"[" {return LEFT_PAREN;}

"]" {return RIGHT_PAREN; }

"\"" {return DOUBLE_QUOTE;}

":" {return DOUBLE_DOT;}

"," {return COMMA;}


"active" {return MYACTIVE;}

"addOn" {return MYADDON;}

"amount" {return MYAMOUNT;}

"ascending" {return MYASCEND;}

"bonus" {return MYBONUS;}

"categoryType" {return MYCATEGTYPE;}

"columns" {return MYCOLUMNS;}

"content" {return MYCONTENT;}

"descending" {return MYDESCEND;}

"direction" {return MYDIRECTION;}

"distributed" {return MYDISTRIIBUTED;}

"divident" {return MYDIVIDENT;}

"drawBreak" {return MYDRAWBREAK;}

"drawId" {return MYDRAWID;}

"drawTime" {return MYDRAWTIME;}

"false" {return MYBOOLEAN;}

"first" {return MYFIRST;}

"fixed" {return MYFIXED;}

"gameId" {return MYGAMEID;}

"gameType" {return MYGAMETYPE;}

"id" {return MYID;}

"ignoreCase" {return MYIGNCASE;}

"jackpot" {return MYJACKPOT;}

"last" {return MYLAST;}

"list" {return MYLIST;}

"minimumDistributed" {return MYMINDIST;}

"nullHandling" {return MYNULLHANDL;}

"number" {return MYNUMBER;}

"numberOfElements" {return MYNUMOFELEMENTS;}

"prizeCategories" {return MYPRIZECATEG;}

"pricePoints" {return MYPRICEPOINTS;}

"property" {return MYPROPERTY;}

"size" {return MYSIZE;}

"sort" {return MYSORT;}

"status" {return MYSTATUS;}

"totalElements" {return MYTOTALELEMS;}

"totalPages" {return MYTOTALPAGES;}

"visualDraw" {return MYVISUALDRAW;}

"true" {return MYBOOLEAN;}

"wagers" {return MYWAGERS;}

"wagerStatistics" {return MYWAGERSTATS;}

"winners" {return MYWINNERS;}

"winningNumbers" {return MYWIN_NUMBERS;}

[\n\t ] {}

{positive_int} {return MYINT;}

{positive_float} {return MYFLOAT;}

{string} {return MYSTRING;}



%%
