#ifndef FUN_H
#define FUN_H
#include <string>
#include <iostream>
using namespace std;

void do_register(int fd);

void do_login(int fd);

void do_get_list(int fd);

void do_talk_to_one(int fd,string);

void do_talk_to_group(int fd,string);

void do_exit(int fd);
 
#endif
