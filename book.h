#ifndef BOOK_H
#define BOOK_H

#ifndef MAXNAME
#define MAXNAME 50
#endif

#ifndef MAXLEN
#define MAXLEN 200
#endif

typedef struct booktype{
    unsigned long index;
    struct booktype *prior;   //建立双向列表必备=_=
    struct booktype *next;
    char name[MAXNAME];    //图书的书名
    char author[MAXNAME];    //图书的作者
    int flag;     //图书被借出时,flag = 0
    char description[MAXLEN];  //此书的描述
}booktype;

int deletbook(booktype *, unsigned long, char *);   //去除已经废弃不用的书
booktype *creatdata(void);    //初始化时录入图书数据,而且肩负新增图书的任务
booktype *addbook(booktype *, unsigned long, char*, char*, char*)      //新增图书
void searchbook(booktype *, char *);    //检索图书
int loadbook(booktype *, char *);    //借出图书
int repay(booktype *, unsigned long, char *);    //还书

#endif
